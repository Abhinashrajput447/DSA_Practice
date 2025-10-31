#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> marks;
  marks["varsha"] = 99;
  marks["abhi"] = 95;

  unordered_set<string> names;
  names.insert("abhi");
  names.insert("varsha");
  names.insert("ritik");

  cout << "from unordered map : \n";
  for(auto a : marks) {
    cout << a.first << " -> " <<a.second << endl;
  }

  cout << "from unordered set : \n";
  for(auto name : names) {
    cout << name << endl;
  }
  return 0;
}