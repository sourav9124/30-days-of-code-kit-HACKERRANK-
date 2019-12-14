#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
				count++;
			}
		}
	}
	cout<<"Array is sorted in "<<count<<" swaps."<<endl;
	cout<<"First Element: "<<ar[0]<<endl;
	cout<<"Last Element: "<<ar[n-1]<<endl;
}
