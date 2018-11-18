/// \file engine.h
/// \brief
/// \author
/// \data 18.11.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_

#include <QObject>

/// \namespace space_shooter
namespace space_shooter {
/// \namespace client
namespace client {

/// \client Engine
/// \brief Client main logic represented here.
class Engine {
  Q_OBJECT

 public:
  /// \brief Engine constructor.
  Engine();

  /// \brief Engine destructor.
  ~Engine() = default;

  /// \brief Engine copy constructor.
  /// \param [in] engine Class Engine object.
  Engine(const Engine &engine) = delete;

  /// \brief Engine move constructor.
  /// \param [in] engine Class Engine object.
  Engine(Engine &&engine) = default;

  /// \brief Engine copy assignment.
  /// \param [in] engine Class Engine object.
  /// \return

};

} // namespace client
} // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_CLIENT_ENGINE_H_
