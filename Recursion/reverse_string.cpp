//Time complexity -> O(n)
//Space Complexity -> O(1)
#include<iostream>
using namespace std;
void reverse(string str, int n){
  cout<<str[n];
  if(n == 0){
    return;
  }
  reverse(str, n-1);
}
int main(){
  string str;
  cin>>str;
  reverse(str, str.length() -1);
}
