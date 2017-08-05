#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Enter ur name or enter \"!Exit\" to exit  ";
	while(cin>>name&&name!="!Exit")
	{
		cout<<"Hello,"<<name<<endl;
		cout<<"Enter ur name or enter \"!Exit\" to exit  ";
	}
	cout<<"Thanks!"<<endl; 
	system("pause");
	return 0;
 } 
