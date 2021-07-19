#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int> &a, int left, int right){
    while(left < right){
        swap(a[left], a[right]);
        left++;
        right--;
    }
}

void rotate(vector<int> &a, int k) {
   int rotations = k%a.size();
   Reverse(a, 0, a.size()-rotations-1);
   Reverse(a, a.size()-rotations, a.size()-1);
   Reverse(a, 0, a.size()-1);
   //for(int i: a) cout<<i<<" ";
}

int main(){
  int n,key;
  cin>>n;
  cin>>key;
  vector<int> a(n);
  for(int i =0; i<n;i++){
    cin>>a[i];
  }
  rotate(a, key);
  for(int i: a) cout<<i<<" ";
}
