/* 

ATENCIÓN:
En este código el robot debe
seguir el camino, pero no necesariamente
la línea negra. Recuerda adaptar los tiempos
y velocidad en función de cada robot.

** Este código es de la forma en que
los ESTUDIANTES deberían hacerlo.

Los códigos se hacen en función de
lo que se expone en la sesión. **

CÓDIGO DEL DESAFÍO FINAL
Sesión 1: Taller de robótica CyT

*/

#include <KnightRoboticsLibs_Iroh.h>

void setup() {
  inicializarMotores();
}

void loop() {
  // Primera línea
  avanzar(100,100);
  pausa(3500);

  // Giro hacia segunda línea
  girarDerecha(80);
  pausa(400);

  // Segunda línea
  avanzar(100,100);
  pausa(3500);

  // Giro hacia tercera línea
  girarDerecha(80);
  pausa(400);

  // Tercera línea
  avanzar(100,100);
  pausa(3500);

  // Giro hacia cuarta línea
  girarDerecha(80);
  pausa(400);

  // Cuarta línea
  avanzar(100,100);
  pausa(2300);

  // Giro hacia quinta línea
  girarDerecha(80);
  pausa(400);

  // Quinta línea
  avanzar(100,100);
  pausa(2300);

  // Giro hacia sexta línea
  girarDerecha(80);
  pausa(400);

  // Sexta línea
  avanzar(100,100);
  pausa(1800);

  // Giro hacia Séptima línea
  girarDerecha(80);
  pausa(400);

  // Séptima línea
  avanzar(100,100);
  pausa(900);

  // Giro hacia Octava línea
  girarDerecha(80);
  pausa(400);

  // Octava línea
  avanzar(100,100);
  pausa(400);

  detenerse();
  finPrograma(); // Al llegar a la base verde

}
