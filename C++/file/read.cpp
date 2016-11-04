#include <fstream>
using namespace std;
struct student{
    string name;
    int num;
    int age;
    char sex;
};

int main(){
    student stud[3];
    int i;
    ifstream infile("stud.dat", ios::binary);
    if(!infile){
        cerr<<"open error!"<<endl;
        exit(1);
    }
    for(i=0;i<3;i++)
        infile.read((char *)&stud[i], sizeof(stud[i]));
    infile.close();
    for(i=0;i<3;i++){
        cout<<"No."<<i+1<<endl;
        cout<<"name:"<<stud[i].name<<endl;
    }
    return 0;
}
