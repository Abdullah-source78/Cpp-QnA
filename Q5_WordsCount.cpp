#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype> 
using namespace std;

void words_count(const string &filename,const string &outputfile) {
    int count = 0;
    ifstream in(filename, ios::in); 
    ofstream out(outputfile, ios::app); 
    string line;
    while(getline(in,line)){
        stringstream ss(line);
        string word;
        while(ss>>word){
            count++;
        }

    }


    out<<endl << "Number of Words in the file: " << count << endl;
}

int main() {
    string filename = "Output.txt"; 
    string outputfile = "Output.txt"; 
    words_count(filename,outputfile); 
    return 0;
}
