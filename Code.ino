int proxy1 = 0;
int proxy2 = 0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);  
}
void loop()
{
  proxy1 = digitalRead(2);
  proxy2 = digitalRead(3);

  if(proxy2 == HIGH) {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  } else {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);                                                                                                                                                        
  }

  if(proxy1 == HIGH) {
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  } else {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
