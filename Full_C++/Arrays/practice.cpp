#include<iostream>
using namespace std;

int main() {
  int n;cin >> n;
  for(int i=1; i<=n; i++) {
      if(15&i == 15) {
      cout << "fizzBuss" << endl;
    }else if(i^3==i) {
      cout << "fizz" << endl;
    }
    else if(i^5==i) {
      cout << "buzz" << endl;
    }
    else{
      cout << i << endl;
    }
  }

  return 0;
}