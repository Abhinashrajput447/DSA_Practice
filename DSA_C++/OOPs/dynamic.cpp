#include <iostream>
using namespace std;

class Cricketer
{
public:
  string name;
  int runs;
  float avg;

  Cricketer(string name, int runs, float avg)
  {
    this->name = name;
    this->runs = runs;
    this->avg = avg;
  }
};

int main()
{
  Cricketer c1("Abhinash", 3000, 30.4);
  Cricketer *c2 = new Cricketer("Virat Kohli", 3000, 30.4);

  // cout << c1.name;

  // int* ptr = new int(179);  // dynamic allocation using address
  // cout << *ptr;

  // int* ptr = new int[10];
  // cout << *ptr;

  cout << (*c2).name << " " << (*c2).runs << endl;

  return 0;
}