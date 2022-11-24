#ifndef PUNTO_H
#define PUNTO_H
#include<iostream>
#include <string>

using namespace std;
class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int x1, int x2,int y1,int y2);
    int getX(int, int);
    int getY(int, int);
    string toString();
};

#endif // PUNTO_H
