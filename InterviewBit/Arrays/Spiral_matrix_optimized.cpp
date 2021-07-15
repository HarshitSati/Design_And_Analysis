//printing an array in spiral
#include<iostream>
#include<vector>
using namespace std;

int main() {
   //A = {{1,2,3},{4,5,6},{7,8,9}};
  vector<vector<int>> A = {{1},{2},{3}};
    vector <int> arr;
    //arr.resize()
    //int m =A.size();
    //int n = A[0].size();
    int max_row = A.size()-1;
    int min_row = 0;
    int max_col = A[0].size()-1;
    int min_col = 0;
    int tne = (max_row +1) * (max_col+1); //numebr of elements
    int cnt = 0;
    //if(min_row == max_row&& max_col == min_col) return arr.push_back(A[0]);
    //cout<<max_col<<min_col;
    //cout<<max_row<<min_row;
    while(cnt<tne){
      for(int j = min_col; j <= max_col &&cnt<tne; j++){
              //  cout<<A[min_row][j];
                arr.push_back(A[min_row][j]);
                cnt++;
          }
            min_row +=1;

            for(int j = min_row ; j <= max_row&&cnt<tne; j++){
              //cout<<A[j][max_col];
                arr.push_back(A[j][max_col]);
                cnt++;

          }
            max_col -=1;
            for(int j = max_col ; j >=min_col&&cnt<tne; j--){
            //  cout<<A[max_row][j];
                arr.push_back(A[max_row][j]);
                cnt++;

          }
            max_row -=1;
            for(int j = max_row ; j >=min_row&&cnt<tne; j--){
              //cout<<A[min_row][j];
              //cout<<"hello";
                arr.push_back(A[j][min_col]);
                cnt++;

          }
            min_col +=1;
    }
    for(int i :arr){
      //cout<<"hello";
      cout<<i<<"\n ";
  }
}
