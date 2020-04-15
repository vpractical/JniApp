//
// Created by pc on 2020/4/8.
//

#include <iostream>
#include "main.h"
#include "../log.h"

#include "EExtends.h"

//普通模板
template <class T>
T getMax(T num1,T num2){
    return num1 > num2 ? num1 : num2;
}

//类模板
template <class c1,class c2,class c3>
class TestClass{
public:
    c1 getType(c1 p){
        return p;
    }
    c2 getType(c2 p){
        return p;
    }
    c3 getType(c3 p){
        return p;
    }
};

//自定义异常,clion vs上写没问题，as上不行
class EException: std::exception{
public:
//    virtual const char* what() const {
//        return "我饿了";
//    };
};

int main5(){
    LOGE("lsn5 main()...");

    //静态多态：在编译期，只看左边类型是谁
    Person* person = new Worker;
    person->show1();//打印了父类Person的成员函数
    delete person;
    //动态多态：父类的show3()是虚函数，调用时打印了子类中重写的函数
    Person* person2 = new Worker;
    person2->show3();//打印了子类Worker的成员函数
    delete person2;

//    //模板模式 类似java的泛型
//    int a = 3;
//    float b = 4.5444;
//    char c = 'A';
//    getMax(a,b);
//    getMax(a,c);
//    TestClass<int,float,char> tc;
//    tc.getType(a);
//    tc.getType(b);
//    tc.getType(c);

//    //普通类型转换
//    const char* c1 = "0x12121212";
//    char* c2 = const_cast<char*>(c1);
//    //尖括号里是转换后的类型
//    char* c3 = "0x12121212";
//    const char* c4 = const_cast<const char*>(c3);
//    //静态类型转换 指针类型的转换
//    Person2* p = new Person2;
//    Worker* w = static_cast<Worker*>(p);
//    //p.show()打印父类，w.show()打印子类
//    delete p;//回收一定是回收new的那个

    //动态类型转换
//    Person2* p2 = new Person2;
//    Worker* w2 = dynamic_cast<Worker*>(p2);
    //转换会失败，new的是父，不能父转子，改为
//    Person2* p3 = new Worker;
//    Worker* w3 = dynamic_cast<Worker*>(p3);

    //异常
    //c中直接写"str"这种字符串时，内部会转为const char*类型
    try {
        throw "我死了";
    }catch (const char* msg){
        LOGE("cache到异常：%s",msg);//cache到异常：我死了
    }

    try {
        throw std::exception();
    }catch (std::exception& e){
        LOGE("cache到异常：%s",e.what());// cache到异常：std::exception,这个打印看不明白
    }

    //throw std::exception("我饿了");
    //throw EException();
    //这两种方式clion vs上可以，as上不行编译不过
}
