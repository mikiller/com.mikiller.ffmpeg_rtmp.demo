/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mikiller_ndktest_ndkapplication_NDKImpl */

#ifndef _Included_com_mikiller_ndktest_ndkapplication_NDKImpl
#define _Included_com_mikiller_ndktest_ndkapplication_NDKImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    helloWorld
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_helloWorld
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    pushRTMP
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_pushRTMP
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    initFFMpeg
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_initFFMpeg
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    encodeYUV
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_encodeYUV
  (JNIEnv *, jclass, jbyteArray);


/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    encodeYUV
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_encodeYUV1
        (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jint, jint, jint);


/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    flush
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_flush
  (JNIEnv *, jclass);

/*
 * Class:     com_mikiller_ndktest_ndkapplication_NDKImpl
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mikiller_ndktest_ndkapplication_NDKImpl_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
