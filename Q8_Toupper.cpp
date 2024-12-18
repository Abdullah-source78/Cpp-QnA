
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype> 
using namespace std;

void convert_to_uppercase(const string &filename,const string &outputfile) {
 
  
    ifstream in(filename, ios::in); 
    ofstream out(outputfile, ios::app); 
    char ch;
    while (in.get(ch)) {  
        out.put(toupper(ch));  
    }

    out<<endl << "Converted the file in Upper case: " << endl;

    in.close();  
    out.close();
}

int main() {
    string filename = "Input.txt"; 
    string outputfile = "Output.txt"; 
    convert_to_uppercase(filename,outputfile); 
    return 0;
}
