/// \file signup_processor.cpp
/// \brief
/// \author
/// \date 06.11.2018

#include "signup_processor.h"

#include "./utils/utils.h"

namespace space_shooter {
namespace client {

SignupProcessor::SignupProcessor()
    : email_{}, is_signup_correct_{false} {}

bool SignupProcessor::isPasswordConfirmed(const QString &password,
                                          const QString &password_confirmation)
{
    if (password != password_confirmation)
        return false;
    return true;
}

void SignupProcessor::setNameEmailAndPassword(const QString &name,
                                              const QString &email,
                                              const QString &password) {
    auto is_valid_name = true;
    if (!isNameValid(name)) {
        is_valid_name = false;
        emit invalidUserName();
    }

    auto is_valid_email = true;
    if (!isEmailValid(email)) {
        is_valid_email = false;
        emit invalidEmail();
    }

    auto is_valid_password = true;
    if (!isPasswordValid(password)) {
        is_valid_password = false;
        emit invalidPassword();
    }

    if (is_valid_name && is_valid_email && is_valid_password) {
        is_signup_correct_ = true;
        setUserNameAndPassowrd(name, password);
        email_ = email;
    }
}

}   // namesapce client
}   // namespace space_shooter
