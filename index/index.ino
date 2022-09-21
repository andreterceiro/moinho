int i = 0;
int time = 1000;
int j = 0;

void setup() {
  while (i < 4) {
    pinMode(i, OUTPUT);
    i = i + 1;
  }
  pinMode(A0, INPUT);
}

void loop() {
  i = 0;

  if (time < 100) {
   time = 1000;
  }

  while (i < 5) {
    digitalWrite(i, j % 2 == 0 ? HIGH : LOW);
    delay(time);
    i = i + 1; 
  }

  time = time - 100;
  j = j + 1;

}
