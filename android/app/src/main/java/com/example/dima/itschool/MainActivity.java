package com.example.dima.itschool;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
  }

  public void onPressClick(View v) {
    showActivity();
//    showToast();
//    doAnimation();
  }

  public void showActivity() {
    Intent i = new Intent(this, Main2Activity.class);
    startActivity(i);
  }

  public void showToast() {
    Toast
        .makeText(this, "Heyy!!!", Toast.LENGTH_LONG)
        .show();
  }

  public void doAnimation() {
    View spaceshipImage = findViewById(R.id.button);
    Animation hyperspaceJumpAnimation = AnimationUtils.loadAnimation(this, R.anim.hyperspace_jump);
    spaceshipImage.startAnimation(hyperspaceJumpAnimation);
  }
}
