/*
 Fritgil Mae L. Molina
 BSCpE 4 A
 CPE 411 Embedded Stystems
 Activity 6
 Round Robin
 */ 
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

void setup()
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
 
}
void loop()

{
  digitalWrite(led1, HIGH);
  delay(200); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(200); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200); 
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(200); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(200); 
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(200); 
  digitalWrite(led6, LOW);
  delay(200);
  digitalWrite(led6, HIGH);
  delay(200); 
  digitalWrite(led6, LOW);
  digitalWrite(led5, HIGH);
  delay(200); 
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  delay(200); 
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  delay(200); 
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(200); 
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(200); 
  digitalWrite(led1, LOW);
  delay(200);

}
