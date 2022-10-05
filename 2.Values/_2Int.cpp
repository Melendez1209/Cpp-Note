//
// Created by Melendez on 22/9/25.
//

#include <iostream>
#include "_2Int.h"

/***
 * 短整型——short(2字节)—— -2^15 ~ 2^15-1
 * 整型——int(4字节)—— -2^31 ~ 2^31-1
 * 长整型——long(Windows 4字节;Linux 8字节)—— -2^31 ~ 2^31-1
 * 长长整型——long long(8字节)—— -2^63 ~ 2^63-1
 * 以上四种类型若取值范围不足以使用，可叠加使用
 */
int Int() {
    short Short = 5;
    int Int = 10;
    long Long = 15;
    long long LongLong = 20;
    cout << "4种整型变量相加的结果" << Short + Int + Long + LongLong << endl;
    return 0;
}
