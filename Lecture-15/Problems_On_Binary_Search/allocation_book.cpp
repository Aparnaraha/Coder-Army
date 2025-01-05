 #include<iostream>
 using namespace std;
 
 int findPages(int A[], int N, int M) 
    {
        if(M > N) return -1;
        
        int start =0 ,end =0,mid , ans;
        for(int i=0;i<N;i++)
        {
           start =max(start,A[i]);
           end +=A[i];
        }  
        
        
  
        
    }