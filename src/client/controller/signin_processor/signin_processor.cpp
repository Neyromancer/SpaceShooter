/// \file signin_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#include "signin_processor.h"

#include "./utils/utils.h"

namespace space_shooter {
namespace client {

SigninProcessor::SigninProcessor()
    : user_name_{}, password_{}, is_signin_correct_{false} {}

void SigninProcessor::setUserNameAndPassowrd(const QString &name,
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
        is_signin_correct_ = true;
        user_name_ = name;
        std::cout << "user_name " << name.toStdString() << std::endl;
        password_ = password;
        std::cout << "password " << password.toStdString() << std::endl;
        emit validPasswordUserBlock(name, password);
    }
}

void SigninProcessor::setUserPasswordMatch(bool user_password_match = false) {
    if (!user_password_match) {
        emit invalidPasswordUserBlock();
    } else {
        is_signin_correct_ = user_password_match;
//        emit validPasswordUserBlock();
    }
}

}   // namespace client
}   // namespace space_shooter
