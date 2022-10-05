/*
 * Created by Mark Melendez on 22/9/18 下午 3:37.
*/

#include <iostream>
#include "_1Add_Values.h"

#define hair 0;//宏常量


int Add_Values() {
    /**
     * 变量
     * 语法：数据类型 变量名 = 变量值;
     */
    int age = 14;
    std::cout << "Age:" << age << std::endl;
    /**
     *常量
     * 语法1（宏常量）：#define 常量名 常量值;
     * 语法2：#define 数据类型 常量名 = 常量值;
     */

    const int friends = 5;
    int hair_me = hair;//调取到函数外的宏常量

    std::cout << "我的发量:" << hair_me << std::endl;
    std::cout << "我的朋友:" << friends << std::endl;

    return 0;
}

