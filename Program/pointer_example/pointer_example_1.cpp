#include <iostream>
using namespace std;
int main()
{
	int num = 99;
	int* ptr= &num ;
	cout<<"num is "<<num<<endl;
	cout<<"ptr is "<<ptr<<endl;
	cout<<"*ptr is "<<*ptr<<endl;
	return 0;
}

