/// \file sign_up.h
/// \brief
/// \author
/// \date 31.10.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_

#include <QObject>
#include <QString>

#include "../signin_processor/signin_processor.h"

/// \namespace space_shooter
namespace space_shooter {
/// \namespace client
namespace client {

/// \class SignupPorcessor.
/// \brief Exchange information between QML GUI and Qt back.
class SignupProcessor : public SigninProcessor {
    Q_OBJECT
//    Q_PROPERTY(QString userName MEMBER user_name_ NOTIFY invalidUserName)
//    Q_PROPERTY(QString password MEMBER password_ NOTIFY invalidPassword)
    Q_PROPERTY(QString email MEMBER email_ NOTIFY invalidEmail)
    Q_PROPERTY(QString password_confirmation MEMBER password_confirmation_
               NOTIFY invalidPasswordConfirmation)
    Q_PROPERTY(QString login MEMBER signin_ NOTIFY invalidLoginName)

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


    /// \brief Set user login name condition.
    /// \param [in] is_login_exist User login name condition.
    void setLoginExist(bool is_login_exist);

    /// \brief Offer possible login.
    /// \param [in] name User name.
    /// \param [in] email User email.
    /// \param [out] Login name.
    Q_INVOKABLE QString createLogin(const QString &name, const QString &email);

    /// \brief Set user's name, email and passwords (original and confirmation).
    /// \param [in] name User name.
    /// \param [in] email User email address.
    /// \param [in] login Login.
    /// \param [in] password Password.
    Q_INVOKABLE void setNameEmailLoginAndPassword(const QString &name,
                                                  const QString &email,
                                                  const QString &login,
                                                  const QString &password);

    /// \brief Return user email address.
    /// \return Email address.
    inline QString getUserEmail() const noexcept {
        return email_;
    }

    /// \brief Return login.
    /// return Login.
    inline QString getLogin() const noexcept {
        return signin_;
    }

    /// \brief Validates password.
    /// \param [in] password. Firsty entered password.
    /// \param [in] password_confirmation Secondly entered password.
    /// \return Result of comparison password and password_confirmation.
    Q_INVOKABLE bool isPasswordConfirmed(const QString &password,
                                         const QString &password_confirmation);

    /// \brief Return result of signup form validation.
    /// \return Result of validation.
    inline bool isSignupCorrect() const noexcept {
        return is_signup_correct_;
    }

 signals:

    /// \brief Emit signal on invalid ematil.
    void invalidEmail();

    /// \brief Emit signal on invalid login.
    void invalidLoginName();

    /// \brief Emit signal on invalid passowrd confirmation.
    void invalidPasswordConfirmation();

    /// \brief Emit signal on entering valid signup parameters.
    void validLoginName();

 private:
    QString email_;
    QString password_confirmation_;
    QString signin_;
    bool is_signup_correct_;
};

} // namespace client
} // namesapce space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_SIGNUP_PROCESSOR_SIGNUP_PROCESSOR_H_
