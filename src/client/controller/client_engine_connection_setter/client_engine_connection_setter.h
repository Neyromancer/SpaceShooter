#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_CONNECTION_SETTER_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_CONNECTION_SETTER_H_

#include <cstdint>
#include <string>

/// \namespace space_shooter
namespace space_shooter {
/// \namespace client
namespace client {

/// \class CleintEngineConnectionSetter
/// \brief Read configuration file and set attributes responsible for establishing
/// \brief client-server connection.
class ClientEngineConnectionSetter {
 public:
  /// \brief class ClientEngineConnectionSetter constructor.
  ClientEngineConnectionSetter();

  /// \brief class ClientEngineConnectionSetter destructor.
  ~ClientEngineConnectionSetter() = default;

  /// \brief class ClientEngineConnectionSetter copy constructor.
  /// \param[in] client_engine_connection_setter class
  /// \param[in] ClientEngineConnectionSetter object.
  ClientEngineConnectionSetter(const ClientEngineConnectionSetter
                               &client_engine_connection_setter) = delete;

  /// \brief class ClientEngineConnectionSetter move constructor.
  /// \param[in] client_engine_connection_setter class
  /// \param[in] ClientEngineConnectionSetter object.
  ClientEngineConnectionSetter(ClientEngineConnectionSetter
                               &&client_engine_connection_setter) = default;

  /// \brief class ClientEngineConnectionSetter copy assignment.
  /// \param[in] client_engine_connection_setter class
  /// \param[in] ClientEngineConnectionSetter object.
  /// \return class ClientEngineConnectionSetter object.
  ClientEngineConnectionSetter &operator=(const ClientEngineConnectionSetter
                                          &client_engine_connection_setter) = delete;


  /// \brief class ClientEngineConnectionSetter move assignment.
  /// \param[in] client_engine_connection_setter class
  /// \param[in] ClientEngineConnectionSetter object.
  /// \return class ClientEngineConnectionSetter object.
  ClientEngineConnectionSetter &operator=(ClientEngineConnectionSetter
                                          &&client_engine_connection_setter) = default;


  /// \brief Return IP address.
  /// \return Ip address (string).
  inline std::string GetIpAddress() const noexcept {
      return ip_;
  }

  /// \brief Return port.
  /// \return Port.
  inline uint16_t GetPort() const noexcept {
      return port_;
  }

  /// \brief Parse configure file.
  void ParseConfigureFile();

 private:
  /// \brief Set IP.
  /// \param[in] ip_addr IP address (string).
  void SetIp(const std::string &ip_addr);
  void SetIp(std::string &&ip_addr);

  /// \brief Set port.
  /// \param[in] port Port.
  void SetPort(uint16_t port);

  std::string ip_{};
  uint16_t port_{};
};
}
}

#endif // CLIENT_SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_CONNECTION_SETTER_H_
