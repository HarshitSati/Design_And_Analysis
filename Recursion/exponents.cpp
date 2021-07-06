// recursion - exponent x^y
#include<iostream>
using namespace std;
int exp(int x,int y){
  if(y ==0) return 1;
  else return x*exp(x,y-1);
}
int main(){

  int ans, x, y;
  cin>>x>>y;
  ans = exp(x, y);
  cout<<ans;

}
