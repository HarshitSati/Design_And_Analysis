//Mines Diamond
//N<=1000
//threshold of K for sifference of two sizes of different diamonds
// 0<=K<=10000

#include <iostream>
#include <fstream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
  ifstream fin("diamond.in");
  ofstream fout("diamond.out");
  int k, n;
  fin>>n>>k;
  int count =0;
  int arr[n];
  for(int i = 0 ; i < n; i++){
    fin>>arr[i];

  }
  int a = sizeof(arr) / sizeof(arr[0]);
  sort(arr,arr+ a);
  for(int i = 0 ; i < n-1 ; i++){
    if(abs(arr[i] -arr[i+1]) <=k) continue;
    else count++;
  }
  fout<<n-count;

}
