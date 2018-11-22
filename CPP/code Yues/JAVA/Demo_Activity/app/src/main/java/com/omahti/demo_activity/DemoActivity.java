package com.omahti.demo_activity;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.app.Activity;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class DemoActivity extends AppCompatActivity {
    private Button btn_tampil, btn_hapus;
    private EditText txt_input;
    private TextView txt_output;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_demo);

        EditText txt_input = (EditText) findViewById(R.id.txt_input);
        TextView txt_output = (TextView) findViewById(R.id.txt_output);

        btn_tampil = (Button) findViewById(R.id.btn_tampil);
        btn_tampil.setOnClickListener(this);

        btn_hapus = (Button) findViewById(R.id.btn_hapus);
        btn_hapus.setOnClickListener(this);
    }

    public void onClick(View v) {
        switch (v.getId()) {
            case R.id.btn_tampil:
                txt_output.setText(txt_input.getText());
                break;

            case R.id.btn_hapus:
                txt_output.setText("");
                break;

            default:
                break;
        }
    }
}