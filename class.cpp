#include<iostream>
using namespace std;
class person{
char name[20];
int age;
public:
void getvalue();
void putvalue();
};
void person::getvalue(){
cin>>name>>age;
}
void person::putvalue(){
cout<<"name of person = "<<name<<"\n"<<"age = "<<age;
}
int main(){
person p1;
p1.getvalue();
p1.putvalue();
}


