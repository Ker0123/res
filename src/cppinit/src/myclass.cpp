/**
 * @file class.cpp
 * @author ker_0123 (ker_0123@163.com)
 * @brief 类的内容
 * @version 0.1
 * @date 2025-01-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "myclass.h"

MyClass::MyClass(string initStr)
{
    cout << "[MyClass::Class] Class constructor called" << endl;
    this->value = initStr;
}

bool MyClass::Print()
{
    cout << "[MyClass::Print] Value is " << this->value << endl;
    return true;
}
