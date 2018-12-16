import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Window {
    id:root
    visible: true
    x: 100;
    y: 100;
    width: 400;
    height: 200;


    Rectangle {
      x: 0
      y: 0
      width: 100
      height: 100
      color: "red"
      border.color: "black"
      border.width: 5
      radius: 10
    }
}

