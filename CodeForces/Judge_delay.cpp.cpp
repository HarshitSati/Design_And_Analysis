#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
  cin>>t;
	while(t--){
    int n;
    cin>>n;
    int j,k;
    int count=0;
    for(int i =0; i< n; i++){
        cin>>j>>k;
        if(5 < k - j) count++;
    }
    cout<<count<<endl;

	}

}
