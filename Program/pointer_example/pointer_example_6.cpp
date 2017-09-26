#include<iostream>
using namespace std;
int main()
{
	const int num1;
	num1 = 12;
	const int num2 = 15;
	num2++;
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
