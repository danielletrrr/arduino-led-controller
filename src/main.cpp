#include <Arduino.h>

int led = 7;
unsigned long startTime = 0;
unsigned long duration = 50000; // Tempo em milissegundos

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  startTime = millis(); // Inicialize o tempo de início
}

void loop()
{
  unsigned long currentTime = millis(); // Obtenha o tempo atual
  if (currentTime - startTime < duration)
  {
    digitalWrite(led, HIGH);
    Serial.println("LED ON");
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    Serial.println("LED OFF");
  }
  else
  {
    // Aqui, o tempo passou e o loop será interrompido
    Serial.println("Loop encerrado");
    while (true)
    {
      // Loop infinito para manter o programa ativo
    }
  }
}
