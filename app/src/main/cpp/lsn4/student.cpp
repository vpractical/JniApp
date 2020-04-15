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

void People::printArea(Student *student) {
    LOGE("友元类People::printArea()...");
}

void printNext(Student *student){
    LOGE("友元函数printNext()...Student可以访问所有成员");
}

Student Student::operator-(Student& s) {
    Student s3;
    s3.age = this->age + s.age;
    return s3;
}

Student operator+(Student s1, Student s2) {
    Student student;
    student.age = s1.age * s2.age;
    return student;
}




