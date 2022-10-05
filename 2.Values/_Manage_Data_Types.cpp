//
// Created by Melendez on 22/9/25.
//

#include <iostream>
#include "_Manage_Data_Types.h"

/***
 * 利用 sizeof 关键字求出数据类型所占内存大小
 */
int Manage_Date() {
    //语法：sizeof(数据类型/变量)
    int age = 14;
    cout << "变量age所占内存的大小" << sizeof(age) << endl;
    cout << "数据类型int所占内存的大小" << sizeof(int) << endl;
    return 0;
}