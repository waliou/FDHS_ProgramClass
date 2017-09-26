#include <iostream>
using namespace std;
int main()
{
	const int num1 = 11;
	int num2 = 12;
	int num3 = 13;
	
	const int* ptr = &num1;
	const int* ptr_const = &num2;
	//int *ptr_normal = &num1; 
	int *const cptr = &num3;	
	//*ptr_const = 13; 
	cout<<*ptr_const<<endl;
	cout<<*ptr<<" "<<*cptr<<endl;		
	//cptr = &num2;
	//cout<<*ptr<<" "<<*cptr<<endl;
	return 0;
}
