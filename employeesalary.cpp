#include<iostream>
using namespace std;
class esalary{
char name[30];
int id;
float basicsalary;

float da, gross,ittax,netsalary;
public:
void detail(){
cout<<"enter emoloyee detail \n";
cout<<"name : ";
cin>>name;
cout<<"ID of employee : ";
cin>>id;
cout<<"basic salary of employee : ";
cin>>basicsalary;
}
void finalsalary(){
da=basicsalary*0.52;
gross = da+basicsalary;
ittax=gross*0.30;
netsalary=gross-ittax;
cout<<netsalary;
}
};
int main(){
esalary emp[100];
int i,empcount,count;
cout<<"enter the number of employee : ";
cin>>empcount;
for(count=0;count<empcount;count++){
emp[i].detail();
}
for(count=0;count<empcount;count++){
cout<<"so after applying the taxes and adding D.A. Employee : "<<i<<" has final salary : " ;
emp[i].finalsalary();
cout<<"\n";
}
return 0;
}

