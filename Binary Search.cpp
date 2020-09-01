#include<bits/stdc++.h>
using namespace std;
int idx;
int bs(int *arr, int st, int end, int x)
	{ 
	if(end>=st)
		{
		int mid = st + (end-st)/2;
		if(arr[mid]==x)
		return mid;		
		else if(arr[mid]<x)
			return bs(arr,mid+1,end,x);
		else if(arr[mid]>x)
			return bs(arr,st,mid-1,x);
		}
	else
		return -1;	
	}
	

int main()
{

int n,x;
cin>>n>>x;
int *arr = new int[n];
for(int i = 0;i<n;i++) cin>>arr[i];
cout<<bs(arr,0, n,x);
return 0;
}


