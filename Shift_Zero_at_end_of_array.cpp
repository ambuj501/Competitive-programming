#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
int *arr = new int[n];

for(int i = 0;i<n;i++) cin>>arr[i];

int fp = 0;
int sp = 0;

while(fp<n)
{
	if(arr[fp]==0)
	{
		fp++;
	}
	else
	{
		arr[sp] = arr[fp];
		sp++;
		fp++;
	}	
}
while(sp<n)
{
	arr[sp] = 0;
	sp++;
}

for(int i =0;i<n;i++)
	cout<<arr[i]<<" ";
return 0;
}


