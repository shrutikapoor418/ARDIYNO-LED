void setup() {
  // put your setup code here, to run once:
    pinMode(2,OUTPUT);
      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
delay(3000);

digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
delay(3000);


}
