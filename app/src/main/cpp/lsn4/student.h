//
// Created by pc on 2020/4/6.
//

//保证预处理器执行时只执行1次头文件
#pragma once

#include <iostream>


#ifndef JNIAPP_Student_H
#define JNIAPP_Student_H

#endif //JNIAPP_Student_H

//结构体默认都是public
//构造默认都是private
class Student {

public:
    //构造函数
    Student();

    Student(int name, int age, int sex);

    //析构函数,对象被回收时会回调析构
    ~Student();

private:
    int name;
protected:
    int age;
public:
    int sex;
};