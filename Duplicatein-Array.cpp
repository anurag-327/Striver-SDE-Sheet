#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    // O(N) space Complexity
    int a[n]={0};
	int ans;
	for(int i=0;i<n;i++)
	{
		a[arr[i]]+=1;
		if(a[arr[i]]>1)
		{
			ans=arr[i];
			break;
		}
	}
	return ans;
}
