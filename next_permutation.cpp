#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    //  Write your code here.
    // finding breakpt after whom we can arrange nos to find next permutatuion
    int breakpt=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            breakpt=i;
            break;
        }
    }

    // if we did not get the breakpoint that means array was already maxed in dict so we return reverse of it
    if (breakpt == -1) {
      reverse(a.begin(), a.end());
      return a;
    }

    // swapping element>a[breakpt] and smallest of all we started from back bcoz array was in sorted order from end
    // [2,1,5,4,3,0,0]
    for(int i=n-1;i>=0;i--) 
    {
        if(a[i]>a[breakpt])
        {
            swap(a[i],a[breakpt]);
            break;
        }
    } 

    // now reversing rem area to get nest least smallest permutatuion

    reverse(a.begin()+breakpt+1,a.end());
    return a;
}