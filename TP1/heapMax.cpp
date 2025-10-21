//
// Created by justine on 15/10/2025.
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
            if (heap[index] > heap[parent]) {
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
            int largest = index;
            if (left < size && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right;
            }
            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest;
            } else break;
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        up(heap.size() - 1);
    }

    int extract_max() {
        if (heap.empty()) {
            cerr << "heap is empty" << endl;
            return -1;
        }
        int maxValue = heap[0];
        heap[0]=heap.back();
        heap.pop_back();
        down(0);
        return maxValue;
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
    cout<<"\nMax extraction : "<<h.extract_max()<<endl;
    cout<<" After max extraction : \n";
    h.print();
    return 0;
}