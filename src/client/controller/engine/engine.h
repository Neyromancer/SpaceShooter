/// \file engine.h
/// \brief
/// \author
/// \data 18.11.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_

#include <QObject>
#include <QString>

#include "./controller/client_engine_connection_setter/client_engine_connection_setter.h"
#include "./controller/signin_processor/signin_processor.h"
#include "./controller/signup_processor/signup_processor.h"

/// \namespace space_shooter
namespace space_shooter {
/// \namespace client
namespace client {

/// \class Engine
/// \brief Client main logic represented here.
class Engine: public QObject {
  Q_OBJECT

 public:
  /// \brief Engine constructor.
  Engine(QObject *object = 0);

  /// \brief Engine destructor.
  virtual ~Engine() {}

  /// \brief Engine copy constructor.
  /// \param [in] engine Class Engine object.
  Engine(const Engine &engine) = delete;

  /// \brief Engine move constructor.
  /// \param [in] engine Class Engine object.
  Engine(Engine &&engine) = default;

  /// \brief Engine copy assignment.
  /// \param [in] engine Class Engine object.
  /// \return class Engine object.
  Engine &operator=(const Engine &engine) = delete;

  /// \brief Engine move assignment.
  /// \param [in] engine Class Engine object.
  /// \return class Engine object.
  Engine &operator=(Engine &&engine) = default;

  /// \brief Send user info.
  /// \param[in] name User name.
  /// \param[in] password User password.
  /// \param[in] email User email.
  /// \param[in] login User login.
  void sendUserInfo(const QString &);

 public slots:
  /// \brief Expose signin user interface.
  /// \param[in] name User name.
  /// \param[in] password User password.
  void signInSendWrapper(QString name, QString password);

  /// \brief Expose signup user interface.
  /// \param[in] name User name.
  /// \param[in] password User password.
  /// \param[in] email User email.
  /// \param[in] login User login.
  void signUpSendWrapper(QString name, QString password, QString email,
                         QString login);

 private:
  ClientEngineConnectionSetter client_engine_setter_;
};

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_
