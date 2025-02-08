#include <iostream>
using namespace std;
int main(){
	int mark;
	cout<<"ENTER MARK : ";
	cin>>mark;
	if(mark >=24 && mark <=100)
		cout<<"CONGRATS! YOU HAVE PASSED !" << endl;
	else if(mark <24 && mark >=0)
		cout<<"CONGRATS! YOU ARE FAILURE!\nJUST GIVEUP AND DIE"<<endl;
	else
		cout<<"invalid\nTRY AGAIN!"<<endl;
	return 0;
}