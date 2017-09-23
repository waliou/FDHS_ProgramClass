#include <iostream>
using namespace std;
void magic(int);
void magic(int*);
int main()
{
	int num1 = 87, num2 = 63;
	int *ptr = &num2;
	cout<<"C,"<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
	magic(num1);
	magic(num2);	
	cout<<"C,"<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
	magic(ptr);
	cout<<"C,"<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
	return 0;
}

void magic(int num)
{
	num++;
}

void magic(int* num_ptr)
{
	*num_ptr+=1;
}
