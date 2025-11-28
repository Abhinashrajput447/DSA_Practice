#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now();

    int n;
    cin >> n;

    // for(int i=1; i<=n; i++) {
    //   if(i % 3 == 0 && i % 5 == 0) {
    //     // cout << "fizzBUzz" << endl;
    //   }else if(i % 3 == 0) {
    //     // cout << "fizz" << endl;
    //   }else if(i % 5 == 0) {
    //     // cout << "Buzz" << endl;
    //   }else{
    //     // cout << i << endl;
    //   }
    // }
    // int n;
    // cin >> n;

    int c3 = 0, c5 = 0;

    for (int i = 1; i <= n; i++)
    {
        c3++;
        c5++;

        if (c3 == 3 && c5 == 5)
        {
            // cout << "fizzbuzz" << endl;
            c3 = 0;
            c5 = 0;
        }
        else if (c5 == 5)
        {
            // cout << "buzz" << endl;
            c5 = 0;
        }
        else if (c3 == 3)
        {
            // cout << "fizz" << endl;
            c3 = 0;
        }
        else
        {
            // cout << i << endl;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    cout << "\nTime taken: " << elapsed.count() << " seconds\n";

    return 0;
}
