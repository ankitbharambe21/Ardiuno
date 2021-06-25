#include <LiquidCrystal.h>
#include<dht.h>

dht DHT;


#define DHT11_PIN 8

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() 
{
  
  lcd.begin(16, 2);

  
}

void loop() 
{
 
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0, 0);

lcd.print(" Humidity " );
lcd.print(DHT.humidity, 1);
lcd.setCursor(0, 1);
lcd.print(" Temparature ");
lcd.print(DHT.temperature, 1);
delay(2000);
 
}
