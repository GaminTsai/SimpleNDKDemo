#include <jni.h>
#include <string.h>
#include <stdio.h>


JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_stringFromJNI
        (JNIEnv *env, jobject jobj) {
    return (*env)->NewStringUTF(env, "测试一下");
}

JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_calculateFromJNI
        (JNIEnv *env, jobject jobj, jstring jstr, jint i, jint j) {
    jboolean *isCopy;
    jchar *operator = (*env)->GetStringChars(env, jstr, isCopy);
    printf("iscopy %p", isCopy);

    int result = 0;
    if (strcmp("+", operator) == 0) {
        result = i + j;
    } else if (strcmp("-", operator) == 0) {
        result = i - j;

    } else if (strcmp("*", operator) == 0) {
        result = i * j;

    } else if (strcmp("/", operator) == 0) {
        if (j == 0) {
            return (*env)->NewStringUTF(env, "除数不能为0");
        }
        result = i / j;
    } else {
        return (*env)->NewStringUTF(env, "操作符输入有误");
    }
    char buffer[50];
    sprintf(buffer, "计算结果为%d", result);
    //释放局部变量
    (*env)->ReleaseStringChars(env, jstr, operator);
    return (*env)->NewStringUTF(env, buffer);
}

//c 调用java方法
JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_getDateFromJNI
        (JNIEnv *env, jobject jobj, jobject jdate) {
    jclass jcls = (*env)->GetObjectClass(env, jdate);
    jmethodID getYearMid = (*env)->GetMethodID(env, jcls, "getYear", "()I");
    jint year = (*env)->CallIntMethod(env, jdate, getYearMid);

    //通知jvm回收局部变量jdate
    (*env)->DeleteLocalRef(env, jdate);

    char result[50];
    sprintf(result, "今年是%d", year);
    return (*env)->NewStringUTF(env, result);

}