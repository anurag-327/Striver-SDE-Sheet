#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	// keep left pointer at max of arr 1 and right pointer at min of arr2
	// keep exchanging and at end we get right arr1 and right arr2 just sor it to get ans


	int left=m-1;
	int right=0;
	while(left>=0 && right<n)
	{
		if(arr1[left]>arr2[right])
		{
            swap(arr1[left],arr2[right]);
			left--;
			right++;
		}
		else 
		    break;	    
	}
	
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	for(int i=0;i<n;i++)
	{
		arr1.push_back(arr2[i]);
	}  
	vector<int> ans;
	for(int i=0;i<arr1.size();i++)
	{
		if(arr1[i]!=0)
		    ans.push_back(arr1[i]);
	}
	return ans;
}