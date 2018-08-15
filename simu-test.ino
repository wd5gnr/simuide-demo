int v;

const int potpin=0;
const int led0=5;
const int led1=6;

void setup() {
  Serial.begin(9600);
  Serial.println("Here we go again!");
}

void loop() {
  int v=analogRead(potpin);
  Serial.println(v);
  analogWrite(led0,100);
  analogWrite(led1,200);
  delay(250);
}
