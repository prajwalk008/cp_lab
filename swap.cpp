#include<iostream>
using namespace std;

int main(){
    cout<<"2 number bol bhai: ";
    int a,b,swapper;
    cin>>a>>b;
    cout<<"Tune dala hai- a = "<<a<<" aur b = "<<b<<endl<<"ab swap karte hai......"<<endl;

    swapper=a;

    a=b;
    b=swapper;

    cout<<"ab a = "<<a<<" aur b = "<<b<<" ho gaya!";

}