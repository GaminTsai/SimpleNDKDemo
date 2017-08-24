/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jimmy_ndkdemo_JniClient */

#ifndef _Included_com_jimmy_ndkdemo_JniClient
#define _Included_com_jimmy_ndkdemo_JniClient
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jimmy_ndkdemo_JniClient
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_stringFromJNI
  (JNIEnv *, jobject);

/*
 * Class:     com_jimmy_ndkdemo_JniClient
 * Method:    calculateFromJNI
 * Signature: (Ljava/lang/String;II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_calculateFromJNI
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     com_jimmy_ndkdemo_JniClient
 * Method:    getDateFromJNI
 * Signature: (Ljava/util/Date;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jimmy_ndkdemo_JniClient_getDateFromJNI
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_jimmy_ndkdemo_JniClient
 * Method:    mergeApk
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jimmy_ndkdemo_JniClient_mergeApk
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
