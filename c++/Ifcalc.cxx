#include <iostream>
using namespace std;
int main(){
  int n1,n2,n3;
  cout<<"enter 1st no. : ";
  cin>>n1;
  cout<<"enter 2nd no. : ";
  cin>>n2;
  n3=n1+n2;
  cout<<n3<<"\n";
  if(n3>10){
  cout<<"more than just 10";
  }else{
  cout<<"not enough";
  }
  return 0;
}