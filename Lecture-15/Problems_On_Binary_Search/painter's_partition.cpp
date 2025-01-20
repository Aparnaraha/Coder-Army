#include<iostream>
using namespace std;

long long minTime(int A[], int N, int M)
    {
       long long start =0 ,end =0,mid , ans;
        for(int i=0;i<N;i++)
        {
           if(start < A[i])
           start =A[i];
           end +=A[i];
        }  
        
        
       
        
        return ans;
    }