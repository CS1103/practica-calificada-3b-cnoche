#ifndef PC3_RECTANGULO_H
#define PC3_RECTANGULO_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include<stdio.h>
#include <iterator>
#include <stdio.h>
#include <string.h>
using namespace std;

vector<string> get_contents();

vector<string> organize(vector<string> data);

class tablero{
    public:
    int n, m = 0;
    tablero() {n = 0; m = 0;}
    ~tablero();
};
struct Rectangulo{
    //pos. top left corner of the rectangle
    int posX, posY;
    int r, c;
    Rectangulo() {posY = 0; posX = 0; r = 0; c = 0;}
};
bool inRange(int value, int min, int max);
bool verify(Rectangulo A, Rectangulo B);
bool cmp(Rectangulo A, Rectangulo B);

#endif