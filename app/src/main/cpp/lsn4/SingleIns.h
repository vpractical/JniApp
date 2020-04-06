//
// Created by pc on 2020/4/6.
//

#ifndef JNIAPP_SINGLETON_H
#define JNIAPP_SINGLETON_H
#endif //JNIAPP_SINGLETON_H

class SingleIns {

private:
    static SingleIns *instance;
    SingleIns();

public:
    static SingleIns * getInstance();
    void show1();
    void show2();
};



