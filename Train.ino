#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int x = 0; 
int buzzer = 5;
int led = 2;

void setup() { 
	Serial.begin(115200); 
	Serial.setTimeout(0.5); 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  myservo.write(180);
  delay(1000);
} 
void loop() { 
if	(!Serial.available()); 
	x = Serial.readString().toInt(); 

  if (x == 5){ 
    myservo.write(0); 
       digitalWrite(led, HIGH);
     digitalWrite(buzzer, HIGH);
     delay(500);
      digitalWrite(led, LOW);
     digitalWrite(buzzer, LOW);
     delay(500);
     digitalWrite(led, HIGH);
     digitalWrite(buzzer, HIGH);
     delay(500);
      digitalWrite(led, LOW);
     digitalWrite(buzzer, LOW);
     delay(500);
     digitalWrite(led, HIGH);
     digitalWrite(buzzer, HIGH);
     delay(500);
      digitalWrite(led, LOW);
     digitalWrite(buzzer, LOW);
     delay(500);
     digitalWrite(led, HIGH);
     digitalWrite(buzzer, HIGH);
     delay(500);
      digitalWrite(led, LOW);
     digitalWrite(buzzer, LOW);
    x= 0;
  }  
   myservo.write(180); 
   delay(500);
} 
