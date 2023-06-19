#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// int slow=arr[0];
	// int fast=arr[0];
	// do{
	// 	slow=arr[slow];
	// 	fast=arr[arr[fast]];
	// }while(fast!=slow);
	// fast=arr[0];
	// while(slow!=fast)
	// {
	// 	slow=arr[slow];
	// 	fast=arr[fast];
	// }
	// int rep=slow;

    // don't know why above code is not working
	sort(arr.begin(),arr.end());
	int rep=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			rep=arr[i];
			break;
		}
	}
	// for missing summ[n nos]-sum+rep;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	long long sumofnnos=(n*(n+1))/2;
	int missing=sumofnnos-(sum-rep);
	pair <int,int> p={missing,rep};
	return (p);
}
