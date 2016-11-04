#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int a[5];
    ofstream outfile("f1");
    cout<<"Enter numbers"<<endl;
    for(int i=0; i<5; i++){
        cin>>a[i];
        outfile<<a[i]<<" ";
    } 
    outfile.close();
    return 0;
}
