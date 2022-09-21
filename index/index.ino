int i = 0;

void setup() {
  while (i < 4) {
    pinMode(i, OUTPUT);
    i = i + 1;
  }
//  pinMode(A5, INPUT);
//  Serial.begin(9600);
}

void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(500);  
//  Serial.println(A5);|
}
