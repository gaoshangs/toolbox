#include <iostream>
using namespace std;
float average(float score[5]){
    float sum;
    for(int i=0;i<5; i++){
        sum+=score[i];
    }
    return sum/5;
}

int main(){
    float score[5];
    for(int i=0; i<5;i++){
        cout<<"input a float number:"<<endl;
        scanf("%f", &score[i]);
    }
    cout<<average(score)<<endl;
}
