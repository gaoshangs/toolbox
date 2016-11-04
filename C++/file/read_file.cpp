#include <iostream>
#include <fstream>
using namespace std;

void read_file(const char *);

int main(){
    read_file("f3");
    return 0;
}

void read_file(const char *fname){
    ifstream infile(fname, ios::in);
    char c;
    if(!infile){
        cerr<<"open file failed!";
        exit(1);
    }
    cout<<"The content is :"<<endl;
    while(infile.get(c)){
        cout<<c;
    }
    infile.close();
}
