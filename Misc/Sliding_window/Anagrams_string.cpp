#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){

  string str, ptr;
  cin>>str;
  cin>>ptr;
  int n= str.length();
  int k= ptr.length();

  vector<int> sv(26,0), pv(26,0), ans;

  for(int i = 0; i < k; i++) //first window
        {
            ++pv[ptr[i]-'a'];
            ++sv[str[i]-'a'];

        }
        if(pv == sv){
          ans.push_back(0);
        }
        //for(auto i : pv) cout<<i<<" ";
        cout<<"\n";
        //for(auto i: sv) cout<<i<<" ";
        for(int i =0; i< n-k; i++){
          --sv[str[i] - 'a'];
          ++sv[str[i+k] - 'a'];
          //cout<<m<<" "<<n;
          if(pv == sv) ans.push_back(i+1);

        }
        for(int i:ans) cout<<i<<" ";

  }
