//for one array find an element that stands at a position such that
//sum of left elements = sum of rigth elements
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int cumsum_array(vector<int> &vrr, int n){
  vector<int> leftsum(n,0), rightsum(n,0);
  leftsum[0] = vrr[0];
  rightsum[n-1] = vrr[n-1];
  for(int i=1; i < n; i++){
    leftsum[i] = vrr[i] + leftsum[i-1];
   rightsum[n-1-i] = vrr[n-1-i] +rightsum[n-i];
  }


  for(int i=1; i< n-1;i++){
    for(int j =n-2; j> 0; j--){
    if(leftsum[i] == rightsum[j]){
      return i;
    }
  }
  }
  for(int i:leftsum) cout<<i<<" ";
  for(int i:rightsum) cout<<i<<" ";
  return 0;

}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    vector<int> vrr(n);
    for(int i=0; i<n;i++){
      cin>>vrr[i];
    }
    int ans =cumsum_array( vrr, n);
    cout<<"index "<<ans;

  }
}
