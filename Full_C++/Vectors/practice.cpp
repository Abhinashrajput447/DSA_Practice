#include<iostream>
using namespace  std;

void rectangle(int n, int m) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void holoRectangle(int n, int m) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
      if(i == 1 || j==1 || i==n || j==m) {
        cout << "*";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

void traingle(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void reverseTraingle(int n) {
  for(int i=0; i<n; i++) {
    for(int j=n-1; j>=i; j-- ) {
      cout << "*";
    }
    cout << endl;
  }
}

void leftTraingle(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<n-1-i; j++) {
      cout << " ";
    }
    for(int j=0; j<=i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void reverseLeftTraingle(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<i; j++) {
      cout << " ";
    }
    for(int j=n-1; j>=i; j--) {
      cout << "*";
    }
    cout << "\n";
  }
}

void holoPyramid(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      if(i == 1|| j==1 || i==j||  i==n) {
        cout << "* ";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int n, m;
  cin >>  n >> m;
  holoPyramid(n);
  return 0;
}