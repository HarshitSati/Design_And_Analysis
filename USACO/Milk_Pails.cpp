//http://www.usaco.org/index.php?page=viewproblem2&cpid=615
//1 <= X < Y< M
// 1<=M<=1000
// assumption : X+Y <M
#include<iostream>
#include<fstream>
using namespace std;

/*
int main(){
  ifstream fin("pails.in");
  ofstream fout("pails.out");
  int X,Y,M;
  fin>>X>>Y>>M;
  int ans=X+Y;
  if(M >= ans){
    M = M-ans;
  }
  //cout<<M;
  while(M>= X){
    M = M-X;
    ans +=X;
    //cout<<ans<<" "<<M<<" ";
    if(M >= Y){
      M= M-Y;
      ans +=Y;
    }
  }
  fout<<ans;

}*/
/*int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  ifstream fin("pails.in");
  ofstream fout("pails.out");
  int X,Y,M;
  fin>>X>>Y>>M;
  int a = M/X;
  int b = M/Y;
  int  ans=0;
  for(int i = 0 ; i < a; i++ ){
    for(int j = 0; j < b; j++){
      int n = X*i + Y*j;
      if(n>M) break;
      ans = max(ans, n);
    }
  }
  fout<<ans;
}*/
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
  ifstream fin("pails.in");
  ofstream fout("pails.out");
	int a,b,c,ans=0;
	fin >> a >> b >> c;
	for (int i = 0; i < 1001; ++i) {
		if (a*i > c) break;
		for (int j = 0; j < 1001; ++j) {
			int n = a*i + b*j;
			if (n > c) break;
			ans = max(ans,n);
		}
	}
	fout << ans;
	return 0;
}
