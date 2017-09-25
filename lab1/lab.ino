
int greenpin = 8;
int redpin = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(redpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(redpin,HIGH);
  delay(1000);
  digitalWrite(redpin,LOW);
  delay(1000);
  digitalWrite(greenpin,HIGH);
  delay(1000);
  digitalWrite(greenpin,LOW);
  delay(1000);
  

}
