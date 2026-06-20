int startValue = 5;
int ledPin = 7;

void flashLED (int times) {
  for(int i=0;i< times;i++){
    digitalWrite (7, HIGH);
    delay (250);
    digitalWrite (7, LOW);
    delay(250);
  }
}


void setup() {
  pinMode (7, OUTPUT);
  Serial.begin(9600);
  Serial.println("====Smart Countdown Starting=====");

  int count = 5;
  while (count > 0){
  Serial.print("Count: ");
  Serial.println(count);


flashLED(count);
delay(250);
count = count - 1;
  }

Serial.println("===== Countdown Complete=====");
}

void loop() {  }
