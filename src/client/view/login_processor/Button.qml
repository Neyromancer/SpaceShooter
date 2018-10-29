import QtQuick 2.0

Rectangle {
    id: button

    color: "lightsteelblue"
    border.color: "black"
    width: bwidth
    height: bheight
    border.width: 1
    radius: 5

    property string title: "log in"
    property int bwidth: 75
    property int bheight: 25
//    enabled: false

    Text {
        id: button_sign
        text: title
        font.family: "Helvetica"
        font.pointSize: 12
        color: "black"

        anchors.horizontalCenter: parent.horizontalCenter
    }

    MouseArea {
        anchors.fill: parent
        onPressed: {
            parent.color = "blue"
//            enabled: true
        }

        onReleased: {
            parent.color = "lightsteelblue"
        }
    }
}
