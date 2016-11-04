#include <iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        arr[i] = i*i; 
    }
    cout<<sizeof(arr)<<endl;

    for(int i =0; i < sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<endl; 
    }
}
