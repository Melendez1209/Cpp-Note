/*
 * Created by Mark Melendez on 22/9/18 ���� 3:37.
*/

#include <iostream>
#include "_1Add_Values.h"

#define hair 0;//�곣��


int Add_Values() {
    /**
     * ����
     * �﷨���������� ������ = ����ֵ;
     */
    int age = 14;
    std::cout << "Age:" << age << std::endl;
    /**
     *����
     * �﷨1���곣������#define ������ ����ֵ;
     * �﷨2��#define �������� ������ = ����ֵ;
     */

    const int friends = 5;
    int hair_me = hair;//��ȡ��������ĺ곣��

    std::cout << "�ҵķ���:" << hair_me << std::endl;
    std::cout << "�ҵ�����:" << friends << std::endl;

    return 0;
}

