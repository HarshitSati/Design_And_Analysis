//https://www.interviewbit.com/problems/pick-from-both-sides/
//n is the size of array, k is the size of subarray
//the sub array can only pick elements from either the left most or the right most side
#include<bits/stdc++.h>
using namespace std;
int pickBothSides(vector<int> &vrr, int n,int k){
  int ans = 0, sum=0;
  k=k%n;
  for(int i =0; i< k; i++){ //first window
    ans += vrr[i];
  }
  //cout<<ans<<" ";
  sum = ans;
  for(int i=0; i< k;i++ ){ //rest windows
//    cout<<sum<<" ";
    sum = sum+ vrr[n-1-i] - vrr[k-1-i];
    ans = max(ans, sum);
  }

  return ans;
}


int main(){
  int n,k;
  cin>>n;
  cin>>k;
  vector<int> vrr(n);
  for(int i =0; i< n; i++){
    cin>>vrr[i];
  }
  //int *v = vrr.data();
  int ans = pickBothSides(vrr, n, k);
//  for(int i:vrr) cout<<i<<" ";
  cout<<"\n"<<ans;
}
