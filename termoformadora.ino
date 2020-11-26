
/*
Desarrollador:  Ing. Mecatronico Moises Humberto Olguin Martinez
A=pin5 - UP SUPERIOR
B=PIN6 - DOWN SUPERIOR
C =PIN7 - UP SUJETADOR
D= PIN8 - DOWN SUJETADOR
E= PIN9 - TEMPERATURA
F=PIN10 - SUCCION
*/

#include <SoftwareSerial.h>
//incluyelibreria de Serial3

//String letra = " ";
char letra2;
void setup()
   {
       Serial.begin(9600);
       Serial.println("Enter AT commands:");
       Serial3.begin(9600);
      pinMode(5,OUTPUT);
      pinMode(6,OUTPUT);
      pinMode(7,OUTPUT);
      pinMode(8,OUTPUT);
      pinMode(9,OUTPUT);
      pinMode(10,OUTPUT);
   }

void loop()
   {
       if (Serial.available())
       
           Serial3.write(Serial.read());


  if (Serial3.available()){
    letra2=Serial3.read();
    Serial.println(letra2);
//      if(letra=='x') digitalWrite(led,HIGH);
//             else digitalWrite(led,LOW);

switch (letra2) {
      case 'a':
        Serial.println("TAPA SUPERIOR UP");
         digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
     
             
        break;
      case 'b':
        Serial.println("TAPA SUPERIOR DOWN");
            digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
   
 
        break;
      case 'c':
        Serial.println("SUJETADOR UP");
      digitalWrite(7, LOW);
             digitalWrite(8, HIGH);
        break;
        
      case 'd':
        Serial.println("SUJETADOR DOWN");
            digitalWrite(7, HIGH);
      digitalWrite(8, LOW);

             
        break;
        
      case 'e':
        Serial.println("TEMP ON");
          digitalWrite(9, HIGH);
        break;

       case 'f':
        Serial.println("TEMP OFF");
          digitalWrite(9, LOW);
        break;

         case 'g':
        Serial.println("SUCCION ON");
          digitalWrite(10, HIGH);
        break;

       case 'h':
        Serial.println("SUCCION OFF");
          digitalWrite(10, LOW);
        break;
           }
             
           
//             }
// 
//  if(letra=='x')
//  digitalWrite(led,HIGH);
//  if(letra=='y')
//  digitalWrite(led,LOW);
//  
   }}
