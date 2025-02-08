#include <iostream>
using namespace std;
int main(){
	int rp,p;
	rp=20;
	cout << "POWER : ";
	cin >> p;
	if(p >= rp)
		cout << "YOU'RE STRONG! YOU PASSED!"<<endl;
	else
		cout<<"NOT SO STRONG HUH! BETTER LUCK NEXT TIME"<<endl;
	return 0;
}