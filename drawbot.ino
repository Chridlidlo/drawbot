#include <Servo.h>

// Définition des servos
Servo servo1;
Servo servo2;

// Angles pour dessiner l'étoile (5 points, ajustez pour correspondre à la taille de l'étoile)
int angles1[] = {90,90,90}; // Angles pour le dessin du servo1
int angles2[] = {180,0,90}; // Angles pour le dessin du servo2
int delayTime = 500; // Temps de pause entre chaque mouvement

void setup() {
  // Attacher les servos aux pins appropriées
  servo1.attach(9);  // Servo 1 connecté à la pin 9
  servo2.attach(10); // Servo 2 connecté à la pin 10

  // Initialiser les servos à la position de départ (par exemple, 0 degré)
  servo1.write(90);
  servo2.write(90);
  delay(1000); // Attendre que les servos se déplacent à la position initiale
}

void loop() {
  for (int i = 0; i < 5; i++) {
    // Déplacer les servos aux angles
    servo1.write(angles1[i]);
    servo2.write(angles2[i]); // Utiliser l'index décalé pour les mouvements
    delay(delayTime); // Attendre avant le prochain mouvement
  }
  
  // Faire une pause avant de recommencer le dessin
  delay(2000);
}
