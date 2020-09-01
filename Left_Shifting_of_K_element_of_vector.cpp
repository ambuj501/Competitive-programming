#include<bits/stdc++.h>
using namespace std;

vector<int>v;


int main()
{
int n,k;
cin>>n>>k;

for(int i = 0;i<n;i++)
{ int temp;
cin>>temp;
 v.push_back(temp);
}

for(int i  = 0;i<k;i++)
v.push_back(v[i]);

for(int  i =0;i<n;i++)
v[i] = v[i+k];

while(k--)
{
	v.pop_back();
}
for(auto x : v)
cout<<x<<" ";

return 0;
}


