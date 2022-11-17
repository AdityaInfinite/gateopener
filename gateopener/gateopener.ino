#include <Servo.h>

Servo myservo;

void blinklight(){
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); 
}
void setup() {
  myservo.attach(9);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED_BUILTIN, HIGH);
  myservo.write(170);
  delay(2000); 
  digitalWrite(LED_BUILTIN, LOW);
  myservo.write(80);
  delay(2000);
  blinklight();
  blinklight();
}

void loop() {
}
