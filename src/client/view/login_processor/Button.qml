import QtQuick 2.0

Rectangle {
    id: button

    width: 75
    height: 25
    color: "lightsteelblue"
    border.color: "black"
    border.width: 1
    radius: 5

    Text {
        id: button_sign
        text: "log in"
        font.family: "Helvetica"
        font.pointSize: 12
        color: "black"

        anchors.horizontalCenter: parent.horizontalCenter
    }

    MouseArea {
        anchors.fill: parent
        onPressed: {
            parent.color = "blue"
        }

        onReleased: {
            parent.color = "lightsteelblue"
        }
    }
}
