//
// Created by joinhov on 16/4/6.
//

#include <jni.h>

#include "com_lance_jni_MathKit.h"

/*
 * Class:     com_lance_jni_MathKit
 * Method:    square
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL
Java_com_lance_jni_MathKit_square
        (JNIEnv *, jclass, jint num) {

        return num * num;
}

/*
 * Class:     com_lance_jni_MathKit
 * Method:    test
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_lance_jni_MathKit_test
        (JNIEnv *env, jclass) {

        return env->NewStringUTF("MathKit");
}