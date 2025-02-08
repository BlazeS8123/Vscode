#include <iostream>
using namespace std;
int main(){
    float pA,nY,rI,iA;
    cout<<"PRINCIPLE AMOUNT: RS.";
    cin>>pA;
    cout<<"NUMBER OF YEARS: ";
    cin>>nY;
    cout<<"RATE OF INTEREST: ";
    cin>>rI;
	iA=pA*nY*rI/100;
	cout<<"INTEREST AMOUNT OF PRINCIPAL AMOUNT "<<pA<<" IN "<<nY<<" NO. OF YEARS"<<" WITH INTEREST "<<rI<<"% = RS."<<iA<<endl;
	double tA;
	tA=pA+iA;
	cout<<"TOTAL AMOUNT = RS."<<tA<<endl;
	return 0;
}