#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int LinearSearch(long arr[], int n ,long m){
    	int d=-1;
		for(int i=0;i<n;i++){
			if(arr[i]==m){
			d= i;
			}  
}
if(d>=0)
return d+1;
else
return d;
}
int main() {
	int n,m;
	cin>>n>>m; 
	long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		cout <<LinearSearch(arr,n,m)<<endl;



}
