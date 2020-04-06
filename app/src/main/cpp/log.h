//
// Created by pc on 2020/4/6.
// 日志工具
//

#ifndef JNIAPP_L_H
#define JNIAPP_L_H

#endif //JNIAPP_L_H

// 使用ndk的日志库
#include <android/log.h>

#define TAG "-------"
#define LOGD(...)__android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define LOGE(...)__android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)