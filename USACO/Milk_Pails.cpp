//http://www.usaco.org/index.php?page=viewproblem2&cpid=615
//1 <= X < Y< M
// 1<=M<=1000
// assumption : X+Y <M
#include<iostream>

using namespace std;


int main(){

  int X,Y,M;
  cin>>X>>Y>>M;
  int ans=X+Y;
  if(M >= ans){
    M = M-ans;
  }
  //cout<<M;
  while(X <= M){
    M = M-X;
    ans +=X;
    //cout<<ans<<" "<<M<<" ";
    if(M >= Y){
      M= M-Y;
      ans +=Y;
    }
  }
  cout<<ans;
}
