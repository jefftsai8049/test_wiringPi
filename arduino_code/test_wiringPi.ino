void setup() {
  Serial.begin(9600);  
  pinMode(13,OUTPUT);
}

void loop() {
  Serial.print("Yo! I'm Arduino!\n");
  delay(1000);
  if(Serial.available())
  {
    char msg = Serial.read();
    if(msg == 'H')
      digitalWrite(13,HIGH);
     else if(msg == 'L')
       digitalWrite(13,LOW);
  }
}

