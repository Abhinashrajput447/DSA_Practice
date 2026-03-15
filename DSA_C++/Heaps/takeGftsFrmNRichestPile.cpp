#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

void print(vector<int>& gifts) {
    int n = gifts.size();
    for(int i=0; i<n; i++) {
        cout << gifts[i] << " ";
    }
    cout << endl;
}

// Using array 
// T.C => O(n*k) S.C => O(1)
long long pickGifts1(vector<int>& gifts, int k) {
    int n = gifts.size();

    // Pefrom the operation k time
    for(int i = 0; i<k; i++) {
        // INitilize the index of richest pile (maximum element)
        int richestPileIdx = 0;
        
        // Iterate through the array to find the index of the maximum
        // element
        for(int currPileIdx=0; currPileIdx<n; currPileIdx++) {
            // If we found new maximum, update the idx 
            if(gifts[richestPileIdx] < gifts[currPileIdx]) {
                richestPileIdx = currPileIdx;
            }
            print(gifts);
        }

        gifts[richestPileIdx] = sqrt(gifts[richestPileIdx]);
    }

    // Calculate the sum of the remaining gifts in the array
    // long long int numOfRemGifts = accumulate(gifts.begin(), gifts.end(), 0LL);
    long long int numOfRemGifts = 0;
    for(int i=0; i<n; i++) {
        numOfRemGifts += gifts[i];
    }
    return numOfRemGifts;
}

void printHeapEle(priority_queue<int>& heapEle) {
    long long heapEleSum = 0;
    while(!heapEle.empty()) {
        heapEleSum += heapEle.top();
        // cout << heapEle.top() << " <--> " << heapEleSum << endl;
        cout << heapEle.top() << " ";
        heapEle.pop();
    }
}



// using maxHeap(priority_queue)
// T.C => O(n+K*logN) S.C => O(n)
long long pickGifts2(vector<int>& gifts, int k) {
    priority_queue<int> maxHeap(gifts.begin(), gifts.end());

    for(int i=0; i<k; i++) {
        int maxEle = maxHeap.top();
        maxHeap.pop();

        maxHeap.push(sqrt(maxEle));
    }

    long long noOfRemGifts = 0;

    while(!maxHeap.empty()) {
        noOfRemGifts += maxHeap.top();
        maxHeap.pop();
        printHeapEle(maxHeap);
    }

    return noOfRemGifts;
}


// Using upper_bound logic 
// T.C => O(K*logN) S.C => O(n)
long long pickGifts3(vector<int>& gifts, int k) {
    int n = gifts.size();

    // Create a copy vector of gifts and sort it
    vector<int> sortedGifts = gifts;
    sort(sortedGifts.begin(), sortedGifts.end());

    // Perform the operation k times
    for(int i=0; i<k; i++) {
        int maxEle = sortedGifts[n-1];
        sortedGifts.pop_back();

        // upper_bound return the first element greated then
        // sqrt(maxEle)
        auto spotOfSqrt = upper_bound(sortedGifts.begin(), sortedGifts.end(), sqrt(maxEle));
        // print(sortedGifts);
        sortedGifts.emplace(spotOfSqrt, sqrt(maxEle));

        print(sortedGifts);
    }

    int noOfRemGifts = 0;
    for(int ele : sortedGifts) {
        noOfRemGifts += ele;
    }

    return noOfRemGifts;
}

int main() {
    vector<int> gifts = {25,64,9,4,100};
    int n = 4;

    cout << pickGifts2(gifts, n) << endl;
    return 0;
}