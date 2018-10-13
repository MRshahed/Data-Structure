#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

int n,m;
int a[100][100];

	cin>>n>>m;
	for(int i=0; i<n; i++)
    {
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
  for(int i=0; i<n; i++)
    {
		for(int j=0; j<m; j++)
		{
          cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

