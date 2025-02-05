#include <iostream>
using namespace std;
int main(){
    const float pi=22/7;
    float r,a,p;
    cout<<"RADIUS= ";
    cin>>r;
    p=2*pi*r;
    a=pi*r*r;
    cout<<"PERIMETER= "<<p<<endl;
    cout<<"AREA= "<<a<<endl;
    return 0;
}