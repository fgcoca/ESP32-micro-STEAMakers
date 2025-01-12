// Comunicaciones I2C entre micro:STEAMakers y UNO
// de tipo Maestro/Esclavo
// El receptor mostrará todos los caracteres recibidos.
// El transmisor usará un buffer de 32 bytes,
// pero los mensajes pueden ser más cortos colocando un \n al final.

#include <Wire.h>

void setup() {
  Wire.begin(13);                   // unirse al bus i2c con la dirección #13
  Wire.onReceive(EventoRecibir);    // registrar evento
  Wire.onRequest(EventoSolicitar);  // registrar evento
  Serial.begin(9600);               // Iniciar puerto serie
  Serial.println("Listo...");
}

void loop() {
}

void EventoRecibir(int cuantos) {    // Gestor de eventos de recepción I2C       
    char cuan;
  Serial.print("Bytes recibidos: ");
  Serial.println(cuantos);
  Serial.println("Caracteres recibidos desde la micro:STEAMakers:");
  while (Wire.available()) { 
    cuan = Wire.read(); 
    Serial.print(cuan);         
  }
  Serial.print(" / ULTIMO caracter: ");   // Imprime también el último carácter como DEC
  Serial.print(cuan);
  Serial.print(" = ");
  Serial.println(cuan,DEC);         
}

void EventoSolicitar() {               // Gestor de eventos de transmisión I2C
  char respuesta[32] = "Hola desde placa tipo UNO\n";  
  Wire.write(respuesta);             // responder con \n termina el mensaje 
}
