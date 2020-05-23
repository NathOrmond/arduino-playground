void setup() {
  // LED lights
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  //Circuit in built LED
  pinMode(13,OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH);
    delay(500);
   
   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
   delay(500);
    
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   delay(500);

   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   delay(500);

   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);

   digitalWrite(6, LOW);
   digitalWrite(5, HIGH);
   delay(500);
    
   digitalWrite(5, LOW);
   digitalWrite(4, HIGH);
   delay(500);

   digitalWrite(4, LOW);
   digitalWrite(3, HIGH);
   delay(500);

   digitalWrite(3, LOW);
   digitalWrite(2, HIGH);
   delay(500);

    digitalWrite(2, LOW);
    delay(500);
}
