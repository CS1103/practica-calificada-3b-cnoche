#include "rectangulo.h"
#include "booleans.h"

bool comp(Rectangulo& A, Rectangulo& B){
    return (A.posX < B.posX) ||
           ((A.posX == B.posX) && (A.r < B.r)) || 
           ((A.posX == B.posX) && (A.r == B.r) &&
              (A.c == B.c));
}

bool inRange(int value, int min, int max){
    return (value >= min) && (value <= max);
}

bool verify(Rectangulo A, Rectangulo B, tablero tab){
    bool overlapX = inRange(A.posX, B.posX, B.posX + B.r) ||
                    inRange(B.posX, A.posX, A.posX + A.r);

    bool overlapY = inRange(A.posY, B.posY, B.posY + B.c) ||
                    inRange(B.posY, A.posY, A.posY + A.c);

    bool overRangeA = A.c < tab.m && A.r < tab.n;
    bool overRangeB = B.c < tab.m && B.r < tab.n;   
    return overlapX && overlapY;
}


