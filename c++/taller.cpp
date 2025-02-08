#include <iostream>
using namespace std;
int main(){
    int h1,h2;
    cout<<"Enter heights : ";
    cin>>h1>>h2;
    if(h1<h2)
		cout<<"STUDENT WITH "<<h2<<" HEIGHT IS TALLER";
	else
		cout<<"STUDENT WITH "<<h1<<" HEIGHT IS TALLER";
	return 0;
}