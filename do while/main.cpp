#include <iostream>

/***
 * do...while...会先执行一次循环语句，再判断条件
 * 本程序会输出1-10
 */
int main() {
    int number = 1;
    do {
        std::cout << number << std::endl;
        number++;
    } while (number <= 10);
    return 0;
}
