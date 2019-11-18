#include "rectangulo.h"
#include "booleans.h"

using namespace std;

vector <Rectangulo> organize(vector<string> data){
    vector <int> sizes;
    tablero tab;
    int reg;
    istringstream ss;
    ss.str(data[0]);
    ss >> reg;
    ss >> tab.m;
    ss >> tab.n;
    vector<Rectangulo> first_iteration;
    for(vector<string>::iterator it1 = data.begin()+1; it1 != data.end(); ++it1){ 
        istringstream sss;
        sss.str(*it1);
        char action;
        Rectangulo reg;
        sss >> action;
        sss >> reg.posX;
        sss >> reg.posY;
        sss >> reg.r;
        sss >> reg.c;
        first_iteration.push_back(reg);
    }
    vector<Rectangulo> thing;
    for (const Rectangulo &reg1 : first_iteration ){
        for (const Rectangulo &reg2 : first_iteration ){
            if(verify(reg1, reg2, tab)){
                thing.push_back(reg1);
            }
        }
    }

    sort(thing.begin(),thing.end(),comp);

    for(const Rectangulo &a : thing){
        cout << a.posX << endl;
    }

    return thing;
}
