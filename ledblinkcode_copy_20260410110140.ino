#define my_led 7//global declaration
void setup(){
  pinMode (my_led,OUTPUT);
}
voide loop(){
  pinMode (my-led,HIGH);
  Serial.println("LED turn ON");
  delay (1000);
  digitalWrite(my_led,LOW);
  Serial.println("LED turn OFF");
  delay(1000);
}

