#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int a[5], max, i, order;
    ifstream infile("f1", ios::in);
    if(!infile){
        cerr<<"open error!"<<endl;
        exit(1);
    }

    for(i=0;i<5;i++){
        infile>>a[i];
        cout<<a[i]<<" ";
    }

    cout<<endl;
    max = a[0];
    order = 0;
    for(i = 1;i<5;i++){
        if(a[i]>max){
            max = a[i];
            order = i;
        } 
    }
    cout<<"max = "<<max<<endl<<"order="<<order<<endl;
    infile.close();
    return 0;
}
