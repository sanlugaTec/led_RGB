#define pinLed1 13   // Pin R
#define pinLed2 11  // Pin G
#define pinLed3 10  // Pin B
 
void setup() 
{
    pinMode(pinLed1, OUTPUT);
    pinMode(pinLed2, OUTPUT);
    pinMode(pinLed3, OUTPUT);
}
 
void loop() {
    // Verde
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    delay(500);
    // Azul
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, HIGH);
    delay(500);
    // Rojo
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    delay(500);
    //Violeta
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, HIGH);
    delay(500);
    //Amarillo
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    delay(500);
    //Azul Marino 
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    delay(500);
    //Blanco 
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    delay(500);
    // Negro - No presenta ningún color
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    delay(500);
}
