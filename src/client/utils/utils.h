/// \brief utils.h
/// \brief
/// \author
/// \date 31.10.2018

#ifndef SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_
#define SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_

#include <QString>

/// \namespace space_shooter
namespace space_shooter {
/// \namespace client
namespace client {

/// \brief Check if passed name is valid.
/// \param [in] name. User name.
/// \return Result of the check on name correctness.
bool isNameValid(const QString &name);

/// \brief Check if passed email is valid.
/// \param [in] email. Email.
/// \return Result of the check on email correctness.
bool isEmailValid(const QString &email);

/// \brief Check if passed password is valid.
/// \param [in] password. Password.
/// \return Result of the check on password correctness.
bool isPasswordValid(const QString &password);

//bool isContainVlidSymbols(const QString &password);

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_UTILS_UTILS_H_
