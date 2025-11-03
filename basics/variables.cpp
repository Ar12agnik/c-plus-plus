#include <iostream>
using namespace std;
int main(){
    // main types of datatypes are 
    int a;
    float b;
    double c;
    char d;
    string e;
    bool f;
    a=1;
    b=1.2;
    c=1.99;
    d='H';
    e="Hello";
    f=true;
    cout<<a <<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f;
    const int constant=33;
    // constant = 44;//will generate an error

    return 0;
}