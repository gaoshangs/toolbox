#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i <=9; i++){
       for(j=1; j<=9; j++){
            if(j < i){
                cout<<"        ";
            }else{
                printf("%d*%d=%-2d  ", i, j, i*j); 
            }
       } 
       cout<<endl;
    }
    return 0;
}
