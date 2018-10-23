/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#include "login_processor.h"

namespace space_shooter {
namespace client {

LoginProcessor::LoginProcessor()
    : user_name_{}, password_{} {}

void LoginProcessor::setUserName(const QString &name) {
    if (IsNameValid(name))
        user_name_ = name;
}

void LoginProcessor::setPassword(const QString &password) {
    if (IsPasswordValid(password))
        password_ = password;
}

}   // namespace client
}   // namespace space_shooter


