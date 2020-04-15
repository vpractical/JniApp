//
// Created by pc on 2020/4/8.
//

#include "../log.h"

#ifndef JNIAPP_EEXTENDS_H
#define JNIAPP_EEXTENDS_H

#endif //JNIAPP_EEXTENDS_H

class Person {
private:
    int age;
    char sex;
public:
    char* name = "KOG";

    void show1(){
        LOGE("show1()...");
    }
    void show2(){
        LOGE("show2()...");
    }
    //虚函数
    virtual void show3(){
        LOGE("show3()...");
    }

    //纯虚函数 类似java的抽象方法,子类必须重写,需要赋值个0或NULL
    virtual void show4() = 0;
};

class Person2{};

//多继承
//公开继承
//class Worker: private Person私有继承，不能使用父类成员,默认私有继承
class Worker: public Person,Person2{
    void show1(){
        LOGE("show1()...子1");
    }
    void show2(){
        LOGE("show2()...子1");
    }
    void show3(){
        LOGE("show3()...子1");
    }
    void show4(){
        LOGE("show4()...子1");
    }
};


