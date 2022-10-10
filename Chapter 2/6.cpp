#include<iostream>
using namespace std;

int fehrenheitToCelsius(float f){
    float c;
    c=((5*(f-32))/9);
    return c;
}
main(){
float f, c;
cin>>f;
c=fehrenheitToCelsius(f);
cout<<c;
}

