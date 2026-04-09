#define LED 13
void setup()
{
  Serial.begin(9600); // start serial monitor
  pinMode(13, OUTPUT);
  attachInterrupt(0, smile, RISING); //send signal to display smile when interrupted
  attachInterrupt(1, frown, RISING); //send signal to display frown when interrupted
}
void smile()
{
  Serial.println(":)"); //print smile in the serial monitor
}

void frown()
{
  Serial.println(":("); //print frown in the serial monitor
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}