#include <iostream>
using namespace std;
class employee{
char name[20];
int age;
public:
void inputdetail();
void outputdetail();
};

void employee::inputdetail() {
//cout<<"name of employee : ";
cin>>name;
//cout<<"age of employee : ";
cin>>age;
}
void employee::outputdetail() {
cout<<"name of employee : "<<name;
cout<<"\nage of employee : "<<age;
}
int main(){
employee e1;
e1.inputdetail();
e1.outputdetail();
}
