#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    int n=arr.size();
    int cnt1=0,cnt2=0,ele1,ele2;
    for(int i=0;i<arr.size();i++)
    {
        if(cnt1==0 && arr[i]!=ele2)
        {
            cnt1=1;
            ele1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=ele1)
        {
            cnt2=1;
            ele2=arr[i];
        }
        else if(ele1==arr[i])  cnt1++;
        else if(ele2==arr[i]) cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele1) cnt1++;
        if (arr[i] == ele2) cnt2++;
    }
    int cnt = int(n / 3) + 1;
    if (cnt1 >= cnt) 
        ans.push_back(ele1);
    if (cnt2 >= cnt) 
        ans.push_back(ele2);
    return ans;
}