#include <Arduino.h>
#define pin1 2
#define pin2 3
#define pin3 4
#define pin4 5
#define pin5 6
#define pin6 7
#define pin7 8
#define pin8 9
#define ledV 10
#define ledF 11
int opcion, num = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledF,OUTPUT);

}

void loop() {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);//0
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,LOW);
  Serial.println("¿En que número estoy pensando?");
  while(Serial.available() == 0){
  }
  opcion = Serial.parseInt();
  if(opcion == num){
    Serial.println("Verdadero");
    digitalWrite(ledV,HIGH);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);//7
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
  }else{
    Serial.println("Falso");
    digitalWrite(ledF,HIGH);
    if(opcion == 1){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//1
      digitalWrite(pin5,LOW);
      digitalWrite(pin6,LOW);
      digitalWrite(pin7,LOW);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 2){
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);//2
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,LOW);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 3){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//3
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,LOW);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 4){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//4
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,LOW);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 5){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//5
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,LOW);
    }else if(opcion == 6){
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//6
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,LOW);
    }else if(opcion == 8){
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//8
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 9){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//9
      digitalWrite(pin5,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
    }else if(opcion == 0){
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);//0
      digitalWrite(pin5,LOW);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
    }
  }
  delay(1000);
  digitalWrite(ledV,LOW);
  digitalWrite(ledF,LOW);
  
}