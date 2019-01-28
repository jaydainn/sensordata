float x ; 

void setup() {
  Serial.begin(9600);
  pinMode(INPUT,A0);

}

void loop() {
  x = analogRead(A0);
  Serial.println(x);
  delay(1000);
  
  

}
