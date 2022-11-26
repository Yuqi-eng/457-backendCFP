package com.example.attempt2java;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import android.content.Intent;
import java.util.concurrent.ThreadLocalRandom;

import androidx.appcompat.app.AppCompatActivity;

import org.jetbrains.annotations.NotNull;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.FormBody;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

public class MainActivity extends AppCompatActivity {

    // declare attribute for textview
    private TextView pagenameTextView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        pagenameTextView = findViewById(R.id.pagename);

        // nextInt is normally exclusive of the top value,
        // so add 1 to make it inclusive
        // int randomNum = ThreadLocalRandom.current().nextInt(0, 3);

        Button button = findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // nextInt is normally exclusive of the top value,
                // so add 1 to make it inclusive
                int randomNum = ThreadLocalRandom.current().nextInt(0, 3);

                // creating a client
                OkHttpClient okHttpClient = new OkHttpClient();

                // creating a form that passes parameters
                RequestBody formbody = new FormBody.Builder().add("value", String.valueOf(randomNum)).build();

                // building a request
                Request request = new Request.Builder().url("http://192.168.1.76:5000/classify").post(formbody).build();

                // making call asynchronously
                okHttpClient.newCall(request).enqueue(new Callback() {
                    @Override
                    // called if server is unreachable
                    public void onFailure(@NotNull Call call, @NotNull IOException e) {
                        runOnUiThread(new Runnable() {
                            @Override
                            public void run() {
                                Toast.makeText(MainActivity.this, "server down", Toast.LENGTH_SHORT).show();
                                pagenameTextView.setText("error connecting to the server");
                            }
                        });
                    }

                    @Override
                    // called if we get a
                    // response from the server
                    public void onResponse(
                            @NotNull Call call,
                            @NotNull Response response)
                            throws IOException {pagenameTextView.setText(response.body().string());
                        //Intent intent = new Intent(MainActivity.this, DummyActivity.class);
                        //startActivity(intent);
                        //finish();
                    }
                });
            }
        });


    }
}

