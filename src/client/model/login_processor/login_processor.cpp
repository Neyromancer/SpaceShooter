/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#include "login_processor.h"

#include <cctype>

namespace space_shooter {
namespace client {

static bool IsNameValid(const QString &name);
static bool IsPasswordValid(const QString &password);
static bool IsContainVlidSymbols(const QString &password);

LoginProcessor::LoginProcessor()
    : user_name_{}, password_{}, is_login_successful_{false} {}

void LoginProcessor::setUserNameAndPassowrd(const QString &name,
                                            const QString &password) {
    // the following varaibles will be removed later
    auto is_valid_name = false;
    auto is_valid_passowrd = false;

    if (IsNameValid(name)) {
        user_name_ = name;
        is_valid_name = true;
        qDebug() << user_name_;
    } else {
        // signal to QML should be sent from here
        std::cout << "wrong user name" << std::endl;
        emit invalidUserName();
    }

    if (IsPasswordValid(password)) {
        password_ = password;
        is_valid_passowrd = true;
        qDebug() << user_name_;
    } else {
        // signal to QML should be sent from here
        std::cout << "wrong password" << std::endl;
        emit invalidPassword();
    }

    if (is_valid_name && is_valid_passowrd)
        is_login_successful_ = true;
}

static bool IsNameValid(const QString &name) {
    if (name.isEmpty())
        return false;

    if (name.size() <= 4 || name.size() >= 250)
        return false;
    return true;
}

static bool IsPasswordValid(const QString &password) {
    if (password.isEmpty())
        return false;

    if (!IsContainVlidSymbols(password))
        return false;

    return true;
}

static bool IsContainVlidSymbols(const QString &password) {
    QString valid_symbols = "@!#$%";
    for (const auto &el : password) {
        // change contains to regexpr?
        if (!std::isalnum(el.toLatin1()) && !valid_symbols.contains(el,
                                                         Qt::CaseInsensitive))
            return false;
    }
    return true;
}

}   // namespace client
}   // namespace space_shooter


