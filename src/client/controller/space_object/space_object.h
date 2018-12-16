/// \file space_object.h
/// \brief
/// \author
/// \data 16.12.2018

#ifndef SPACE_SHOOTER_CLIENT_CONTROLLER_SPACE_OBJECT_SPACE_OBJECT_H_
#define SPACE_SHOOTER_CLIENT_CONTROLLER_SPACE_OBJECT_SPACE_OBJECT_H_

#include <cstdint>
#include <string>

#include <QtGlobal>

/// \namespace space_shooter
namespace space_chooter {
/// \namespace client
namespace client {

/// \class SpaceObject
/// \brief Base class for nearly all space structures.
class SpaceObject {
 public:
  /// \brief Class SpaceObject constructor.
  /// \param [in] health Health/or time before destruction.
  /// \param [in] speed Speed.
  /// \param [in] x Coord x.
  /// \param [in] y Coord y.
  /// \param [in] length Length.
  /// \param [in] width Width.
  SpaceObject(quint16 health = 100, quint16 speed = 0, quint16 x = 0,
              quint16 y = 0, quint16 length = 1, quint16 width = 1);

  /// \brief Class SpaceObject destructor.
  virtual ~SpaceObject() = default;

  /// \brief SpaceObject copy constructor.
  /// \param [in] space_object Class SpaceObject object.
  SpaceObject(const SpaceObject &space_object) = delete;

  /// \brief SpaceObject move constructor.
  /// \param [in] space_object Class SpaceObject object.
  SpaceObject(SpaceObject &&space_object) = default;

  /// \brief SpaceObject copy assignement.
  /// \param [in] space_object Class SpaceObject object.
  SpaceObject &operator=(const SpaceObject &space_object) = delete;

  /// \brief SpaceObject move assignement.
  /// \param [in] space_object Class SpaceObject object.
  SpaceObject &operator=(SpaceObject &&space_object) = default;

  /// \brief Set health.
  /// \param [in] hp Health.
  void SetHealth(quint16 hp);

  /// \brief Return health.
  /// \return Health.
  inline quint16 GetHealth() const noexcept {
    return health_;
  }

  /// \brief Set speed.
  /// \param [in] speed Seed.
  void SetSpeed(quint16 speed);

  /// \brief Return speed.
  /// \return Speed.
  inline qint16 GetSpeed() const {
    return speed_;
  }

  /// \brief Set object size.
  /// \param [in] length Length.
  /// \param [in] widht Width.
  void SetSize(quint16 length, quint16 width);

  /// \brief Return object length.
  inline quint16 GetLength() const noexcept {
    return length_;
  }

  /// \brief Return object width.
  inline quint16 GetWidth() const noexcept {
    return width_;
  }

  /// \param [in] x Coordintate x.
  /// \prarm [in] y Coordinate y.
  void SetCoord(quint16 x, quint16 y);

  /// \brief Return coordinate x.
  inline quint16 GetCoordX() const noexcept {
    return coordX_;
  }

  /// \brief Return coordinate y.
  inline quint16 GetCoordY() const noexcept {
    return coordY_;
  }

  /// \brief Move to the right.
  void MoveRight();

  /// \brief Move to the left.
  void MoveLeft();

  /// \brief Move to the up.
  void MoveUp();

  /// \brief Move to the down.
  void MoveDown();

  virtual void ChangeHealth() = 0;

/* move to graphic representation class
public slots:
    virtual void draw( const string &, int );
*/

 private:
  unsigned int health_;
  int speed_;
  unsigned int length_;
  unsigned int width_;
  unsigned int coordX_;
  unsigned int coordY_;
};

}  // namepsace client
}  // namespace space_shooter

#endif // SPACE_SHOOTER_CLIENT_CONTROLLER_SPACE_OBJECT_SPACE_OBJECT_H_
