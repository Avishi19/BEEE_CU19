void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,LOW);
delayMicroseconds(2);
digitalWrite(9,HIGH);
delayMicroseconds(10);
digitalWrite(9,LOW);
long time=pulseIn(10,HIGH);
int dist=time*0.017;
Serial.print("distance:");
Serial.println(dist);

if(dist<20)
{
  for(int i=0;i<256;i++)
  {
    analogWrite(3,i);
    delay(25)  }
}
else 
analogWrite(3,0);
}
