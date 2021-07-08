// all the weights should be in B in an order where source is A and dest is B
#include<iostream>
using namespace std;
void TOH(int n, char source, char dest, char spare){
  if(n==0){
    return;
  }
  TOH(n-1,source, spare, dest);
  cout<<n<<" "<<source<<"-> "<<dest<<"\n";
  TOH(n-1,spare, dest, source);
}
int main(){
  int n;
  cin>>n;
  TOH(n, 'A', 'B', 'C');
}
