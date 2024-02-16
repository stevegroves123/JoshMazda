// the setup function runs once when you press reset or power the board
int relay1 = 4;
int relay2 = 7;
int relay3 = 8;
int relay4 = 12;

void setup() {
  // initialize digital pins to output to the RELAYs.
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relay1, HIGH);  // turn relay1 LED on (HIGH is the voltage level)
  delay(500);                  // wait half a second
  digitalWrite(relay1, LOW);  // turn relay1 LED on (LOW is the voltage level)
  delay(500);

  digitalWrite(relay2, HIGH);  // turn relay2 LED on
  delay(500);                 
  digitalWrite(relay2, LOW);  // turn relay2 LED off
  delay(500);

  digitalWrite(relay3, HIGH);  // turn relay3 LED on
  delay(500);                 
  digitalWrite(relay3, LOW);  // turn relay3 LED off
  delay(500);

  digitalWrite(relay4, HIGH);  // turn relay4 on
  delay(500);                  
  digitalWrite(relay4, LOW);   // turn relay4 off
  delay(500); 
}
