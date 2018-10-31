/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#ifndef SPACE_SHOOTER_CLIENT_MODEL_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_
#define SPACE_SHOOTER_CLIENT_MODEL_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_

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
 public:
    /// \brief LoginPorcessor constructor.
    explicit LoginProcessor();

    /// \brief LoginPorcessor destructor.
    ~LoginProcessor() = default;

    /// \brief LoginPorcessor copy constructor.
    /// \param[in] login Class LoginProcessor object.
    LoginProcessor(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move constructor.
    /// \param[in] login Class LoginProcessor object.
    LoginProcessor(LoginProcessor &&login) = default;

    /// \brief LoginPorcessor copy assignment.
    /// \param[in] login Class LoginProcessor object.
    /// \return login. LoginProcessor object.
    LoginProcessor &operator=(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move assignment.
    /// \param[in] login Class LoginProcessor object.
    /// \return login. LoginProcessor object.
    LoginProcessor &operator=(LoginProcessor &&login) = default;

    /// \brief Set user name and password.
    /// \param[in] name User name.
    /// \param[in] password Passowrd.
    Q_INVOKABLE void setUserNameAndPassowrd(const QString &name,
                                            const QString &password);

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

 private:
    QString user_name_;
    QString password_;
    bool is_login_correct_;
};

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_MODEL_LOGIN_PROCESSOR_LOGIN_PROCESSOR_H_

