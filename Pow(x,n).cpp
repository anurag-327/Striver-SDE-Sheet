#include <bits/stdc++.h>
long long recursive(long long a,long long b,long long m)
{
	if(b==0)
	   return 1;
	long long res=recursive(a,b/2,m);
	if(b%2!=0)
	    return (a*res*res)%m;
    else
	    return (res*res)%m;;		 
}
// int modularExponentiation(int x, int n, int m) {
// 	// Write your code here.
// 	int ans=int(recursive((long long)x,(long long)n,(long long)m));
// 	return ans;
	  
// }
int modularExponentiation(int x, int n, int m) { 
	// Write your code here 
	int res=1; 
	while(n>0)
	{  
		if(n&1)
	    {   //odd  
		 res=(1LL*(res)*(x)%m)%m;  
		} 
	     x=(1LL*(x)%m*(x)%m)%m;  
	     n=n>>1; } 
	      return res; 
	}