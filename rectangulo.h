#ifndef PC3_RECTANGULO_H
#define PC3_RECTANGULO_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include<stdio.h>
using namespace std;

vector<string> get_contents();

vector<string> organize(vector<string> data);

class tablero{
    public:
    int n, m = 0;
    tablero() {n = 0; m = 0;}
    ~tablero();
};
class Rectangulo{
    public:
    //pos. top left corner of the rectangle
    int posX, posY;
    int x, y;
    Rectangulo() {posY = 0; posX = 0; x = 0; y = 0;}
    ~Rectangulo();
};

bool verify(Rectangulo a, Rectangulo b);


#endif