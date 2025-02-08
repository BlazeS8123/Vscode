#include <iostream>
using namespace std;
int main(){
	int h1,h2;
	cout<<"Enter heights OF 1ST PERSON: ";
	cin>>h1;
	cout<<"Enter heights OF 2ND PERSON: ";
	cin>>h2;
	if(h1<h2)
		cout<<"STUDENT WITH "<<h2<<" HEIGHT IS TALLER"<<endl;
	else
		cout<<"STUDENT WITH "<<h1<<" HEIGHT IS TALLER"<<endl;
	return 0;
}