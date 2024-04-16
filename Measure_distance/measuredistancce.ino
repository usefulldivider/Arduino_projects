#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define BUTTON 11
#define echoPin 12
#define trigPin 13
long duration, distance,distance_inch;
int bp=0;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(BUTTON, INPUT);
  lcd.init();
  lcd.backlight();
  
}
void dis_cm(long duration)
{
  distance = (duration/2) *0.03435;

  if (distance >= 200 || distance <= 0){
    
    lcd.setCursor(0, 0);
    lcd.print("out of range");
  }
  else {
    lcd.setCursor(0,0);
    lcd.print(distance);
    lcd.print(" cm");
  }
  
}
void dis_inch(long duration)
{
 distance_inch = (duration/2) * 0.0133 ;
   if (distance_inch >= 78 || distance_inch <= 0){
    
    lcd.setCursor(0, 0);
    lcd.print("out of range");
  }
  else {
    lcd.setCursor(0,0);
    lcd.print(distance_inch);
    lcd.print(" inch");
  }
  
}
void loop() {
  delay(500);
  lcd.clear();
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  Serial.println(digitalRead(BUTTON));
  if (digitalRead(BUTTON) == LOW) {
    delay(50); 
    if (bp == 0) 
      bp = 1;
    else 
      bp = 0;
    }
    switch(bp)
    {
      case 0:dis_cm(duration);
      break;
      case 1:dis_inch(duration);
      break;
    }
}
