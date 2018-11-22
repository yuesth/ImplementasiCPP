package com.omahti.basketcounter;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class CounterActivity extends AppCompatActivity {

    int skorA=0;
    int skorB=0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_counter);

        TextView namaTimATextView = (TextView) findViewById(R.id.textViewTimA);
        TextView namaTimBTextView = (TextView) findViewById(R.id.textViewTimB);

        String namaTimA = getIntent().getStringExtra("TimA");
        String namaTimB = getIntent().getStringExtra("TimB");

        namaTimATextView.setText(namaTimA);
        namaTimBTextView.setText(namaTimB);
    }

    public void tambah(View v){
        if(v.getId()==R.id.plus1A){
            skorA+=1;
        }
        else if(v.getId()==R.id.plus2A){
            skorA+=2;
        }
        else if(v.getId()==R.id.plus3A){
            skorA+=3;
        }
        else if(v.getId()==R.id.plus1B){
            skorB+=1;
        }
        else if(v.getId()==R.id.plus2B){
            skorB+=2;
        }
        else if(v.getId()==R.id.plus3B){
            skorB+=3;
        }

        TextView skorATextView = (TextView) findViewById(R.id.skorTimA);
        TextView skorBTextView = (TextView) findViewById(R.id.skorTimB);

        skorATextView.setText(String.valueOf(skorA));
        skorBTextView.setText(String.valueOf(skorB));
    }
}
