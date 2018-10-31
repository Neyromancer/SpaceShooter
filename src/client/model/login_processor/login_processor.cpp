/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#include "login_processor.h"

namespace space_shooter {
namespace client {

LoginProcessor::LoginProcessor()
    : user_name_{}, password_{}, is_login_correct_{false} {}

void LoginProcessor::setUserNameAndPassowrd(const QString &name,
                                            const QString &password) {
    // the following varaibles will be removed later
    auto is_valid_name = false;
    auto is_valid_passowrd = false;

    if (isNameValid(name)) {
        user_name_ = name;
        is_valid_name = true;
        qDebug() << user_name_;
    } else {
        // signal to QML should be sent from here
        std::cout << "wrong user name" << std::endl;
        emit invalidUserName();
    }

    if (isPasswordValid(password)) {
        password_ = password;
        is_valid_passowrd = true;
        qDebug() << user_name_;
    } else {
        // signal to QML should be sent from here
        std::cout << "wrong password" << std::endl;
        emit invalidPassword();
    }

    if (is_valid_name && is_valid_passowrd)
        is_login_correct_ = true;
}

}   // namespace client
}   // namespace space_shooter


