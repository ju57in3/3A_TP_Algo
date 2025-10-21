//
// Created by justine on 21/10/2025.
//
#include <iostream>
#include <vector>

using namespace std;

class heapMax {
private:
    vector<int> heap;

    void up(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else break;
        }
    }

    void down(int index) {
        int size = heap.size();
        while (true){
            int left = 2 * index + 1;
            int right = left + 1;
            int smallest = index;
            if (left < size && heap[left] < heap[smallest]) {
                smallest = left;
            }
            if (right < size && heap[right] < heap[smallest]) {
                smallest = right;
            }
            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else break;
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        up(heap.size() - 1);
    }

    int extract_min() {
        if (heap.empty()) {
            cerr << "heap is empty" << endl;
            return -1;
        }
        int minValue = heap[0];
        heap[0]=heap.back();
        heap.pop_back();
        down(0);
        return minValue;
    }

    void print() {
        for (int i : heap) cout << i << " ";
        cout << endl;
    }
};

int main() {
    heapMax h;
    int values[] = {27,12,8,45,17,63,100,5,75,11,90,26,32,188,95};
    for (int v : values) {
        h.insert(v);
        cout<<"After insert "<<v<<":\n";
        h.print();
    }
    cout<<"\nMin extraction : "<<h.extract_min()<<endl;
    cout<<" After min extraction : \n";
    h.print();
    return 0;
}