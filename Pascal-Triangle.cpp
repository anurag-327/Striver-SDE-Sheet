#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  // starting and last element will be always 1
  // arr[row][col]=arr[row-1][col-1]+arr[row-1][col]
  // O(N^2) Space Complexity
    vector<vector<long long int>> printPascal;
    for(int row=0;row<n;row++)
    {
      vector<long long int> temp;
      for(int col=0;col<=row;col++)
      {
         if(col==0 || col==row)
            temp.push_back(1);
         else
            temp.push_back(printPascal[row-1][col-1]+printPascal[row-1][col]);   
      }
      printPascal.push_back(temp);
    }
    return printPascal;
}
