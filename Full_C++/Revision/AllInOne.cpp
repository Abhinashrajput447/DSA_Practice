#include <iostream>
#include <vector>
#include <string>
using namespace std;

int binToDec(int n) {
  int ans = 0, pow = 1;

  // while(n > 0) {
  //   int ld = n%10;
  //   ans += ld*pow;
  //   pow *= 2;
  //   n /= 10;
  // }

  while(n > 0) {
    if(n % 10 == 1) {
      ans += pow;
    }
    pow *= 2;
    n /= 10;
  }
  return ans;
}

int decToBin(int dec) {
  int ans = 0, pow = 1;

  while(dec > 0) {
    int hf = dec%2;
    ans += hf * pow;
    pow *= 10;
    dec /= 2;
  }
  return ans;
}

void swap(int p, int q) {
  cout << p << " " << q << endl;

  int temp = p;
  p = q;
  q = temp;

  cout << p << " " << q << endl;
}

void print(vector<int> arr) {
  arr[0] = 100;
  cout << &arr << endl;
}

void multile(int& a, int& b, int& c) {
  a *= 2;
  b *= 2;
  c *= 2;
}

double powOfXToN(double x, int n) {
  double ans = 1;
  if(n < 0) {
    x = 1/x;
    n = -n;
  }
  while(n > 0) {
    if(n % 2 != 0) {
      ans *= x;
    }
    x *= x;
    n /= 2;
  }
  return ans;
}

void array(int arr[]) {
  cout << arr[0] << " " << arr[1] << " ";

  int temp = arr[0];
  arr[0] = arr[1];
  arr[1] = temp;

  cout << arr[0] << " " << arr[1] << " ";
}

int waysToSplitArray(vector<int>& nums) {
  int n = nums.size();
  long long leftSum = 0;
  long long totalSum = 0;

  for(int i=0; i<n; i++) {
    totalSum += nums[i];
  }

  int cnt = 0;
  for(int i=0; i<n-1; i++) {
    leftSum += nums[i];

    if(leftSum >= (totalSum - leftSum)) {
      cnt++;
    }
  }
  return cnt;
}

int main() {
  vector<int> nums = {5, 4, 5, -5, 8, 2};
  cout << waysToSplitArray(nums);
  return 0;
}