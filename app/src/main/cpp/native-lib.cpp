#include <jni.h>
#include <string>
#include <syslog.h>
#include "Vector3D.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_native_1demo_androidnativedemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


