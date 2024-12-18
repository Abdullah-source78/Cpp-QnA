#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype> 
using namespace std;

void line_count(const string &filename,const string &outputfile) {
 
    int count = 0;
    ifstream in(filename, ios::in); 
    ofstream out(outputfile, ios::app); 
    string line;
    while(getline(in,line)){
        if(!line.empty() && (line[0] == 'A' || line[0] == 'a' )){
            count++;

        }
        

    }

    out<<endl << "Number of lines Starting with 'a' in the file: " << count << endl;
}

int main() {
    string filename = "Output.txt"; 
    string outputfile = "Output.txt"; 
    line_count(filename,outputfile); 
    return 0;
}
