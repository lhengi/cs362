float poten;
float photo;
float data;
int lightSensor = A5;
int potentialMeter = A4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  poten = analogRead(potentialMeter);
  delay(10);
  poten = analogRead(potentialMeter);
  delay(10);
  
  photo = analogRead(lightSensor);
  delay(10);
  photo = analogRead(lightSensor);
  delay(10);

  data = photo + poten;

  Serial.println(data);

  delay(2);
}
