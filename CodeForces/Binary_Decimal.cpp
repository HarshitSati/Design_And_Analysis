//https://codeforces.com/contest/1530/problem/A
/*
3
121
5
1000000000*/
#include<iostream>
#include<vector>
#include <cstdio>
using namespace std;
int minBinaryDecimal( int &n){
  int a=n;
  int store =0, ans = 0;
  while(a !=0){
    store = a%10;
    a = a/10;
    ans = max(ans, store);
  }
  return -1;
}


int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
//  freopen("binary_search.in","r",stdin);
  //freopen("binary_search.out","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    cout<<minBinaryDecimal(n)<<"\n";
  }
}
