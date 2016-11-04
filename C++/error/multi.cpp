#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

using namespace std;

class myType:public out_of_range{
    public:
        myType(const string &arg): out_of_range(arg){};
};

int main(){
    string str = "123456";
    try{
        char str1 = str.at(100);
        cout<<str1<<endl;
    }catch(myType){
        cout<<"error:myType"<<endl; 
    }catch(out_of_range){
        cout<<"error:out_of_range"<<endl; 
    }catch(exception){
        cout<<"error:exception"<<endl; 
    }
    return 0;
}
