#include "rectangulo.h"

using namespace std;

vector<string> get_contents(){
    vector<string> data;
    string filename = "rectangulos.in";
    ifstream input;

    input.open(filename);

    if(!input.is_open()){
        cerr << "No hay file" << endl;
    }

    while(input){
        string line;
        getline(input, line,'\n');
        if(line.size() > 0){
		data.push_back(line);
        }
    }
    input.close();

    return data;
}

vector <string> organize(vector<string> data){
    vector <int> sizes;
    tablero tab;
    int reg;
    istringstream ss;
    ss.str(data[0]);
    ss >> reg;
    ss >> tab.n;
    ss >> tab.m;



}

bool verify(Rectangulo a, Rectangulo b){

    int ax1 = a.posX;
    int ay1 = a.posY;

    int ax2 = a.posX + a.x;
    int ay2 = a.posY - a.y;

    int bx1 = b.posX;
    int by1 = b.posY;

    int bx2 = b.posX + b.x;
    int by2 = b.posY - b.y;


    if (ax1 > bx2 || bx1 > ax2) 
        return false; 
    if (ay1 < by2 || by1 < ay2) 
        return false; 
    return true; 
} 
