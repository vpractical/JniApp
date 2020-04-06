//
// Created by pc on 2020/4/6.
//

#include "main.h"
#include "student.h"

// 运行main时，test1函数入栈，调用Student无参构造在栈中创建对象，然后出栈,调用它的析构函数
void test1(){
    Student student;//在栈中创建
}
void test2(){
    Student *student = new Student;//指针对象，在堆中创建了对象，这时调用了无参构造
    delete(student);//创建了堆对象要主动回收，这时才能回调析构函数
}
void test3(){

}

// 模拟入口
int main(){
    test1();
    test2();
}