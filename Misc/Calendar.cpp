//Program to find Day for a given date
// what has not been done - //Note:  add -ve checking and decimal value checking
#include<iostream>
#include<math.h>
//#include<string.h>
//#include <sstream>
using namespace std;
float formula(int k,int m,int D,int C){
  return k + (13*m-1)/5 + (5*D+C)/4 - 2*C;
}
int main(){
  string date;
  cout<<"Enter Date of which you want to find the day (format DD/MM/YYYY eg. 28/08/2021) ";
  cin>>date;
  //cout<<date<<"\n";
  //cout<<date.length()<<"\n";
  int p = 1, D= 0, C= 0, month = 0, k = 0;
  for(int i = int(date.length() - 2) ; i < int(date.length()) ; i++){
    //cout<<i<<"\n";
    //cout<<(int)date[i]<<"\n";
    //cout<<(int)date[i] + D<<"date[i] "<<"\n";
    D = (date[i]- '0' )*pow(10,p) +D;
    //cout<<D<<"\n";
    C = (date[i -2]- '0' )*pow(10,p) +C;
    month = (date[i -5]- '0' )*pow(10,p) +month;
    k = (date[i -8]- '0' )*pow(10,p) +k;
    p--;
  }
  //cout<<C<<"\n";

  /* for months MM*/
  int revised_months[] = {11, 12, 1, 2,3, 4, 5, 6, 7, 8, 9, 10};
  int m = revised_months[month-1];
  if(m ==12 || m ==11) D--; //condition for Jan and Feb

  //cout<<k<<" "<<m<<" "<<C<<" "<<D<<"\n";
  float ans = formula(k, m,D, C);

  string days[] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
  cout<<days[int(ans)%7];

}
