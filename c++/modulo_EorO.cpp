#include <iostream>
using namespace std;
int main(){
	int n;
	cout <<"ENTER NO. : ";
	cin>>n;
	if(n%2==0) //it checks remainder if divided with 2 and checks it with 0
		cout << "NO. IS EVEN"<<endl;
	else
		cout << "NO. IS ODD"<<endl;
	return 0;
}