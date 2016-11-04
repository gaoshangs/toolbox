#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1, s2, s3;
    s1 = s2 = "1234567890";
    s3 = "333";
    s1.insert(5, s3);
    cout <<"s1:"<<s1<<endl;
    cout <<"s1.find(s3):"<<s1.find(s3)<<endl;
    cout <<"s1.rfind(s3):"<<s1.rfind(s3)<<endl;
    cout <<"s1.find_first_of(s3):"<<s1.find_first_of(s3)<<endl;

    s1.erase(5, 3);
    cout <<"s1.erase(5,3):"<<s1<<endl;
    s2.erase(5);
    cout << "s2.erase(5):"<<s2<<endl;
    cout <<"s1.substr(2,4):"<<s1.substr(2, 4)<<endl;
    return 0;
}
