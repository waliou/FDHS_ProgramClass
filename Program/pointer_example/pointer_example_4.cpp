#include <iostream>
using namespace std;
int main()
{
	int* ptr = new int;
	*ptr = 87;
	cout<<"*ptr = "<<*ptr<<endl;
	delete ptr;
	ptr = NULL;
	return 0;
}

