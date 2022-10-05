//
// Created by Melendez on 22/9/25.
//

#include <iostream>
#include "_3Float.h"

/***
 * float(单精度) —— 4字节 —— 7位有效数字
 * double(双精度) —— 8字节 —— 15/16位有效数字
 * 不论是用那种精度的浮点型，在输出时都只会显示6位有效数字
 */
int Float() {

    float Float = 3.14;//若不加f，则会被识别成双精度浮点型数据，经过转换后得到单精度
    double Double = 3.1415926;

    cout << "单精度数据类型：" << Float << endl;
    cout << "双精度数据类型：" << Double << endl;

    //科学计数法
    float Float2 = 2e3;// 2 * 10^3
    cout << "科学计数法:" << Float2 << endl;
    return 0;
}
