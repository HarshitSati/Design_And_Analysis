// conversion of 12:00 to military 24:00 time
// checking whether it's PM or AM
//AM string does not need any change unless it's 12 -> 00
//if PM just add 12 to the number 
#include <bits/stdc++.h>

using namespace std;
/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
  int n = s.length();
  string AMorPM = s.substr(n - 2, n);
  cout << AMorPM;
//cout<<stoi("07");
  string hour_string = s.substr(0, 2);
  int hour = stoi(hour_string);
  if (AMorPM == "PM") {
    if (hour < 12) {
      hour += 12;
      hour_string = to_string(hour);
      s.replace(0, 2, hour_string);
    }
  } else if (hour == 12) {
    hour_string = "00";
    s.replace(0, 2, hour_string);

  }
  return s.erase(n - 2, n);
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);
  string result = timeConversion(s);
  fout << result << "\n";
  fout.close();
  return 0;
}
