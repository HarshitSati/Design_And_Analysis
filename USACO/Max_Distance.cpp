//3<=N<=5000
//find max euclidean distance
// -1000<= x(i), y(i) <=1000
//O(n^2)
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x[n], y[n];
  for(int i = 0 ; i < n ; i++){
    cin>>x[i];
  }
  for(int i = 0 ; i < n ; i++){
    cin>>y[i];
  }
  int max =0;
  for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; j < n ; j++){
      int temp =(x[i]-x[j])*(x[i]-x[j])+(y[i]- y[j])*(y[i]-y[j]);
      //cout<<temp<<" ";
      if(max <  temp ){
        max = temp;
      }
    }
  }

  cout<<max;
}
