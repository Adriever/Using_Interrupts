#define LED 13
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, smile, RISING);
  attachInterrupt(1, frown, RISING);  
}
void smile()
{
  Serial.println(":)");
}

void frown()
{
  Serial.println(":(");
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}