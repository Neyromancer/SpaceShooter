import QtQuick 2.0

Rectangle {
    id: root

    color: "lightsteelblue"
    border.color: "black"
    width: bwidth
    height: bheight
    border.width: 1
    radius: 5

    property alias button_title: title.text
    property int bwidth: 75
    property int bheight: 25

    signal buttonClicked()

    Text {
        id: title

        font.family: "Helvetica"
        font.pointSize: 12
        color: "black"

        anchors.horizontalCenter: parent.horizontalCenter
    }

    MouseArea {
        id: mouse_area
        anchors.fill: parent
        onPressed: {
            parent.color = "blue"
            root.buttonClicked()
        }

        onReleased: {
            parent.color = "lightsteelblue"
        }
    }
}
