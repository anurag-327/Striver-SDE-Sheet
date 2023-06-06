#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   //   Write your code here
   int low=0,high=n-1,mid=0;
   while(mid<=high)
   {
      if(a[mid]==0)
      {
         swap(a[low],a[mid]);
         mid++;
         low++;
      }
      else if(a[mid]==1)
      {
         mid++;
      }
      else
      {
         swap(a[mid],a[high]);
         high--;
      }
   }
}