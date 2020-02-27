import QtQuick 2.0

//创建箭头的qml
//箭头包括图标和点击事件；通过点击事件发出信号！
Item{
    width: 36
    height: 36

    Image{
        id: arrow
        source: "arrow.png"

        Behavior on rotation{
            NumberAnimation{
                id:myrotation
                duration: 200
            }
        }

        }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            if(myrotation.running == true) return;
            arrow.rotation += 180
        }
    }
    }



