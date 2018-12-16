/// \file signup_processor.cpp
/// \brief
/// \author
/// \date 06.11.2018

#include "signup_processor.h"

#include "./utils/utils.h"

#include <QDebug>

#include <string>

namespace space_shooter {
namespace client {

SignupProcessor::SignupProcessor()
    : email_{}, login_{}, is_signup_correct_{false} {}

void SignupProcessor::setLoginExist(bool is_login_exist) {
    if (!is_login_exist) {
        emit invalidLoginName();
    } else {
        is_signup_correct_ = is_login_exist;
        emit validLoginName();
    }
}

QString SignupProcessor::createLogin(const QString &name, const QString &email) {
    qDebug() << "name " << name;
    qDebug() << "email " << email;
    QString res{};
    if (!name.isEmpty() && !email.isEmpty()) {
        auto indx = 0;
        QString scnd_res_part {};
        if ((indx = email.indexOf('@')) > 0)
            scnd_res_part = email.left(indx);

        res = name + "_" + scnd_res_part;
    }

    return res;
}

void SignupProcessor::setNameEmailLoginAndPassword(const QString &name,
                                                   const QString &email,
                                                   const QString &login,
                                                   const QString &password) {
    qDebug() << "name " << name;
    qDebug() << "email " << email;
    qDebug() << "login " << login;
    qDebug() << "password " << password;

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

    auto is_valid_login = true;
    if (login.isEmpty()) {
        is_valid_login = false;
        emit invalidLoginName();
    } else {
        login_ = login;
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
        emit validUserEmailPasswordBlock(name, password, email, login);
    }
}

bool SignupProcessor::isPasswordConfirmed(const QString &password,
                                          const QString &password_confirmation)
{
    if (password != password_confirmation) {
        emit invalidPasswordConfirmation();
        return false;
    }
    return true;
}

}   // namesapce client
}   // namespace space_shooter
