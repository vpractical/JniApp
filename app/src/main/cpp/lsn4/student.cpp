//
// Created by pc on 2020/4/6.
//

#include "student.h"
#include "../log.h"

using namespace std;


Student::Student() {
    LOGE("无参构造");
}

Student::Student(int name, int age, int sex) {
    LOGE("有参构造");
    this->name = name;
    this->age = age;
    this->sex = sex;
}

Student::~Student() {
    LOGE("析构");
}