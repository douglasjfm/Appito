#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_br_com_appito_dgls_appito_Hello_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
