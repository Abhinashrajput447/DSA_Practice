#include <iostream>
#include <vector>
#include <string>
using namespace std;

int tilingProblem(int n) { //2 x n
  if(n == 0 || n == 1) return 1;
  
  //vertical
  // int ans1 = tilingProblem(n-1); // 2 x (n-1)

  //Horozontal
  // int ans2 = tilingProblem(n-2); // 2 x (n-2)

  return tilingProblem(n-1)+tilingProblem(n-2);
}

void removeDuplicate(string str, string ans, int i, int map[26]) {

  if(i == str.size()) {
    cout << ans << endl;
    return;
  }
  
  int mapIdx = (int)(str[i] - 'a');

  if(map[mapIdx]) {
    removeDuplicate(str, ans, i+1, map);
  }else {
    map[mapIdx] = true;
    removeDuplicate(str, ans+str[i], i+1, map);
  }
} 

int main() {
  string str = "appnnacollege";
  string ans = "";
  int map[26] = {false};
  removeDuplicate(str, ans, 0, map);
  return 0;
}