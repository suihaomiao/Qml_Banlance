import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("Hello World")

    Rectangle {
        id: root
        anchors.left: parent.left

        Image {
            id: backgroundiamge
            source: "20190806090523.png"
        }
    }
//主所数据
    Arrow{
        id: m_it1
        x:100
        y:59
        rotation: -90
    }

    Arrow{
        id:m_if1
        x:100
        y:127
        rotation: -90
    }

    Arrow{
        id:m_it2
        x:100
        y:397
        rotation: -90
    }

    Arrow{
        id:m_if2
        x:100
        y:465
        rotation: -90
    }
//子所1数据
    Arrow{
        id:s1_it1
        x:360
        y:150
        rotation: -180
    }

    Arrow{
        id:s1_if1
        x:405
        y:150
        rotation: -180
    }
    Arrow{
        id:s1_it2
        x:360
        y:360
        rotation: 0
    }

    Arrow{
        id:s1_if2
        x:405
        y:360
        rotation: 0
    }

//子所2数据
    Arrow{
        id:s2_it1
        x:693
        y:150
        rotation: -180
    }

    Arrow{
        id:s2_if1
        x:738
        y:150
        rotation: -180
    }
    Arrow{
        id:s2_it2
        x:693
        y:360
        rotation: 0
    }

    Arrow{
        id:s2_if2
        x:738
        y:360
        rotation: 0
    }


    //按钮
    Button{
        id:open
        x:700
        y:550
    }


}
