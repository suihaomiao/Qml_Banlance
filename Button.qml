import QtQuick 2.0
import Qt.labs.platform 1.1


Rectangle {
    id:button
    width: 70
    height: 30
    color: "lightsteelblue"
    radius: 2
    property string filename: ""
    signal filenameChange()

    Text {
        id:openFile
        anchors.centerIn: parent
        text: qsTr("打开hdr文件")
    }

    FileDialog{
        id:fileDialog1
        fileMode: FileDialog.OpenFiles
        nameFilters: ["hdr文件(*.hdr)","全部文件(*.*)"]
        options: FileDialog.ReadOnly
        //当选定文件时，将选定的文件赋值给filename，用于传递给C++代码使用
        onAccepted: {
            filename = fileDialog1.file;
//            console.debug(filename)
            button.filenameChange()
        }
        onRejected: {
            filename = ""
        }
    }

    MouseArea{
        id:onclicked
        anchors.fill: parent
        onClicked: {
            fileDialog1.open()
//            console.debug(filename)
        }
    }


}


