#include <iostream>
using namespace std;
int main()
{
  int n1,n2,n3;
  float avg;
  std::cout << "Enter num: " << std::endl;
  std::cin >> n1>>n2>>n3;
  avg=(n1+n2+n3)/3;
  std::cout << "Average: "<<avg << std::endl;
  return 0;
}