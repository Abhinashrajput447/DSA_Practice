#include<iostream>
#include <vector>
using namespace std;

void print(int *arr, int n) {
  if(n==0) return;
  cout << arr[0] << " ";
  print(arr+1, n-1);
}

int fact(int n) {
  if(n == 0) return 1;
  return n*fact(n-1);
}

void nToOne(int n) {
  if(n == 0) return;
  cout << n <<" ";
  nToOne(n-1);
  // cout << n <<" ";
}

int sum(int n) {
  if(n==1) return 1;
  return n+sum(n-1);
}

int fib(int n) {
  if(n == 0) return 0;
  if(n == 1) return 1;
  
  return fib(n-1)+fib(n-2);
}

bool isSorted(int *arr, int n, int i) {
  if(i == n-1) return true;

  if(arr[i] > arr[i+1]) return false;

  return isSorted(arr, n, i+1);
}

int firstOccurence(vector<int>& arr, int n, int i, int tar) {
  if(i == n) return -1;

  if(arr[i] == tar) {
    return i;
  }

  return firstOccurence(arr, n, i+1, tar);
}

int lastOccurence(vector<int>& arr, int n, int i, int tar) {
  if(i == n) return -1;

  int idx = lastOccurence(arr, n, i+1, tar);
  if(idx == -1) {
    if(arr[i] == tar) {
      return i;
    }
  }
  return idx;
}

double power(double x, int n) {
  if(n == 0) return 1;
  if(x == 0) return 0;
  if(x == 1) return 1;
  // return x*power(x, n-1); // using recursion here 

  double ans = 1;
  long long exp = n;

  if(exp < 0) {
    exp = -exp;
    x = 1/x;
  }
  
  while(exp > 0) {
    // last Bit of the value
    if(exp & 1) {
      ans *= x;
    }
    x = x * x;
    exp >>= 1; // shifting bits
  }
  return ans;
}

double power2(double x, int n) {
  if(n == 0) return 1;

  double hf = n;
  if(hf < 0) {
    hf = -hf;
    x = 1/x;
  }

  double halfPow = power2(x, n/2);
  double halfPowSqure = halfPow * halfPow;

  if(n % 2 != 0) {
    return x * halfPowSqure;
  }

  return halfPowSqure;
}

void binStr(int n, int lastPlace, string ans) {
  if(n == 0) {
    cout << ans << "\n";
    return;
  }

  if(lastPlace) {
    binStr(n-1, 0, ans + '0');
  }else {
    binStr(n-1, 0, ans + '0');
    binStr(n-1, 1, ans + '1');
  }
}

void binStr2(int n, string ans) {
  if(n == 0) {
    cout << ans << "\n";
    return;
  }

  if(ans[ans.size()-1] != '1') {
    binStr2(n-1, ans + '0');
    binStr2(n-1, ans + '1');
  }else{
    binStr2(n-1, ans + '0');
  }

}
int main() {
  string ans = "";
  binStr2(4, ans);
  return 0;
}