#include <ESP32Servo.h>
int servoPin = 2;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 30; i<=150; i = i+10)
  {
    myservo.write(i);
    delay(50);
  }
  delay(1000);
  for(int i = 150; i>30;i = i-10)
  {
    myservo.write(i);
    delay(50);
  }
  delay(1000);
  
}
