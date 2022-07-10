int greenLED = 11;
int yellowLED = 12;
int redLED = 13;


void BlinkLED(int led, int times){
  for (int i=0; i<times; i++){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}


void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  BlinkLED(redLED, 5);
  BlinkLED(yellowLED, 10);
  BlinkLED(greenLED, 15);
}
