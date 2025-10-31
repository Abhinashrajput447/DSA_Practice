#include<iostream>
#include<unordered_map>
using namespace std;


int main() {
  unordered_map<string, int> mp;

  mp["Apple"] = 10;
  mp["Banana"] = 20;
  mp["Mango"] = 30;

  cout << "Apple price: " << mp["Apple"] << endl;

  if(mp.find("lanana") != mp.end()) {
    cout << "Banana Found\n";
  }else{
    cout << "Banana not found\n";
  }

  // mp.erase("Mango");

  for(auto &p : mp) {
    cout << p.first << " -> " << p.second << endl;
  }
  
  return 0;
}