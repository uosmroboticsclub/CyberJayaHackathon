int time_taken = 25; //adjust the delay for each led

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
for (int y =2; y<5 ; y++){                  // begins turning on leds for 1 sec from pin 2 to pin 4
  digitalWrite(y,HIGH);
  delay(time_taken);
  digitalWrite(y,LOW); 
}

for (int x = 4; x>2 ; x--){                              // begins turning on leds for 1 sec from pin 4 to pin 2
  digitalWrite(x,HIGH);
  delay(time_taken);
  digitalWrite(x,LOW);
}
}
