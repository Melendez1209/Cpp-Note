//
// Created by Melendez on 22/10/4.
//

#include <iostream>
#include "_6Bool.h"
<<<<<<< HEAD

/***
 * 布尔值
 * true(本质为1)
 * false(本质为0)
 * 语法:bool 变量名(通常以Is开头，后面接状态) = true/false;
 * 内存占用:1字节
=======
#include "_5String.h"
#include "_4Character.h"

/***
 * 甯冨皵鍊�
 * true(鏈川涓�1)
 * false(鏈川涓�0)
 * 璇硶:bool 鍙橀噺鍚�(閫氬父浠s寮�澶达紝鍚庨潰鎺ョ姸鎬�) = true/false;
>>>>>>> 88c2f5d7368607180032cec6077713023294fe58
 */
int Bool() {
    bool IsRunning = true;
    if (IsRunning) {
<<<<<<< HEAD
        cout << "程序正在运行" << endl;
    } else {
        cout << "程序没有在运行" << endl;
=======
        String();
    } else {
        Character();
>>>>>>> 88c2f5d7368607180032cec6077713023294fe58
    }
    return 0;
}
