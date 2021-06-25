#define sensor 4
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = digitalRead(sensor);
if(value == 1)
{
  digitalWrite(ledPin, 1);
  Serial.println("TOUCHED ");
}
else
{
  digitalWrite(ledPin,0);
  Serial.println("not TOUCHED ");
}
delay(500);
}
