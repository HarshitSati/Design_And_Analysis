//the elephant with number K from N elements
// will be happy if he recieves A(K) candies
//C candies in zoo

// zoo wants to make all N elephants happy
#include<iostream>
#include<vector>
using namespace std;
string happyElephant(vector<int> &v, int n, long long int c){
  int sum =0;
  for(int i =0;i<n;i++){
    sum += v[i];
  }
  if(sum <=c){
    return "Yes";
  }
  else return "No";
}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
//  freopen("binary_search.in","r",stdin);
  //freopen("binary_search.out","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int n;
    long long int c;
    cin>>n;
    cin>>c;
    vector<int>v(n,0);
    for(int i =0; i < n; i++){
      cin>>v[i];
    }
    cout<<happyElephant(v,n,c)<<"\n";
  }
}
