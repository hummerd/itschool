
int LEFT_FORWARD = 13;
int LEFT_BACK = 12;

int RIGHT_FORWARD = 9;
int RIGHT_BACK = 8;



void setup() 
{
  pinMode(LEFT_FORWARD,OUTPUT);
  pinMode(LEFT_BACK,OUTPUT);
  pinMode(RIGHT_FORWARD,OUTPUT);
  pinMode(RIGHT_BACK,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int btCmd = Serial.read();
    btCmd = toLower(btCmd);

    if (btCmd == 'w') {
      moveForward();
    }
    if (btCmd == 's') {
      moveBack();
    }
    if (btCmd == 'a') {
      moveLeft();
    }
    if (btCmd == 'd') {
      moveRight();
    }
    if (btCmd == 'q') {
      moveLaround();
    }
    if (btCmd == 'e') {
      moveRaround();
    }
  }
}

int toLower(int b) {
  if (b == 'W') {
    return 'w';
  }
  if (b == 'S') {
    return 's';
  }
  if (b == 'A') {
    return 'a';
  }
  if (b == 'D') {
    return 'd';
  }
  if (b == 'Q') {
    return 'q';
  }
  if (b == 'E') {
    return 'e';
  }
  return b;
}

void moveLeft() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACKWARD, LOW);

  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void moveRight() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);

  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void moveForward() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);

  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void moveBack() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACK, HIGH);

  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACK, HIGH);
}

void moveLaround() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACK, HIGH);

  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACK, LOW);
}

void moveRaround() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);

  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACKWARD, HIGH);
}






// Это к какой функции относится?
  if (Serial.available()) {
    int btCmd = Serial.read();
 
 if (btCmd == 'space') {
      moveForward();
      
void moveForward() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);

  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACKWARD, LOW);
  
  // И тут что-то не так... )))
  if (btCmd == 'space') {
      moveBack();
  
  void moveBack() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACK, HIGH);

  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACK, HIGH);
}