// cpp_fun.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
inline void fun(int i = 30, int j = 20, int k = 10);
inline void fun(double i, double j);
int main()
{
    fun();
    fun(100);
    fun(100, 200);
    fun(100, 200, 300);
    fun(1.1, 2.2);
    system("pause");
}
void fun(int i, int j, int k)
{
    cout << "int fun" << endl;
    cout << i << "\t" << j << "\t"<<k << endl;
}
void fun(double i, double j)
{
    cout << "double fun" << endl;
    cout << i << "\t" << j << endl;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
