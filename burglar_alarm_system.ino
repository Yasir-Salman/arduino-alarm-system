int trig = 12;
int echo = 13;
int buzzer = 7;
int orangeLed = 2;
int greenLed = 3;

void setup(){
  Serial.begin(9600);
  pinMode(orangeLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  delayMicroseconds(1);
  
  int time = pulseIn(echo, HIGH);
  int distance = (time * 0.034)/ 2;
  
  if (distance <= 18){
  Serial.println("Intruder!"); 
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println(" cm");
  
  digitalWrite(orangeLed, HIGH);
  digitalWrite(greenLed, HIGH);
  delay(400);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(200);

  tone(buzzer, 450);
  delay (300);
  noTone(buzzer);
  delay (200);
  //digitalWrite(buzzer, HIGH);
  //delay(500);

  Serial.println();
  }
   else{
  Serial.println("Safe...");
// Serial.print("Distance:"); //Distance not needed when safe...right?
//  Serial.print(distance);
//  Serial.println(" cm");
  digitalWrite(buzzer, LOW);
  delay(500);

  Serial.println();
  }  
}
  //tone(buzzer, 150);
  //delay (500);
  //noTone(buzzer);
  //delay(500);
