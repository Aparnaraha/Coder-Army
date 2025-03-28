#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


 int solve(int n, int k, vector<int> &stalls) {
    
        int start =1 ,end ,mid ,ans;
        sort(stalls.begin(),stalls.end());
        end = stalls[n-1] - stalls[0];
        
        while(start <= end ){
            mid = start + (end -start)/2;
            
            int count =1 ,pos =stalls[0];
            for(int i=1;i<n;i++){
                if(pos + mid <= stalls[i])
                {
                    count++;
                    pos =stalls[i];
                }
            }
            
            if(count < k)
            {
                end = mid -1;
            }
            else{
                ans = mid;
                start =mid+1;
            }
        }
        return ans;
    }