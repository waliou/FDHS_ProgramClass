#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		bool field[n+1][m+1]={false};
		int k;
		cin>>k;
		int x1,y1,x2,y2;
		for(int i=0;i<k;i++)
		{
			cin>>x1>>y1>>x2>>y2;
			if(x1==x2) //vertical
			{
				if(y1>y2)
					swap(y1,y2);
				for(int j = y1;j<=y2;j++)
					field[x1][j] = true;
			}
			else if(y1==y2)//horizon
			{
				if(x1>x2)
					swap(x1,x2);
				for(int j = x1;j<=x2;j++)
					field[j][y1] = true;
			}
			else if((x1-x2)*(y1-y2)>0)
			{
				if(x1>x2)
				{
					swap(x1,x2);
					swap(y1,y2);
				}
				int x=x1,y=y1;
				for(int j = x1;j<=x2;j++)
				{
					field[x][y]=true;
					x++;y++;
				}
			}
			else
			{
				if(x1>x2)
				{
					swap(x1,x2);
					swap(y1,y2);
				}
				int x = x1, y = y1;
				for(int j =x1;j<=x2;j++)
				{
					field[x][y] = true;
					x++;y--;
				}
			}
		}
		int ans = 0;
		for(int i=1;i<=n;i++)
			for(int j =1;j<=m;j++)
			{
				if(field[i][j])
					ans++;
			}
		cout<<ans<<endl;
	}
	return 0;
}
