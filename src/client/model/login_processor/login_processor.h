/// \file login_processor.h
/// \brief
/// \author
/// \date 23.10.2018

#ifndef SPACE_SHOOTER_MODEL_LOGIN_PROCESSOR_H_
#define SPACE_SHOOTER_MODEL_LOGIN_PROCESSOR_H_

#include <QObject>
#include <QDebug>
#include <QString>

#include <string>
#include <iostream>

namespace space_shooter {
namespace client {

class LoginProcessor : public QObject {
    Q_OBJECT
 public:
    /// \brief LoginPorcessor constructor.
    explicit LoginProcessor();

    /// \brief LoginPorcessor destructor.
    ~LoginProcessor() = default;

    /// \brief LoginPorcessor copy constructor.
    /// \param[LoginProcessor] Class LoginProcessor object.
    LoginProcessor(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move constructor.
    /// \param[LoginProcessor] Class LoginProcessor object.
    LoginProcessor(LoginProcessor &&login) = default;

    /// \brief LoginPorcessor copy assignment.
    /// \param[LoginProcessor] Class LoginProcessor object.
    LoginProcessor &operator=(const LoginProcessor &login) = delete;

    /// \brief LoginPorcessor move assignment.
    /// \param[LoginProcessor] Class LoginProcessor object.
    LoginProcessor &operator=(LoginProcessor &&login) = default;

    /// \brief Set user name and password.
    /// \param[in] name User name.
    /// \param[in] password Passowrd.
    Q_INVOKABLE void setUserNameAndPassowrd(const QString &name, const QString &password);


    /// \brief Return user name.
    /// \return User name.
    QString getUserName() const noexcept {
        return user_name_;
    }

    /// \brief Return password.
    /// \return Passowrd.
    QString getPassword() const noexcept {
        return password_;
    }

 private:
    QString user_name_;
    QString password_;
    bool is_login_successful_;
};

} // client
} // namespace space_shooter

#endif // SPACE_SHOOTER_MODEL_LOGIN_PROCESSOR_H_

