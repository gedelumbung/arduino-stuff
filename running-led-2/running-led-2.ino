// variables
int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;
int LED6 = 8;
int DELAY_LED = 100;

// Setting Sebagai Output
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void loop()
{
  digitalWrite(LED1,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED1,LOW);
  delay(DELAY_LED);
  digitalWrite(LED2,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED2,LOW);
  delay(DELAY_LED);
  digitalWrite(LED3,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED3,LOW);
  delay(DELAY_LED);
  digitalWrite(LED4,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED4,LOW);
  delay(DELAY_LED);
  digitalWrite(LED5,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED5,LOW);
  delay(DELAY_LED);
  digitalWrite(LED6,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED6,LOW);
  delay(DELAY_LED);
  digitalWrite(LED5,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED5,LOW);
  delay(DELAY_LED);
  digitalWrite(LED4,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED4,LOW);
  delay(DELAY_LED);
  digitalWrite(LED3,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED3,LOW);
  delay(DELAY_LED);
  digitalWrite(LED2,HIGH);
  delay(DELAY_LED);
  digitalWrite(LED2,LOW);
  delay(DELAY_LED);
}
