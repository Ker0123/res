/**
 * @file class.h
 * @author ker_0123 (ker_0123@163.com)
 * @brief 我的C++类
 * @version 0.1
 * @date 2025-01-24
 * 
 * @copyright -
 * 
 */

#pragma once

#include <iostream>

using namespace std;

/// @brief 我的C++类
class MyClass
{
private:
    string value; ///< 私有变量

public:
    /// @brief 构造函数
    /// @param value 初始化值
    MyClass(string initStr);

    /// @brief 打印值
    /// @return 成功->true; 失败->false
    bool Print();
};
