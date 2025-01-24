/**
 * @file main.cpp
 * @author ker_0123 (ker_0123@163.com)
 * @brief 主函数
 * @version 0.1
 * @date 2025-01-24
 *
 * @copyright -
 *
 */

#include <iostream>
#include <string>
using namespace std;

#include "myclass.h"

int main(int argc, char const *argv[])
{
    cout << "================================================================" << endl;
    cout << "Last build: \t" << __DATE__ << " " << __TIME__ << endl;
    cout << "v0.0.1: \t" << "2025-01-24 11:00:00 " << "第一个小版本" << endl;
    cout << "v0.0.0: \t" << "2025-01-24 10:00:00 " << "搭建好项目环境" << endl;
    cout << "----* START *---------------------------------------------------" << endl;

    // 获取命令行参数(如果没有参数, 则默认为"null")
    string iStr = "null";
    if(argc > 1)
    {
        iStr = string(argv[1]);
    }

    // 存储到类并打印
    MyClass c(iStr);
    c.Print();

    cout << "----* END *-----------------------------------------------------" << endl;
    return 0;
}