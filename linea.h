#ifndef LINEA_H
#define LINEA_H
#include<iostream>
#include <string>
#include "punto.h"

using namespace std;
class Linea:public Punto
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
    int<static>NUM_LINEAS;

public:

    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD(float);
    string to_String();
    Punto* getP1()const;
    Punto* getP2()const;
};

#endif // LINEA_H
