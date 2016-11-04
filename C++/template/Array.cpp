#include <iostream>
#include <string>
using namespace std;
template <typename T, int N>
class Array{
    private:
        T *p;
        int len;
    public:
        Array();
        ~Array(){ delete p;}
        T & operator[](int);
        int length();
};

template <typename T, int N>
Array<T, N> :: Array(){
    p = new T[N];
    len = N;
}

template <typename T, int N>
T & Array<T,N> :: operator[](int i){
    if(i < 0 || i >=len){
        throw string("index out of array!");
    }
    return p[i];
}

template <typename T, int N>
int Array<T, N>::length(){
    return len;
}

int main(){
    Array<int, 5> arr;
    int i, len = arr.length();
    for(i = 0; i<len; i++){
        arr[i] = i*10; 
    }
    try{
        for(i = 0; i<len+1; i++){
            cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        }
    }catch(string s){
        cout<<s<<",i="<<i<<endl; 
    }
    return 0;
}
