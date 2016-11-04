#include <iostream>
#include <fstream>
using namespace std;

void save_to_file();
void get_from_file();

int main(){
    save_to_file();
    get_from_file();
    return 0;
}

void save_to_file(){
    char a[20];
    cout<<"input a string"<<endl;
    cin.getline(a, 20);
    cout<<"The string:"<<a<<endl;
    ofstream outfile("f1");
    if(!outfile){
        cerr<<"open f1 failed!";
        exit(1);
    }
    outfile<<a;
    outfile.close();
}

void get_from_file(){
    char b[20];
    ifstream infile("f1", ios::in);
    ofstream outfile("f3");
    infile>>b;
    for(int i=0; b[i] !=0; i++){
        if(b[i] >=97 && b[i] <=122){
            outfile.put(b[i]-32);
        }else{
            outfile.put(b[i]);
        }
    }
    infile.close();
    outfile.close();
}
