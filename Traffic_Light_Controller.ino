//
// Shane Swanton
// February 28, 2023
// EECE.4520 - Microprocessors 2
//

int red = 10;
int yellow = 9;
int green = 8;
int button = 12;
int buzzer = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  onStartup();
  if (digitalRead(button) == HIGH) {while(1) {changeLights();}}
}

void onStartup() {
  digitalWrite(red, HIGH);
  delay(1000);  //1 Second
  digitalWrite(red, LOW);
  delay(1000);  //1 seconnd
}

void changeLights() {
  digitalWrite(red, HIGH);
  delay(17000); //17 seconds
  digitalWrite(buzzer, HIGH);
  delay(3000);  //3 seconds
  digitalWrite(buzzer, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(17000); //17 seconds
  digitalWrite(buzzer, HIGH);
  delay(3000); //3 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);  //3 seconds
  digitalWrite(yellow, LOW);
  digitalWrite(buzzer, LOW);
}