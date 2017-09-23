#include <iostream>
using namespace std;
int main()
{
	int* ptr = NULL;
	ptr = new int[5];
	for(int i=0;i<5;i++)
		ptr[i]= i+1;

	cout<<"using [] :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
	cout<<"using pointer :"<<endl;	
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;

	delete[] ptr;//very important!!!!
	ptr = NULL;
	return 0;
}

