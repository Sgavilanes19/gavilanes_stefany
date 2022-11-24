#include "linea.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2)
{
d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float Linea::getD(float)
{
return d;
}

string Linea::to_String()
{
return "distancia = ";
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
   return p2;
}
