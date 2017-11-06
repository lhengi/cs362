
int lightSensor = A0;
int potentialMeter = A1;
int readpotential = 0;
int analogValue = 0;
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
int speaker = 10;
int frequency = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(speaker,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(lightSensor);
  readpotential = analogRead(potentialMeter);
  if(analogValue <= 50)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else if(analogValue <= 100)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  else if(analogValue <= 150)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if(analogValue <= 200)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  frequency = map(readpotential,0,5,0,255);
  tone(speaker,frequency);

  delay(500);

}
