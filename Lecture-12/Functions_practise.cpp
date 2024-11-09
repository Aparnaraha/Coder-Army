#include<iostream>
using namespace std;

// Q The number is prime or not 
int Prime(int a){ // function declaration
// function defination
  if(a < 2)return 0;

  for(int i=1;i<a;i++){   
    if(a/i == 0 )return 0;
  }
return 1;
}

