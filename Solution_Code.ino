int sensor1_value = 2;
int sensor2_value = 3;
int led_1 = 12;
int led_2 = 13;
int reading1 = 0;
int reading2 = 0;

void setup() 
{
 pinMode(led_1, OUTPUT);
 pinMode(led_2, OUTPUT);
 pinMode(sensor1_value, INPUT);
 pinMode(sensor2_value, INPUT);
 Serial.begin(9600);
}

void loop() 
//for motion detected by the 1st sensor
{
  reading1 = digitalRead(sensor1_value);
  if (reading1 == HIGH)
  {
    digitalWrite ( led_1, HIGH);
    Serial.print("Motion within restricted area");
  }
  else
  {
    digitalWrite ( led_1, LOW);
    Serial.print("No Motion");
  }
  
  //for motion detected by the 2nd sensor
  
  reading2 = digitalRead(sensor2_value);
  if (reading2 == HIGH)
  {
    digitalWrite ( led_2, HIGH);
    Serial.print("Motion within restricted area");
  }
  else
  {
    digitalWrite ( led_2, LOW);
    Serial.print("No Motion");
  }
  delay(100);
  //This code will work for both the sensors working at the same time as well.
}
