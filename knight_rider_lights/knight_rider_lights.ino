int output_pins[] = {2,3,4,5,6};

void setup() {
  // LED lights
  for(int pin : output_pins){ 
    pinMode(pin, OUTPUT);
  }
  pinMode(13,OUTPUT);
}

void loop() {
  int delay_t = 200;
  int low_pin = output_pins[0];
  int high_pin = output_pins[(sizeof(output_pins) / sizeof(output_pins[0])) - 1];

  int this_pin = low_pin;
  
  do{ 
    digitalWrite(this_pin, HIGH);
    delay(delay_t);
    digitalWrite(this_pin, LOW);
    this_pin++;
  } while(this_pin <= high_pin);

 do{ 
    this_pin--;
    digitalWrite(this_pin, HIGH);
    delay(delay_t);
    digitalWrite(this_pin, LOW);
    
  } while(this_pin >= low_pin);
}
