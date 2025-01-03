 #include<iostream>
 using namespace std;
 
 
        while(start <= end){
            mid = start + (end-start)/2;
            
            int pages =0 , count =1;
            for(int i=0;i<N;i++){
                pages +=A[i];
                if(pages > mid){
                    count++;
                    pages =A[i];
                }
            }
            if(count <= M){
                ans =mid;
                end =mid-1;
            }
            else{
                start =mid+1;
            }
        }
        
        return ans;
        
    }