#include<iostream>
using namespace std;

int main(){
    cout<<"Phataphat 2 number bol, bich me space chod ke: ";
    int a,b;
    cin>>a>>b;

    if(a>b){
        cout<<a<<" bada hai!";
    } else if(b>a){
        cout<<b<<" bada hai!";

    } else if(a==b){
        cout<<"Equal numbers hai!";
    }
     
}
