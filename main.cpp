#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int get_contents (vector<string> data){
    string filename = "rectangulos.in";
    ifstream input;

    input.open(filename);

    if(!input.is_open()){
        return 1;
    }

    while(input){
        string line;
        getline(input, line,'\n');
        if(line.size() > 0){
		    data.push_back(line);
        }
    }
    input.close();

    for (int i = 0; i < data.size(); ++i){
        cout << data[i] << endl;
    }
    input.close();

    return 0;
}
    


int main() {
    vector<string> data;
    get_contents(data);
}