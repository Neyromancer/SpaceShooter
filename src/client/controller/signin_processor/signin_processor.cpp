/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#include "signin_processor.h"

#include "./utils/utils.h"

namespace space_shooter {
namespace client {

LoginProcessor::LoginProcessor()
    : user_name_{}, password_{}, is_login_correct_{false} {}

void LoginProcessor::setUserNameAndPassowrd(const QString &name,
                                            const QString &password) {
    // the following varaibles will be removed later
    auto is_valid_name = true;
    if (!isNameValid(name)) {
        is_valid_name = false;
        std::cout << "wrong user name" << std::endl;
        emit invalidUserName();
    }

    auto is_valid_passowrd = true;
    if (!isPasswordValid(password)) {
        is_valid_passowrd = false;
        std::cout << "wrong password" << std::endl;
        emit invalidPassword();
    }

    if (is_valid_name && is_valid_passowrd) {
        is_login_correct_ = true;
        user_name_ = name;
        password_ = password;
    }
}

void LoginProcessor::setUserPasswordMatch(bool user_password_match = false) {
    if (!user_password_match) {
        emit invalidPasswordUserBlock();
    } else {
        is_login_correct_ = user_password_match;
        emit validPasswordUserBlock();
    }
}

}   // namespace client
}   // namespace space_shooter


