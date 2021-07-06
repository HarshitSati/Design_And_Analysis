//GCD euclid's formula
// a%b = rem ->0 then b is GCD
//else b is a and a%b = rem is b
#include<iostream>
using namespace std;

int GCD(int a, int b){
  if(a%b == 0) return b;
  else return GCD(b, a%b);
}
int main(){
  int a, b;
  cin>>a>>b;
  int ans =GCD(a, b);
  cout<<ans;
}
