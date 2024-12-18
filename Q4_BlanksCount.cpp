#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

void blank_count(const string &filename,const string &outputfile) {
    char ch;
    int count = 0;
    ifstream in(filename, ios::in); 
    ofstream out(outputfile, ios::app); 
    while(in.get(ch)){
        if(ch == ' '){
            count++;
        }
    }


    out<<endl << "Number of blanks in the file: " << count << endl;
}

int main() {
    string filename = "Output.txt"; 
    string outputfile = "Output.txt"; 
    blank_count(filename,outputfile); 
    return 0;
}
