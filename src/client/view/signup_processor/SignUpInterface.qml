import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

import "qrc:./res/Texture/GuiTextures/" as Button

Window {
    id: root
    x: 100
    y: 100
    width: 300
    height: 400
    visible: false

    Rectangle {
        id: main_form
        color: "steelblue"
        anchors.fill: parent

        TextField {
            id: name
            x: parent.x + 10
            y: parent.y + 35
            width: 250

            selectByMouse: false
            placeholderText: qsTr("Enter name")
            maximumLength: 128

            onTextChanged: {
                invalidName.text = ""
                login.text = signup.createLogin(name.text, email.text)
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
            id: email
            x: parent.x + 10
            y: name.y + name.height + 25
            width: 250

            selectByMouse: false
            placeholderText: qsTr("Enter your email address")
            maximumLength: 128

            onTextChanged: {
                invalidEmail.text = ""
                login.text = signup.createLogin(name.text, email.text)
            }
        }

        TextField {
            id:invalidEmail
            x: email.x
            y: email.y + email.height + 1
            height: 20
            width: email.width

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
            id: login
            x: parent.x + 10
            y: invalidEmail.y + invalidEmail.height + 1
            width: 250

            selectByMouse: false
            placeholderText: qsTr("Enter Signin")
            maximumLength: 128

            onTextChanged: {
                invalidLogin.text = ""
            }
        }

        TextField {
            id: invalidLogin
            x: login.x
            y: login.y + login.height + 1
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
            id: password
            x: parent.x + 10
            y: invalidLogin.y + invalidLogin.height + 75
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

        TextField {
            id: passwordConfirmation
            x: parent.x + 10
            y: invalidPassword.y + invalidPassword.height + 1
            width: 250

            selectByMouse: false
            echoMode: TextInput.Password
            placeholderText: qsTr("Enter password")
            maximumLength: 128

            onTextChanged: {
                invalidPasswordConfirmation.text = ""
            }
        }

        TextField {
            id: invalidPasswordConfirmation
            x: passwordConfirmation.x
            y: passwordConfirmation.y + passwordConfirmation.height + 1
            height: 20
            width: passwordConfirmation.width

            font.family: "Helvet"
            font.pixelSize: 8
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
            id: back
            button_title: "back"
            x: parent.x + 10
            y: passwordConfirmation.y + passwordConfirmation.height + 25

            onButtonClicked: {
                root.visible = false
                back.color = "lightsteelblue"
                close()
            }
        }

        Button.Button {
            id: sign_up
            button_title: "sign up"
            x: back.x + back.width + 100;
            y: passwordConfirmation.y + passwordConfirmation.height + 25

            onButtonClicked: {
                (signup.isPasswordConfirmed(password.text,
                                           passwordConfirmation.text)) ?
                 signup.setNameEmailAndPassword(name.text, email.text,
                                                login.text, password.text) : ""

            }
        }

        Connections {
            target: signup
            onInvalidUserName: {
                invalidName.text = "invalid user name"
            }

            onInvalidPassword: {
                invalidPassword.text = "invalid password"
            }

            onInvalidEmail: {
                invalidEmail.text = "invalid email"
            }

            onInvalidPasswordConfirmation: {
                invalidPasswordConfirmation.text = "entered passwords are not equal"
            }

            onInvalidLoginName: {
                invalidLogin.text = "invalid signin"
            }

            onValidLoginName: {
                root.visible = false
            }
        }

        function getLoginName() {
            return signup.createLogin(name.text, email.text)
        }
    }
}
