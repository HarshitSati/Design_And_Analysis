// two players
//the one with the max cumulative lead wins
//https://www.codechef.com/problems/TLG
#include<iostream>
#include<vector>
using namespace std;
struct store{
  int W, L;
};

struct store leadGame(vector<int> &v1, vector<int> &v2,int  n){
  struct store node;
  int max =0;
  for(int i=0; i<n;i++){
    if(v1[i]> v2[i]){
        if(max < v1[i] -v2[i] ){
        node.W = 1;
        max = v1[i] - v2[i];
        node.L =max;
      }
    }
    else{
      if(max < v2[i] -v1[i] ){
        node.W = 2;
        max = v2[i] - v1[i];
        node.L = max;
      }
    }
  }
  return node;
}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
//  freopen("binary_search.in","r",stdin);
  //freopen("binary_search.out","w",stdout);

  int n;
  cin>>n;
  vector<int>v1(n,0), v2(n,0);
  for(int i =0; i < n; i++){
      cin>>v1[i];
      cin>>v2[i];
      if(i >0){
        v1[i] +=v1[i-1];
        v2[i] +=v2[i-1];
      }
  }
  struct store object = leadGame(v1, v2, n);
  cout<<object.W<<" "<<object.L<<"\n";
}
