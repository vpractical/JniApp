//
// Created by pc on 2020/4/6.
//
#include <iostream>
#include "main.h"
#include "student.h"
#include "../log.h"
#include "ESingleton.h"

using namespace std;

// 运行main时，test1函数入栈，调用Student无参构造在栈中创建对象，然后出栈,调用它的析构函数
void test1(){
    Student student;//在栈中创建，创建时分配内存
}
void test2(){
    Student *student = new Student;//指针对象，在堆中创建了对象，这时调用了无参构造,new时分配内存
    delete(student);//创建了堆对象要主动回收，这时才能回调析构函数
}
void test3(){
    Student *student = new Student;
    printNext(student);
    People people = People();
    people.printArea(student);
    delete(student);
}
void test4(){
    Student s1 = Student(1,1,1);
    Student s2 = Student(3,3,3);
    Student s3 = s1 + s2;
    printNext(&s3);
    Student *s4 = new Student();
    delete s4;
    //new delete各1次，打印了2次，因为系统运行又各打印1次
}
void test5(){
    ESingleton *instance = ESingleton::getInstance();
    instance->show1();
    instance = ESingleton::getInstance();
    instance ->show1();
    instance->release();
}

//重载了new和delete，写法正确时左边会有箭头
void* operator new(size_t size) {
    LOGE("new了对象,大小是：%d",size);
    return malloc(size);
}
//参数 指针类型 表示接收所有类型
void operator delete(void * p){
    LOGE("delete了对象,地址是：%d",p);
}
//重载运算符 如果定义函数为类的非成员函数，需要为每次操作传递两个参数
//Student operator *(Student s1,Student s2){
//    Student s3;
//    s3.sex = s1.sex * s2.sex;
//    return s3;
//}
// 模拟入口
int main4(){
    LOGE("lsn4 main()...");
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();


}