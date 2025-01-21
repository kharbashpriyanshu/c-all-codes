#include<iostream>
using namespace std;
class employee {
    char name[20];
    float age;
    public:
    void getdata(){
        cin>>name;
        cin>>age;
    } 
    void putdata(){
        cout<<"\nName of employee : "<<name;
        cout<<"\nage of employee : "<<age;
    }
};
int main(){
employee emp[5];
for(int i=0;i<5;i++){
    emp[i].getdata();
}
for(int i=0;i<5;i++){
    emp[i].putdata();
}
}
