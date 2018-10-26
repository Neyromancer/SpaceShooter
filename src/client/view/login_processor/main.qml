import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

import "./" as Button

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
        //mouseArea.onClicked: {
            //Qt.quit();
        //}

        signal qmlSignal(string msg)

        TextField {
            id: name
            x: parent.x + 10
            y: parent.y  + 35
            width: 250

            selectByMouse: false
            placeholderText: qsTr("Enter name")
            maximumLength: 128

        }

        TextField {
            id: password
            x: parent.x + 10
            y: parent.y  + 75
            width: 250

            selectByMouse: false
            echoMode: TextInput.Password
            placeholderText: qsTr("Enter password")
            maximumLength: 128
        }

        Button.Button {
            id: log_in
            x: main_form.x + 10
            y: password.x + password.height + 100
        }

        Button.Button {
            id: sign_up
            x: log_in.x + log_in.width + 100
            y: password.x + password.height + 100
        }
    }
}

