#include <iostream>
using namespace std;
void positive(int a[], int n){
    for(int i =0; i<n;i++){
        if(a[i] <0){
            a[i] = 0; 
        }
    }
}

int main(){
    int b[8];
    int len =sizeof(b)/sizeof(int);
    cout<<"input 8 numbers"<<endl;
    for(int i=0; i<len; i++){
        scanf("%d", &b[i]);
        //cout<<b[i]<<endl;
    }
    positive(b, len);
    cout<<"after fomat"<<endl;
    for(int i=0; i<len; i++)
        cout<<b[i]<<endl;
}
