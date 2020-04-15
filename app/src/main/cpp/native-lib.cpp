#include <jni.h>
#include <string>
#include "log.h"
//#include "lsn4/main.h"
#include "lsn5/main.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_y_jniapp_JniFun_stringFromJNI(
        JNIEnv *env,
        jobject) {
    std::string hello = "Hello from C++";

    LOGE("log测试");
    main5();

    return env->NewStringUTF(hello.c_str());
}
