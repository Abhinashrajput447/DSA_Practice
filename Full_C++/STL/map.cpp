#include <iostream>  //input output header file including
#include <map> //map header file including
#include <vector> //vector header file including
#include <string> //string header file including
#include <set>  //set header file including
using namespace std; 


int main() {
  map<int, string> mp;
  
  mp[101] = "Abhinash";
  mp[110] = "Varsha";
  mp[13] = "Abhiansh";
  mp[25] = "Varsha";
  mp[101] = "Varsha";

  cout << mp.count(101) << "\n";
  cout << mp.count(100) << "\n";

  for(auto it : mp) {
    cout << "double : " << it.first*2 << endl;
  }

  return 0;
}