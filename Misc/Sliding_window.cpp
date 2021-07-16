//array of a size - n
//size of sub array - k
//find the sum of all sub array
//prin maximum of all subarrays
// check for when array has -ves
#include<iostream>
#include<vector>
using namespace std;
void slidingWindow(vector<int> &vrr, int n, int k){
  int sum=0, max=0;
  for(int j =0; j < k; j++){
    sum +=vrr[j];
  }
  for(int i =1; i <= n- k+1; i++){
    //cout<<vrr[i-1]<<" "<<vrr[i+k-1]<<" ";
    //cout<<sum<< " ";
    if(max < sum) max = sum;
    sum -= vrr[i-1];
    sum +=vrr[i+k-1];
  }
  cout<<max;
}

int main(){
  int n,k;
  cin>>n;
  cin>>k;
  vector<int> v(n);
  for(int i =0; i < n; i++){
    cin>>v[i];
  }
  slidingWindow(v, n, k);

}
