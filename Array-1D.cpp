#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		cout<<a[i]<<" ";               /*Printing Array element*/
	}
	cout<<endl;
	for(int i=n-1; i>=0; i--)
	{
		cout<<a[i]<<" ";               /*Printing Array element in reverse order*/
	}
	cout<<endl;
	
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum+=a[i];             
	}
	cout<<sum<<endl;                   /*Printing sum of the elements of Array*/
	
	int multi=1;
	for(int i=0; i<n; i++)
	{
		multi*=a[i];
	}
	cout<<multi<<endl;                 /*Printing multiplication of the elements of Array*/
		
}
