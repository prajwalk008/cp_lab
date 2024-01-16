#include<iostream>
using namespace std;

int main(){
    double maths{0},physics{0},chem{0},CP{0},DS{0};
    cout<<"Maths ke marks: ";
    cin>>maths;

    cout<<"Physics ke marks: ";
    cin>>physics;

    cout<<"Chemistry ke marks: ";
    cin>>chem;

    cout<<"CP ke marks: ";
    cin>>CP;

    cout<<"DS ke marks: ";
    cin>>DS;

    double percent{0};
    percent=(maths+physics+chem+CP+DS)/5;

    cout<<"Percent= "<<percent;
    
}