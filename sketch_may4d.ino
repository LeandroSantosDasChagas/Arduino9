// C++ code
//
int Definir = 0;

int ler_pino = 0;

int Luminosidade = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Luminosidade = analogRead(A0);
  Serial.println(Luminosidade);
  delay(10); // Delay a little bit to improve simulation performance
}