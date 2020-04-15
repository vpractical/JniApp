//
// Created by pc on 2020/4/6.
//

#ifndef JNIAPP_SINGLETON_H
#define JNIAPP_SINGLETON_H
#endif //JNIAPP_SINGLETON_H

class ESingleton {

private:
    static ESingleton *instance;
    ESingleton();
    ~ESingleton();

public:
    static ESingleton * getInstance();
    void show1();
    void show2();
    //
    void release();
};



