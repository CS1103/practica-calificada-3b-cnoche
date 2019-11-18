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
            if(verify(reg1, reg2)){
                thing.push_back(reg1);
            }
        }
    }

    for(const Rectangulo &a : thing){
        cout << a.posX << endl;
    }
}

bool inRange(int value, int min, int max){
    return (value >= min) && (value <= max);
}

bool verify(Rectangulo A, Rectangulo B){
    bool overlapX = inRange(A.posX, B.posX, B.posX + B.r) ||
                    inRange(B.posX, A.posX, A.posX + A.r);

    bool overlapY = inRange(A.posY, B.posY, B.posY + B.c) ||
                    inRange(B.posY, A.posY, A.posY + A.c);

    return overlapX && overlapY;
}

int main (){
    vector<string> data;
    data = get_contents();
    vector<string> out;
    out = organize(data);

}

bool cmp(Rectangulo& A, Rectangulo& B)
{
    return (A.posX < B.posX) ||
           ((A.posX == B.posX) && (A.r < B.r)) || 
           ((A.posX == B.posX) && (A.r == B.r) &&
              (A.c == B.c));
}