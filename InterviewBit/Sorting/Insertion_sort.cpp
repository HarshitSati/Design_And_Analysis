//O(n^2)
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &vrr, int n){
  for(int i = 1; i < n; i++){
    int key = vrr[i];
    int j= i-1;// counter for number of left variables
    while(key < vrr[j] && j>=0 ){ //check on my left elements
      vrr[j+1] = vrr[j];
      j--;
    }
    vrr[j+1] = key;
  }

}

int main(){
  int n;
  cin>>n;
  vector<int> vrr(n);
  for(int i =0; i< n; i++){
    cin>>vrr[i];
  }
  //int *v = vrr.data();
  insertionSort(vrr, n);
  for(int i:vrr) cout<<i<<" ";
}
