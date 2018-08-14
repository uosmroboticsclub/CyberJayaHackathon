int time_taken = 30;

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

// or another way
for (int i = 2; i < 5 ; i++){
  pinMode(i,OUTPUT);
}

}

void loop() {
for (int y =2; y<5 ; y++){                               // begins turning on leds from pin 2 to pin 9
  digitalWrite(y,HIGH);
  delay(time_taken);
  digitalWrite(y,LOW);
  delay(time_taken);
}

for (int x = 4; x>1 ; x--){                              // begins turning off leds from pin 9 to pin 2
  digitalWrite(x,HIGH);
  delay(time_taken);
  digitalWrite(x,LOW);
  delay(time_taken);
}

}
