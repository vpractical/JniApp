//
// Created by pc on 2020/4/6.
//

#include "ESingleton.h"
#include "../log.h"

ESingleton::ESingleton() {
    LOGE("单例：构造");
}

ESingleton::~ESingleton() {
    LOGE("单例：析构");
}

ESingleton * ESingleton::instance = nullptr;

ESingleton * ESingleton::getInstance() {
    //c++11之后，static对象创建的线程安全问题，内部已处理，不用使用锁处理了
    if(!instance){
        LOGE("单例：创建static对象");
        instance = new ESingleton();
    }
    LOGE("单例：获取对象");
    return instance;
}

void ESingleton::show1() {
    LOGE("单例：show1()");
}

void ESingleton::show2() {

}

void ESingleton::release() {
    LOGE("单例：释放对象");
    if(instance){
        delete instance;
        instance = nullptr;
    }
}





