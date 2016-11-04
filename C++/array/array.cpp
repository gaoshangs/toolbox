#include <iostream>
using namespace std;
void positive(int num){
    if(num > 0){
        cout<<num<<endl; 
    }else{
        cout<<0<<endl; 
    }
}
int main(){
   int num[5], i;
   for(i=0; i<5; i++){
       cout<<"please input a integer:"<<endl;
       scanf("%d", &num[i]);
       positive(num[i]);
   }
}
