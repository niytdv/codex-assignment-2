#include <iostream>
using namespace std;

int main(){
    float num;
    cout<<"Enter floating point number: ";
    cin>>num;
    int a=(int)num;
    cout<<"Original value: "<<num<<endl;
    cout<<"Typecasted value: "<<a;
}