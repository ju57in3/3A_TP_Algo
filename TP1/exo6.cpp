//
// Created by justine on 15/10/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the longest increasing subsequence and reconstruct it
void longest_increas_subseq(const vector<int>& A) {
    int n = A.size();
    if (n == 0) {
        cout << "Empty" << endl;
        return;
    }
    vector<int> L(n, 1);          // size of longest subsequence ending by i
    vector<int> previous(n, -1);  // indice of previous element in subsequence

    // Step 1 : fill the arrays L and previous
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i] && L[j] + 1 > L[i]) {
                L[i] = L[j] + 1;
                previous[i] = j;       // memorizing indice of previous element of subsequence
            }
        }
    }

    // Step 2 : find i of the biggest value in L
    int L_max = L[0];
    int i_max = 0;
    for (int i = 1; i < n; i++) {
        if (L[i] > L_max) {
            L_max = L[i];
            i_max = i;
        }
    }

    // Step 3 : reconstruct the subsequence going back the indices
    vector<int> sub_seq;
    for (int i = i_max; i != -1; i = previous[i]) {
        sub_seq.push_back(A[i]);
    }
    reverse(sub_seq.begin(), sub_seq.end());

    // Step 4 : Display
    cout << "Longest increasing subsequence : " << L_max << endl;
    cout << "Increasing subsequence : ";
    for (int value : sub_seq)
        cout << value << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter array : ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    longest_increas_subseq(A);
    return 0;
}