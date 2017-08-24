package com.jimmy.ndkdemo;

import java.util.Date;

public class JniClient {
    static {
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native String calculateFromJNI(String operator, int a, int b);

    public native String getDateFromJNI(Date date);

    public native void mergeApk();

}
