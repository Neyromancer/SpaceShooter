/// \brief utils.h
/// \brief
/// \author
/// \date 31.10.2018

#ifndef SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_
#define SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_

#include <QString>

namespace space_shooter {
namespace client {

static bool isNameValid(const QString &name);
static bool isEmailValid(const QString &email);
static bool isPasswordValid(const QString &password);
static bool isContainVlidSymbols(const QString &password);

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_
