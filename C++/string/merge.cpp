#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2, s3;
    int i;
    s1 = "s11111";
    s2 = "s22222";
    s1 += 'S';
    s3 = s1 + s2;
    s2 += s1;
    cout<< "s2 :"<<endl;
    for(i=0; i < s2.length(); i++)
        cout << s2[i];
    cout<<endl;
    cout<<"s3 :"<<endl;
    for(i=0; i < s3.length(); i++)
        cout << s3[i];
    cout <<endl;
    return 0;
}
