//
// Created by Melendez on 22/9/25.
//

#include <iostream>
#include "_2Int.h"

/***
 * �����͡���short(2�ֽ�)���� -2^15 ~ 2^15-1
 * ���͡���int(4�ֽ�)���� -2^31 ~ 2^31-1
 * �����͡���long(Windows 4�ֽ�;Linux 8�ֽ�)���� -2^31 ~ 2^31-1
 * �������͡���long long(8�ֽ�)���� -2^63 ~ 2^63-1
 * ��������������ȡֵ��Χ������ʹ�ã��ɵ���ʹ��
 */
int Int() {
    short Short = 5;
    int Int = 10;
    long Long = 15;
    long long LongLong = 20;
    cout << "4�����ͱ�����ӵĽ��" << Short + Int + Long + LongLong << endl;
    return 0;
}
