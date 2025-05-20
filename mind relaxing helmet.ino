void setup() {
pinMode(12,OUTPUT);   ///helmet
pinMode(11,OUTPUT);   ///earphone
Serial.begin(9600);
}

void loop() {
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(180000);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(60000);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(240000);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(120000);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(43200000);
}
