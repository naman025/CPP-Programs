#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t,i,n,x[10],b[10],j,cost;
	cin>>t;
	
	while(t>0)
	{
		cin>>n;
		for(i=0;i<n;i++)
		    cin>>x[i];
	    for(i=0;i<n;i++)
		    cin>>b[i];
		cost=0;
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
							cost+=(abs(x[i]-x[j])*max(b[i],b[j]));
				}
		}
		cout<<cost%100000007<<endl;
		t--;
	}
	return 0;
}