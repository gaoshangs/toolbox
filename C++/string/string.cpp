#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string s2 = "I am a string";
    string s3 = s2;
    string s4(5, 's');
    cout<<s1<<",length = "<<s1.length()<<endl;
    cout<<s2<<",length = "<<s2.length()<<endl;
    cout<<s3<<",length = "<<s3.length()<<endl;
    cout<<s4<<",length = "<<s4.length()<<endl;
    string s;
    cin >>s;
    cout << s<<endl;
    return 0;
}
