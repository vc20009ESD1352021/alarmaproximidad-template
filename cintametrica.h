#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"  

class Ultrasonido{
    private:
    long distancia;
    public:
    byte pinEcho;
    byte pinTrigger;


Ultrasonido(byte _pinTrigger, byte _pinEcho);
Ultrasonido();    
 
//constructor parametrizado, recibe como parametros Trigger y Echo como byte


int medirCM();
//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros
};

class Display7{
    private:
     byte matrix[10][7]={
        {1,1,1,1,1,1,0}, //cero
        {0,1,1,0,0,0,0}, // uno
        {1,1,0,1,1,0,1}, // dos
        {1,1,1,1,0,0,1}, // tres
        {0,1,1,0,0,1,1}, //cuatro
        {1,0,1,1,0,1,1}, //cinco
        {1,1,1,0,0,0,0}, //seis
        {1,1,1,1,1,1,0}, //ciete
        {1,1,1,1,1,1,1}, //ocho
        {1,1,1,0,0,1,1}, //nueve

     };
public:
 byte pines[7];
   // se configura utilizando un metod
   void configurar(byte[]);
   //dibuja el numero en el display
   void mostrar (byte num);
};
#endif