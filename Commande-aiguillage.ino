#include <Servo.h>

Servo servoAiguillage;

const int boutonGauche = 2;  // Pin du bouton position gauche
const int boutonDroite = 3;  // Pin du bouton position droite

void setup() {
  servoAiguillage.attach(9); // Pin du signal servo
  pinMode(boutonGauche, INPUT_PULLUP);
  pinMode(boutonDroite, INPUT_PULLUP);
  servoAiguillage.write(90); // Position neutre au départ
}

void loop() {
  if (digitalRead(boutonGauche) == LOW) {
    servoAiguillage.write(0);  // Position gauche
    delay(500);
  }
  if (digitalRead(boutonDroite) == LOW) {
    servoAiguillage.write(180); // Position droite
    delay(500);
  }
}
