#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Heap {
    vector<int> vec;  //Max heap
public:
    void push(int val) { //T.C => O(longN)
        //Step1 => Push the val
        vec.push_back(val);

        //Fix heap
        int x = vec.size()-1; //Child Index
        int parIdx = (x-1)/2;

        while(parIdx >= 0 && vec[x] > vec[parIdx]) { //T.C => O(longN)
            swap(vec[x], vec[parIdx]);
            x = parIdx;
            parIdx = (x-1)/2;
        }
    }

    void heapify(int i) {  //i = parent index
        if(i >= vec.size()) {
            return;
        }

        int lc = 2*i+1; //lc = left chilf
        int rc = 2*i+2; //rc = right child

        int maxIdx = i;
        if(lc < vec.size() && vec[lc] > vec[maxIdx]) {
            maxIdx = lc;
        }

        if(rc < vec.size() && vec[rc] > vec[maxIdx]) {
            maxIdx = rc;
        }

        swap(vec[i], vec[maxIdx]);

        if(maxIdx != i) { //swapping with child node
            heapify(maxIdx);
        } 
    }


    void pop() {
        //Step1 => swap first ind to last idx
        swap(vec[0], vec[vec.size()-1]);

        //step2 => delete last idx
        vec.pop_back();

        //step3
        heapify(0);  //O(longN)
    }

    int top() {
        return vec[0]; //Highest priority element
    }

    bool empty() {
        return vec.size() == 0;
    }
};


int main() {
    Heap heap;

    heap.push(10);
    heap.push(1);
    heap.push(6);
    heap.push(0);
    heap.push(8);
    heap.push(12);

    while(!heap.empty()) {
        cout << heap.top() << endl;
        heap.pop();
    }
    return 0;
}