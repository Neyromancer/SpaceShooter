/// \file connection.cpp
/// \brief Abstract class implementation.
/// \author
/// \date 16.12.2018

#include "client_engine_connection_setter.h"

extern "C" {
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
}

#include <fstream>
#include <iostream>
#include <stdexcept>

namespace space_shooter {
namespace client {

#define kConnectionConfigurePath "/etc/opt/space_shooter_connection.conf"

ClientEngineConnectionSetter::ClientEngineConnectionSetter() {}

void ClientEngineConnectionSetter::SetIp(const std::string &ip_addr) {
    if (ip_addr.empty())
        throw std::invalid_argument("Invalid IP address.");
    ip_ = ip_addr;
}

void ClientEngineConnectionSetter::SetIp(std::string &&ip_addr) {
    if (ip_addr.empty())
        throw std::invalid_argument("Invalid IP address.");
    ip_ = ip_addr;
}

// i want to know if this method called with
// invalid parameter so i will have check here
void ClientEngineConnectionSetter::SetPort(uint16_t port) {
  if (port <= 1000)
      throw std::invalid_argument("Ivalid port passed.");
  port_ = port;
}

void ClientEngineConnectionSetter::ParseConfigureFile() {
  struct stat sb;
  if(stat(std::string(kConnectionConfigurePath).c_str(), &sb) == -1)
      throw std::invalid_argument("Invalid configuration file path");

  std::ifstream fd;
  fd.open(kConnectionConfigurePath);
  if (!fd.is_open())
    throw std::invalid_argument("Could not open configuration file.");

  std::string line;
  auto is_connection = false;
  while (std::getline(fd, line)) {
    auto shebang_symbol = line.find("#");

    if (line.find("CONNECTION") != std::string::npos &&
      shebang_symbol == std::string::npos) {
      is_connection = true;
    }

    if (is_connection &&
      line.find("IP") != std::string::npos) {
      auto pos = line.find("IP") + std::string("IP").size() + 1;
      SetIp(line.substr(pos));
    }

    if (is_connection &&
      line.find("PORT") != std::string::npos) {
      auto pos = line.find("PORT") + std::string("PORT").size() + 1;
      auto port = static_cast<uint16_t>(std::stoi(line.substr(pos)));
      SetPort(port);
    }
  }
  fd.close();
}

}
}
