#include<iostream>
#include<vector>
using namespace std;





int main(){
  vector<int>arr = {2,3,3,3,3,4,5,6};
  int target =3;
  vector<int> ans = searchRange(arr, target);
  for(auto it:ans){
    cout<<it<<" ";
  }
}