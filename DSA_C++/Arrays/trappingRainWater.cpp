#include<iostream>
using namespace std;

int trap(int *height, int n) {
  int leftMax[20000], rightMax[20000];
  leftMax[0] = height[0], rightMax[n-1] = height[n-1];

  for(int i=1; i<n; i++) {
    leftMax[i] = max(leftMax[i-1], height[i-1]) ;
  }
  for(int i=n-2; i>=0; i--) {
    rightMax[i] = max(rightMax[i+1], height[i+1]);
  }

  int waterTraped = 0;
  for(int i=0; i<n; i++) {
    int currWater = min(leftMax[i], rightMax[i]) - height[i];

    if(currWater > 0) {
      waterTraped += currWater;
    }
  }
  return waterTraped;
}

int trap2(int *height , int n) {
  int l = 0, r = n-1;
  int lmax = height[0], rmax = height[n-1];
  int water = 0;
  while(l < r) {
    lmax = max(lmax, height[l]);
    rmax = max(rmax, height[r]);

    if(lmax<rmax) {
      water += lmax - height[l];
      l++;
    }else{
      water += rmax - height[r];
      r--;
    }
  }
  return water;
}

int main() {
  int n = 7;
  int height[n] = {4, 2, 0, 6, 3, 2, 5};

  cout << trap2(height, n);
  return 0;
}