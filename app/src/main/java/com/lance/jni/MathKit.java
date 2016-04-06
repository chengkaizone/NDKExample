package com.lance.jni;

/**
 * Created by lance on 16/4/6.
 */
public class MathKit {

    static {
        System.loadLibrary("MathKit");   //defaultConfig.ndk.moduleName
    }

    /** 调用jni */
    public static native int square(int num);

    public static native String test();

}
