#include "rectangulo.h"
#include "read.h"

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
void write(vector<Rectangulo> data){
    ofstream outfile ("rectangulos2.out");
    for (auto &i:data){
        outfile << 'A ' << i.posX << ' ' << i.posY << ' ' << i.r << ' ' << i.c << ' ' << '\n';
    }

    outfile.close();
}
