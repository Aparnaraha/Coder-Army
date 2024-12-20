#include<iostream>
#include<vector>
using namespace std;


 vector<int> searchRange(vector<int>& nums, int target) {
       int start =0 , end =nums.size()-1 , mid ,  first =-1 ,last =-1;

    //    for first occurance 
    while(start <= end ){
        mid = start +(end - start)/2;
        if(nums[mid] == target){
            first = mid;
            end = mid -1;
        }
        else if(nums[mid] < target){
            start = mid+1;
        }
        else{
            end =mid -1;
        }
    }



    vector<int> a(2);
    a[0] =first;
    a[1] = last;

    return a;
    }


int main(){
  vector<int>arr = {2,3,3,3,3,4,5,6};
  int target =3;
  vector<int> ans = searchRange(arr, target);
  for(auto it:ans){
    cout<<it<<" ";
  }
}