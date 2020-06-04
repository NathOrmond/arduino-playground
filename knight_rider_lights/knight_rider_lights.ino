int output_pins[] = {2,3,4,5,6};
void pulse_pin(int pin);

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
    pulse_pin(this_pin);
    delay(delay_t);
    this_pin++;
  } while(this_pin <= high_pin);

 do{ 
    this_pin--;
    pulse_pin(this_pin);
    delay(delay_t);
  } while(this_pin >= low_pin);
}

void pulse_pin(int pin){ 
  for(int a = 0; a < 256; a++){ 
    analogWrite(pin, a);
    delay(5);
  }

  for(int a = 256; a >= 0; a--){ 
    analogWrite(pin, a);
    delay(5);
  }
}
