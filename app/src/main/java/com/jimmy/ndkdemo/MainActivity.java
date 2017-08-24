package com.jimmy.ndkdemo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import java.util.Date;

public class MainActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        JniClient jniClient = new JniClient();
        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        StringBuilder sBuild = new StringBuilder();
        sBuild.append(jniClient.stringFromJNI());
        sBuild.append("\n");
        sBuild.append(jniClient.calculateFromJNI("/", 4, 2));
        sBuild.append("\n");

        sBuild.append(jniClient.getDateFromJNI(new Date()));


        tv.setText(sBuild.toString());
    }


}
