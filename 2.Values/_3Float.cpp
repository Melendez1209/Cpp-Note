//
// Created by Melendez on 22/9/25.
//

#include <iostream>
#include "_3Float.h"

/***
 * float(������) ���� 4�ֽ� ���� 7λ��Ч����
 * double(˫����) ���� 8�ֽ� ���� 15/16λ��Ч����
 * �����������־��ȵĸ����ͣ������ʱ��ֻ����ʾ6λ��Ч����
 */
int Float() {

    float Float = 3.14;//������f����ᱻʶ���˫���ȸ��������ݣ�����ת����õ�������
    double Double = 3.1415926;

    cout << "�������������ͣ�" << Float << endl;
    cout << "˫�����������ͣ�" << Double << endl;

    //��ѧ������
    float Float2 = 2e3;// 2 * 10^3
    cout << "��ѧ������:" << Float2 << endl;
    return 0;
}
