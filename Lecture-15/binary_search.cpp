#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
  
}

int main(){
  int arr[1000];
  int n;
  cout<<"Enter the number u want the array of :";
  cin>>n;

cout<<"Enter the elements of the array";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int key;
  cout<<"Enter the key u want to search in array :";
  cin>>key;

  int ans = BinarySearch(arr,n,key);
  cout<<ans;
}