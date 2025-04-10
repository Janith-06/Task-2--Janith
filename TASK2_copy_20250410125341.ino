#include <LiquidCrystal_I2C.h>


#define IR_rec 4
int count=0;

LiquidCrystal_I2C lcd(0*27, 16 , 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  pinMode(IR_rec,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2,0);
  lcd.print("Total:-");
  // digitalWrite(IR_rec,HIGH);
  if(digitalRead(IR_rec)==LOW){
    count++;
    while(digitalRead(IR_rec)==LOW){

    }
  }

  Serial.println(count);
  lcd.setCursor(2,0);
  lcd.print("Total:-");
  lcd.setCursor(0,2);
  lcd.print(count);
  delay(500);
  lcd.clear();


}
