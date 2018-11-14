/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_

#include <QObject>
#include <QString>

#include <string>   // remove after debugging
#include <iostream> // remove after debugging

namespace space_shooter {
namespace client {

class LoginProcessor : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString userName MEMBER user_name_ NOTIFY invalidUserName)
    Q_PROPERTY(QString password MEMBER password_ NOTIFY invalidPassword)
    Q_PROPERTY(bool is_login_correct MEMBER is_login_correct_
               NOTIFY invalidPasswordUserBlock)
    // this might not work correctly
    Q_PROPERTY(bool is_login_correct MEMBER is_login_correct_
               NOTIFY validPasswordUserBlock)
 public:
    /// \brief LoginPorcessor constructor.
    explicit LoginProcessor();

    /// \brief LoginPorcessor destructor.
    ~LoginProcessor() = default;

    /// \brief LoginPorcessor copy constructor.
    /// \param [in] login Class LoginProcessor object.
    LoginProcessor(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move constructor.
    /// \param [in] login Class LoginProcessor object.
    LoginProcessor(LoginProcessor &&login) = default;

    /// \brief LoginPorcessor copy assignment.
    /// \param [in] login Class LoginProcessor object.
    /// \return login. LoginProcessor object.
    LoginProcessor &operator=(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move assignment.
    /// \param [in] login Class LoginProcessor object.
    /// \return login. LoginProcessor object.
    LoginProcessor &operator=(LoginProcessor &&login) = default;

    /// \brief Set user name and password.
    /// \param [in] name User name.
    /// \param [in] password Passowrd.
    Q_INVOKABLE void setUserNameAndPassowrd(const QString &name,
                                            const QString &password);

    /// \brief Set user and password confirmity.
    /// \param [in] user_password_match User and password match.
    void setUserPasswordMatch(bool user_password_match);

    /// \brief Return user name.
    /// \return User name.
    inline QString getUserName() const noexcept {
        return user_name_;
    }

    /// \brief Return password.
    /// \return Passowrd.
    inline QString getPassword() const noexcept {
        return password_;
    }

    /// \brief Return result of login.
    /// \return Result of login.
    inline bool isLoginCorrect() const noexcept {
        return is_login_correct_;
    }

 signals:
    /// \brief Emit signal on invalid user name.
    void invalidUserName();

    /// \brief Emit signal on invalid password.
    void invalidPassword();

    /// \brief Emit signal on invalid password user confirmity.
    void invalidPasswordUserBlock();

    /// \brief Emit signal on valid password user confirmity.
    void validPasswordUserBlock();

 private:
    QString user_name_;
    QString password_;
    bool is_login_correct_;
};

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_
