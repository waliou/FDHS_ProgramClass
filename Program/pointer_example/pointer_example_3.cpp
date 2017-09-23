#include <iostream>
using namespace std;
int main()
{
	int num[5]={20,17,9,22,87};
	cout<<"using [] :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<"using pointer :"<<endl;	
	for(int i=0;i<5;i++)
	{
		cout<<*(num+i)<<" ";
	}
	cout<<endl;
	return 0;
}

