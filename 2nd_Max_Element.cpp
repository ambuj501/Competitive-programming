#include<bits/stdc++.h>
using namespace std;




int main()
{ int n;
cin>>n;
int *arr = new int[n];

for(int i = 0;i<5;i++) cin>>arr[i];

int sm = -1;
int fm = arr[0];

for(int i = 1;i<n;i++)
{
	if(arr[i]>fm)
	{
		sm = fm;
		fm = arr[i];
	}
	
}
cout<<fm<<" "<<sm;


return 0;
}


