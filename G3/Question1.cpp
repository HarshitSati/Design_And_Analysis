// find the missing elemnt in arr1 in contrast to arr2
// eg. arr1 = [2, 3,4 , 7,5, 3]
// arr2 = [6, 2, 3, 3, 4, 5,5 ]
// m>n

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//#define FOR(n) for(int i =0; i<n ; i++)
void freq_array(vector<int> &vrr1, int n, vector<int> &vrr2, int m){
  //vector<int> key,value, ans; // as m>n
  vector<int> ans;
  sort(vrr1.begin(), vrr1.end()); //nlogn
  sort(vrr2.begin(), vrr2.end()); //nlogn
  int i=0,j=0;
  while(j<m&&i <n){

    if(vrr1[i] != vrr2[j]){
      ans.push_back(vrr2[j]);
      j++;
      continue;
    }
    j++;
    i++;
  }
  for(int i: ans) cout<<i<<" ";
}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
//  freopen("binary_search.in","r",stdin);
//  freopen("binary_search.out","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> vrr1(n), vrr2(m);
    for(int i=0; i<n;i++){
      cin>>vrr1[i];
    }
    for(int i=0; i<m;i++){
      cin>>vrr2[i];
    }
    //int low =0;
    freq_array( vrr1, n, vrr2, m);

  }
}
