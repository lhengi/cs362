int in_button = 3;
int de_button = 2;
int first_bit_red =8;
int second_bit_blue = 9;
int third_bit_green = 10; 
int de_state = 0;
int in_state = 0;
int number = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(in_button,INPUT);
  pinMode(de_button,INPUT);
  pinMode(first_bit_red,OUTPUT);
  pinMode(second_bit_blue,OUTPUT);
  pinMode(third_bit_green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  in_state = digitalRead(in_button);
  de_state = digitalRead(de_button);
  

  if(in_state == HIGH)
  {
    number++;
    delay(200);
  }

  if(de_state == HIGH)
  {
    number--;
    delay(200);
  }

  Serial.print(number);
  

  if(number > 7)
  {
    number = 0;
  }
  if(number < 0)
  {
    number = 0;
  }

  int copy_number = number;
  if(copy_number%2 == 1)
  {
    digitalWrite(first_bit_red,HIGH);
  }
  else
  {
    digitalWrite(first_bit_red,LOW);
  }
  copy_number = copy_number >> 1;

  if(copy_number%2 == 1)
  {
    digitalWrite(second_bit_blue,HIGH);
  }
  else
  {
    digitalWrite(second_bit_blue,LOW);
  }
  copy_number = copy_number >> 1;

  if(copy_number%2 == 1)
  {
    digitalWrite(third_bit_green,HIGH);
  }
  else
  {
    digitalWrite(third_bit_green,LOW);
  }
  copy_number = copy_number >> 1;
  
  
  delay(500);
  

}
