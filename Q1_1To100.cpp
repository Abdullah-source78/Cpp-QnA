#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("Notes.txt", ios::out);
    if (!out) {
        cerr << "Error in opening the file!" << endl;
        return 1; 
    }
    for(int i = 1;i<=100;i++){
        out<<i<<' '<<endl;
    }
    out.close();


    return 0;
}
