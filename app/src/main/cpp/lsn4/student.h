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

    friend class People;
    friend void printNext(Student *student);

    //重载运算符,类似java中重写+的实现,比如得到两个参数的age和
    Student operator-(Student& s);
    friend Student operator+(Student s1,Student s2);
};

//友元类的所有成员函数都是另一个类的友元函数，都可以访问另一个类中的隐藏信息（包括私有成员和保护成员）
class People{
public:
    int area;
    void printArea(Student *student);
};

//友元函数是指某些虽然不是类成员函数却能够访问类的所有成员的函数
void printNext(Student *student);