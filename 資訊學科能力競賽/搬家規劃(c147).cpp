#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	//init
	string input;
	vector<int> weight;
	vector<int> need;
	int L;
	//input
	getline(cin,input);
	stringstream ss(input);
	int tmp;
	while(ss>>tmp)
		weight.push_back(tmp);
	getline(cin,input);
	stringstream sss(input);
	while(sss>>tmp)
		need.push_back(tmp);
	cin>>L;
	//knapsack
	int cost[L+1] = {0};
	for(int i=0;i<weight.size();i++)
	{
		for(int j = L;j>=weight[i];j--)
			cost[j]=max(cost[j-weight[i]]+need[i],cost[j]);
	}
	//finish
	cout<<cost[L]<<"\n";
	return 0;
}
