#include <iostream>

/***
 * goto���Ҳ��bug��䣬��ʹ����ɶ��Դ���½�������ѭ��������goto
 */
int main() {
    std::cout << 1 << std::endl;
    std::cout << 2 << std::endl;

    goto FLAG;

    std::cout << 3 << std::endl;
    std::cout << 4 << std::endl;

    FLAG:
    std::cout << "������ת����Ĵ���" << std::endl;

    return 0;
}
