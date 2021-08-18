void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 pinMode(4,INPUT_PULLUP);
 pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("hello");
 int x = digitalRead(4);
 if(x == HIGH){
  Serial.println("HIGH");
  digitalWrite(2,LOW);
 }
 else{
  Serial.println("LOW");
  digitalWrite(2,HIGH);
 }
 
 
}
