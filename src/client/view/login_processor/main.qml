import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    x: 100;
    y: 100;
    width: 400;
    height: 200;

    MainForm {
        id: main_form
        color: "steelblue";
        anchors.fill: parent
        mouseArea.onClicked: {
            //Qt.quit();
        }

        signal qmlSignal(string msg)

        TextField {
            id: name
            x: parent.x + 10
            y: parent.y  + 35
            width: 200

            selectByMouse: false
            placeholderText: qsTr("Enter name")
            maximumLength: 128

        }

        TextField {
            id: password
            x: parent.x + 10
            y: parent.y  + 75
            width: 200

            selectByMouse: false
            echoMode: TextInput.Password
            placeholderText: qsTr("Enter password")
            maximumLength: 128
        }
    }

}

