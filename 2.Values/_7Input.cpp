//
// Created by Melendez on 22/10/4.
//

#include <iostream>
#include "string"
#include "_7Input.h"

/***
 * 语法:cin << 变量名;
 */
int Input() {
    string InputValue;
    cout << "请输入一个字符串类型:";
    cin >> InputValue;
    cout << "您输入的数据为:" << InputValue << endl;
    return 0;
}
