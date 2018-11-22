package com.omahti.basketcounter;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class EnterNameActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_enter_name);
    }

    public void lanjut(View v){
        EditText editTextTimA= (EditText) findViewById(R.id.nama_tim_a);
        EditText editTextTimB= (EditText) findViewById(R.id.nama_tim_b);

        String namaTimA= editTextTimA.getText().toString();
        String namaTimB= editTextTimB.getText().toString();

        Intent intent =new Intent(this,CounterActivity.class);
        intent.putExtra("TimA",namaTimA);
        intent.putExtra("TimB",namaTimB);
        startActivity(intent);


    }
}
