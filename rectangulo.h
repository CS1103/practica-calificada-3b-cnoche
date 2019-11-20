#ifndef PC3_RECTANGULO_H
#define PC3_RECTANGULO_H

#include <iostream>
#include <fstream>
#include <bits/stdc++.h> 
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h>
#include <iterator>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

struct tablero{
    public:
    int n, m = 0;
    tablero() {n = 0; m = 0;}
};
struct Rectangulo{
    //pos. top left corner of the rectangle
    int posX, posY;
    int r, c;
    Rectangulo() {posY = 0; posX = 0; r = 0; c = 0;}
};

vector<Rectangulo> organize(vector<string> data);



#endif