const int idrPin = 13;
const int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT_PULLDOWN);
  Serial.begin(115200);
  Serial.println("the code started");
  pinMode(ledPin,OUTPUT);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  int idrValue = analogRead(idrPin);
  
  Serial.println(idrValue);
  delay(100);
  if (idrValue)< 800;
  {digitalWrite(ledPin,HIGH);
  delay(100);}
  else{digitalWrite(ledPin,LOW);}
}
