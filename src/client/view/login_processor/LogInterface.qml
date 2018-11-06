import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
//import io.qt.client.backend 1.0

import "qrc:./res/Texture/GuiTextures/" as Button

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

//        signal qmlSignal(string msg)

        TextField {
            id: name
            x: parent.x + 10
            y: parent.y  + 35
            width: 250

            selectByMouse: false
            placeholderText: qsTr("Enter name")
            maximumLength: 128

            onTextChanged: {
                invalidName.text = ""
            }
        }

        TextField {
            id: password
            x: parent.x + 10
            y: name.y  + name.height + 25
            width: 250

            selectByMouse: false
            echoMode: TextInput.Password
            placeholderText: qsTr("Enter password")
            maximumLength: 128

            onTextChanged: {
                invalidPassword.text = ""
            }
        }

        TextField {
            id: invalidName
            x: name.x
            y: name.y + name.height + 1
            height: 20
            width: name.width

            font.family: "Helvet"
            font.pointSize: 8
            font.bold: true
            font.letterSpacing: 1
            textColor: "red"
            horizontalAlignment: TextInput.AlignRight

            style: TextFieldStyle {
                background: Rectangle {color: "steelblue"}
            }
            readOnly: true
            selectByMouse: false
        }

        TextField {
            id: invalidPassword
            x: password.x
            y: password.y + password.height + 1
            height: 20
            width: password.width

            font.family: "Helvet"
            font.pointSize: 8
            font.bold: true
            font.letterSpacing: 1
            textColor: "red"
            horizontalAlignment: TextInput.AlignRight

            style: TextFieldStyle {
                background: Rectangle {color: "steelblue"}
            }
            readOnly: true
            selectByMouse: false
        }

        Button.Button {
            id: sign_in
            button_title: "sign in"
            x: main_form.x + 10
            y: password.x + password.height + 100

            onButtonClicked: {
                backend.setUserNameAndPassowrd(name.text, password.text)
//                Qt.quit();
            }
        }

        Button.Button {
            id: sign_up
            button_title: "sing up"
            x: sign_in.x + sign_in.width + 100
            y: password.x + password.height + 100
        }

        Connections {
            target: backend
            onInvalidUserName: {
                invalidName.text = "invalid user name"
            }
            onInvalidPassword: {
                invalidPassword.text = "invalid password"
            }
        }

        function invalidUserName() {
            console.log("invalid user name")
        }

        function invalidPassword() {
            console.log("invalid password")
        }
    }
}

