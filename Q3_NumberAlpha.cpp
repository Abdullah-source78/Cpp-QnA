#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

void get_Count(const string &filename,const string &outputfile) {
    char ch;
    int count = 0;
    ifstream in(filename, ios::in); 
    ofstream out(outputfile, ios::app); 
    while(in.get(ch)){
        if(isalpha(ch)){
            count++;
        }
    }


    out<<endl << "Number of alphabets in the file: " << count << endl;
}

int main() {
    string filename = "Output.txt"; 
    string outputfile = "Output.txt"; 
    get_Count(filename,outputfile); 
    return 0;
}
