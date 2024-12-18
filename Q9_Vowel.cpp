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
        if(!line.empty()){
            char ch = line[0];
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count++;
                out<<line<<endl;
            }
        
        }
    }

    out<<endl << "The lines Starting with vowel in the file: " << count << endl;
}

int main() {
    string filename = "Input.txt"; 
    string outputfile = "Output.txt"; 
    line_count(filename,outputfile); 
    return 0;
}
