#include "utils.h"

#include <QRegExp>

#include <cctype>

namespace space_shooter {
namespace client {

bool isNameValid(const QString &name) {
    if (name.isEmpty())
        return false;

    if (name.size() <= 4 || name.size() >= 250)
        return false;
    return true;
}

bool isEmailValid(const QString &email) {
    QRegExp rx("");
    rx.setCaseSensitivity(Qt::CaseInsensitive);
    if (!rx.exactMatch(email))
        return false;
    return true;
}

bool isPasswordValid(const QString &password) {
    if (password.isEmpty())
        return false;

    if (!isContainVlidSymbols(password))
        return false;

    return true;
}

bool isContainVlidSymbols(const QString &password) {
    QString valid_symbols = "@!#$%";
    for (const auto &el : password) {
        // change contains to regexpr?
        if (!std::isalnum(el.toLatin1()) && !valid_symbols.contains(el,
                                                         Qt::CaseInsensitive))
            return false;
    }
    return true;
}

} // namespace client
} // namespace space_shooter
