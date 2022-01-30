// Declare sensor
int sensor_p10 = 2;
int sensor_p5 = 3;
int sensor_p1 = 5;

// Declare total count for each coins.
int totall0 = 0;
int total5 = 0;
int total1 = 0;

void setup(){
  pinMode(sensor_p10,INPUT);
  pinMode(sensor_p5,INPUT);
  pinMode(sensor_p1,INPUT);
  Serial.begin(9600);
}

void loop(){
  int sensor10 = digitalRead(sensor_p10);
  int sensor5 = digitalRead(sensor_p5);
  int sensor1 = digitalRead(sensor_p1);
 
  if(sensor10 == HIGH){
    totall0++;
    delay(250);
    Serial.print("Coins 10: ");
    Serial.println(totall0);
  }  
 
  if(sensor5 == HIGH){
    total5++;
    delay(250);
    Serial.print("Coins 5: ");
    Serial.println(total5);
  }  
 
  if(sensor1 == HIGH){
    total1++;
    delay(250);
    Serial.print("Coins 1: ");
    Serial.println(total1);
  }
}
