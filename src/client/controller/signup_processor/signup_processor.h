/// \file sign_up.h
/// \brief
/// \author
/// \date 31.10.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_

#include <QObject>

#include "../login_processor/login_processor.h"

namespace space_shooter {
namespace client {

class SignupProcessor : public LoginProcessor {
    Q_OBJECT
//    Q_PROPERTY(QString userName MEMBER user_name_ NOTIFY invalidUserName)
//    Q_PROPERTY(QString password MEMBER password_ NOTIFY invalidPassword)
    Q_PROPERTY(QString password_confirmation MEMBER password_confirmation_
               NOTIFY invalidPasswordConfirmation)
    Q_PROPERTY(QString email MEMBER email_ NOTIFY invalidEmail)
 public:
    // \brief SignupProcessor constructor.
    explicit SignupProcessor();

    /// \brief SignupProcessor destructor.
    ~SignupProcessor() = default;

    /// \brief SignupProcessor copy constructor.
    /// \param[in] signup Class SignupProcessor object.
    SignupProcessor(const SignupProcessor &signup) = delete;

    /// \brief SignupProcessor move constructor.
    /// \param[in] signup Class SignupProcessor object.
    SignupProcessor(SignupProcessor &&signup) = default;

    /// \brief SignupProcessor copy assignment.
    /// \param[in] signup Class SignupProcessor object.
    /// \return SignupProcessor class object.
    SignupProcessor &operator=(const SignupProcessor &signup) = delete;

    /// \brief SignupProcessor move assignment.
    /// \param [in] signup Class SignupProcessor object.
    /// \return SignupProcessor class object.
    SignupProcessor &operator=(SignupProcessor &&signup) = default;

    /// \brief Validates password.
    /// \param [in] password Firsty entered password.
    /// \param [in] password_confirmation Secondly entered password.
    Q_INVOKABLE bool isPasswordConfirmed(const QString &password,
                                         const QString &password_confirmation);

    /// \brief Set user's name, email and passwords (original and confirmation).
    /// \param [in] name User name.
    /// \param [in] email User email address.
    /// \param [in] password Password.
    Q_INVOKABLE void setNameEmailAndPassword(const QString &name,
                                             const QString &email,
                                             const QString &password);

//    /// \brief Return user name.
//    /// \return User name.
//    inline QString getUserName() const noexcept {
//        return user_name_;
//    }

    /// \brief Return user email address.
    /// \return Email address.
    inline QString getUserEmail() const noexcept {
        return email_;
    }

//    /// \brief Return password.
//    /// \return Passowrd.
//    inline QString getPassowrd() const noexcept {
//        return password_;
//    }

    /// \brief Return result of signup form validation.
    /// \return Result of validation.
    inline bool isSignupCorrect() const noexcept {
        return is_signup_correct_;
    }

 signals:
//    /// \brief Emit signal on ivalid user name.
//    void invalidUserName();

    /// \brief Emit signal on invalid ematil.
    void invalidEmail();

//    /// \brief Emit signal on invalid password.
//    void invalidPassword();

    /// \brief Emit signal on invalid passowrd confirmation.
    void invalidPasswordConfirmation();

 private:
//    QString user_name_;
    QString email_;
//    QString password_;
    QString password_confirmation_;
    bool is_signup_correct_;
};

} // namespace client
} // namesapce space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_
