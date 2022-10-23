#include <iostream>

/***
 * goto语句也称bug语句，会使代码可读性大幅下降，多用循环，少用goto
 */
int main() {
    std::cout << 1 << std::endl;
    std::cout << 2 << std::endl;
    goto FLAG;
    std::cout << 3 << std::endl;
    std::cout << 4 << std::endl;
    FLAG:
    std::cout << "这是跳转至后的代码" << std::endl;

    return 0;
}
