#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &a)
{
	// Write your code here.
 
    // the approach is to make first row and first col 
	// as marker for rows/col that have to be made zero

	int col=1;
	int n=a.size();
	int m=a[0].size();

	// marking markers for making zero
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==0)
			{
				a[i][0]=0;
				j!=0?a[0][j]=0:col=0;
			}
		}
	}

	// marking inner matrix to avoid conflict on last element

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				if(a[i][0]==0 || a[0][j]==0)
				    a[i][j]=0;
			}
		}
	}

	// marking 1st row now 

	if(a[0][0]==0)
	{
		for(int i=0;i<m;i++)
		{
			a[0][i]=0;
		}
	}

    // marking 1st row now

	if(col==0)
	{
		for(int i=0;i<n;i++)
		{
			a[i][0]=0;
		}
	}

}