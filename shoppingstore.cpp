// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class store{
public:
int codeno;
float price;
float totalprice=0.0;
void additem()
{
cout<<"code number of item to add : ";
cin>>codeno;
cout<<"price : ";
cin>>price;
totalprice+=price;
}
void deleteitem() {
cout<<"code number of item to delete_item : ";
cin>>codeno;
cout<<" \n"<<"price : ";
cin>>price;
totalprice-=price;
}
};

int main(){
int i,n,d;
float totalprice;
totalprice =0;
cout<<"total item needed : ";
cin>>n;
store s1[n];
for(i=0;i<n;i++){
s1[i].additem();

}
cout<<"\n"<<"total price before deleting any item : "<< totalprice;

cout<<"\n"<<"delete_item : ";
cin>>d;
for(i=0;i<d;i++){
s1[i].deleteitem();
}
cout<<"final total price : "<< totalprice;

}
