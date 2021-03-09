void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW);
  delayMicroseconds(4);
  digitalWrite(2, HIGH); 
  delayMicroseconds(10);
  digitalWrite(2, LOW);


  long t = pulseIn(4, HIGH);

  long inches = t / 74 / 2;
  long cm = t / 29 / 2;
  String inch = " inches \t";
  String CM = " cm";

  Serial.print(inches +inch);
  Serial.println(cm +CM);
  Serial.println();
  delay(100); 
  
}
