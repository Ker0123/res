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
#include <unistd.h>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

#include "args.h"

int main(int argc, char const *argv[])
{
    #ifdef _WIN32
    system("C:\\Windows\\system32\\chcp 65001 > NUL"); // 解决Windows下中文乱码问题
    #endif

    cout << "================================================================" << endl;
    cout << "Last build: \t" << __DATE__ << " " << __TIME__ << endl;
    cout << "v0.0.1: \t" << "2025-01-24 11:00 " << "第一个小版本" << endl;
    cout << "v0.0.0: \t" << "2025-01-24 10:00 " << "搭建好项目环境" << endl;
    cout << "----* START *---------------------------------------------------" << endl;

    // 解析命令行参数
    


    cout << "----* END *-----------------------------------------------------" << endl;
    return 0;
}