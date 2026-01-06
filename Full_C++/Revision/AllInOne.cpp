#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

int sqrt(int n) {
  int st = 0, end = n;

  int ans = -1;
  while(st <= end) {
    int mid = st+(end-st)/2;

    if(mid*mid <= n) {
      ans = mid;
      st = mid+1;
    }else{
      end = mid-1;
    }
  }
  return ans;
}

bool sumOfSqureNum(int n) {
  int a = 0, b = sqrt(n);

  while(a <= b) {
    int sum = a*a + b*b;

    if(sum == n) {
      return true;
    }else if(sum < n) {
      a++;
    }else{
      b--;
    }
  }
  return false;
}

void moveZero(vector<int>& nums) {
  int n = nums.size();
  vector<int> v;
  // vector<int> ans;
  int cnt = 0;

  for(int i=0; i<n; i++) {
    if(nums[i] == 0) {
      cnt++;
      v.push_back(nums[i]);
    }
  }

  for(int i=0; i<n; i++) {
    if(nums[i] != 0) {
      v.push_back(nums[i]);
    }
  }

  // reverse(nums.begin(), nums+k);
  for(int i=0; i<v.size(); i++) {
    // ans.push_back(v[i]);
  }

  for(int i=v.size()-1; i>=0; i--) {
    cout << v[i] << " ";
  }
}

void sellSOrt(vector<int>& nums) {
  int n = nums.size();
  int mid = n/2;
  for(int i=0; i<n; i++) {
    for(int j=mid; j<n; j++) {
      if(nums[i] > nums[j]) {
        swap(nums[i], nums[j]);
      }
    }
  }
  mid = mid/2;

  for(int i=0; i<n; i++) {
    cout << nums[i] << " ";
  }
} 

int sumOfSpeSqNo(vector<int>& nums) {
  int n = nums.size();
  int ans = 0;
  for(int i=1; i<=n; i++) {
    if(n % i == 0) {
      ans += nums[i-1]*nums[i-1];
      cout << ans << " ";
    }
  }
  return ans;
}

int findMinInRotSorArr(vector<int>& nums) {
  int n = nums.size();
  int minimum = INT32_MAX;
  int st=0, end=n-1;

  while(st <= end) {
    int mid = st+(end-st)/2;
    minimum = min(minimum, nums[mid]);

    // if(nums[mid] >= nums[end]){
    //   st = mid+1;
    // }else{
    //   end = mid-1;
    // }

    if(nums[mid] <= nums[st]) {
      end = mid-1;
    }else{
      st = mid+1;
    }
  }
  return minimum;
}

int searchInRotSorArr(vector<int>& nums, int tar) {
  int n = nums.size();
  int st=0, end=n-1;

  while(st <= end) {
    int mid = st+(end-st)/2;

    if(nums[mid] == tar) return mid;

    if(nums[st] <= nums[mid]) {
      if(nums[st] <= tar && tar <= nums[mid]) {
        end = mid-1;
      }else{
        st = mid+1;
      }
    }else{
      if(nums[end] >= nums[mid]) {
        if(nums[mid] <= tar && tar <= nums[end]) {
          st = mid+1;
        }else{
          end = mid-1;
        }
      }
    }
  }
  return -1;
}


int main() {
  vector<int> nums = {7,8,9,10,10,1,2,3};
  cout << searchInRotSorArr(nums, 11);
  return 0;
}