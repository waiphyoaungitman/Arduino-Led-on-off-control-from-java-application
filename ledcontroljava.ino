int led = 13;
void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
 String str = Serial.readString();
 if(str.length() >0)
 {
  if(str == "ON")
  {
    digitalWrite(led,HIGH);
  }
  else if(str == "OFF")
  {
    digitalWrite(led,LOW);
  }
 }

}
