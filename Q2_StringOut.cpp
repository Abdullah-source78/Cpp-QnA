#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream out("Output.txt",ios::app);
    string line = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    out << line<<endl;  

    out.close();
    return 0;
}
