#include <iostream>

/***
 * 数组的定义方式
 * 数据类型 数组名[数组长度(也就是元素个数，直接传值且后期补进行修改时选填)]={值1 , 值2 , ...(选填)};
 */
int main() {
    int IntList1[] = {1, 2, 3, 4, 5};
    int IntList2[5] = {1, 2, 3};//未写全的部分会用0来代替
    int IntList3[5];
    std::cout << IntList1[0] << std::endl;//打印IntList1中的第1个元素
    //打印IntList2中的所有元素
    for (int i: IntList2) {
        std::cout << i << std::endl;
    }
    return 0;
}
