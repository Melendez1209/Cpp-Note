//
// Created by Melendez on 22/10/4.
//

#include <iostream>
#include <string>
#include "_5String.h"

/***
 * C风格
 * 语法:char[] 变量名 = "...";
 *
 * C++风格
 * 语法:string 变量名 = "...";
 */
int String() {
    char Str1[] = "你好世界~";
    string Str2 = "Hello World~";
    cout << Str1 << Str2 << endl;
    return 0;
}
