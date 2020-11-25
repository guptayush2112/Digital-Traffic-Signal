int red=7;
int yellow=9;
int green=11;

void setup() {
  // put your setup code here, to run once:

pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);

digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//STOP
digitalWrite(red,HIGH);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
delay(5000);
Serial.println("STOP");

//WAIT
int c=10;
while(c>=0)
{
digitalWrite(red,LOW);
digitalWrite(yellow,HIGH);
digitalWrite(green,LOW);
delay(250);
digitalWrite(yellow,LOW);
delay(250);
Serial.print("WAIT  ");
c--;
}

Serial.println("");

//GO GO GO
Serial.println("GO!");
digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(5000);
}
