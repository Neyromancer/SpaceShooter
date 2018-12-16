#include "utils.h"

#include <QRegExp>
#include <cctype>

namespace space_shooter {
namespace client {

static bool isContainVlidSymbols(const QString &password);

bool isNameValid(const QString &name) {
    if (name.isEmpty())
        return false;

    if (name.size() < 3 || name.size() >= 250)
        return false;
    return true;
}

bool isEmailValid(const QString &email) {
    QRegExp rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    rx.setCaseSensitivity(Qt::CaseInsensitive);
    rx.setPatternSyntax(QRegExp::RegExp);
    if (!rx.exactMatch(email))
        return false;
    return true;
}

bool isPasswordValid(const QString &password) {
    if (password.isEmpty())
        return false;

    if (password.size() < 8 || password.size() >= 250)
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
