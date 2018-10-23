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
    LoginProcessor() {}
    ~LoginProcessor() = default;

    /// \brief
    /// \param[QString] name User name.
    Q_INVOKABLE void setUserName(const QString &name);

    QString getUserName() const noexcept {
        return user_name_;
    }

    /// \brief
    /// \param[QString] password Passowrd.
    Q_INVOKABLE void setPassword(const QString &password);

    QString getPassword() const noexcept {
        return password_;
    }

 private:
    QString user_name_;
    QString password_;

};

} // client
} // namespace space_shooter

#endif // SPACE_SHOOTER_MODEL_LOGIN_PROCESSOR_H_

