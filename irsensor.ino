int led=13;
int obstpin=7;
int obst=HIGH;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(obstpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
obst = digitalRead(obstpin);
if(obst == 0)
{
  Serial.println("obstacle");
  digitalWrite(led, HIGH);
}
else
{
  Serial.println("clr");
  digitalWrite(led, LOW);
}
delay(200);
}
