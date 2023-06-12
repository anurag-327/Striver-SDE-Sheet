

//binary serach approach if nos are in pai rthen ther occupy bposn like 0,1   2,3  4  5,6

int singleNonDuplicate(vector<int>& a)
{
	// Write your code here
	int low=0,high=a.size(),mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid%2==0)
		{
			if(a[mid]==a[mid+1])
			    low=mid+1;
		    else 
			    high=mid-1;		
		}
		else
		{
			if(a[mid]==a[mid+1])
			    high=mid-1;
		    else 
			    low=mid+1;	
		}
	}
	return a[low];
}