int inPin=5;
int v=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(inPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
v=digitalRead(inPin);
if(v==HIGH)
{
  digitalWrite(13,HIGH);
  
}
else{
  digitalWrite(13,LOW);
}
}
