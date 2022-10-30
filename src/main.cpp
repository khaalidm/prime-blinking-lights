#include <Arduino.h>

const int ledPin9 = 9;
const int ledPin10 = 10;

void detectPrimeNumber(int primes)
{

  for (int i = 0; i < primes; i++)
  {
    int count = 0;

    int k = i - 1;
    while (k > 1)
    {
      if (i % k == 0)
      {
        count++;
      }
      k--;
    }
    // Serial.println(i);
    if (count == 0)
    {

      digitalWrite(ledPin10, LOW);
      digitalWrite(ledPin9, HIGH);
      // delay(50);

      Serial.println(i);

      // digitalWrite(ledPin, LOW);

      // delay(50);
    }
    else
    {
      digitalWrite(ledPin9, LOW);
      Serial.println("~~~~~~~~~~~");
      digitalWrite(ledPin10, HIGH);
    }
  }
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
}

void loop()
{
  detectPrimeNumber(10000);
}
