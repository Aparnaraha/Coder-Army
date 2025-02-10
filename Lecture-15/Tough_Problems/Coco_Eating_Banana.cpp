
#include<iostream>
#include<vector>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int start = 0, end =0 , mid , ans , n=piles.size();
    long long sum =0;

    for(int i=0;i<n;i++){
        start =sum + piles[i];
        end =max(end,piles[i]);
    }

    
    return ans;
}
