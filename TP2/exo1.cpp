//
// Created by justine on 22/10/2025.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void read_display_array() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPMONOSEQ.TXT");
    if (!in) {
        cout << "Error opening file" << endl;
        return;
    }
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) in >> a[i];

    cout << "Array size : " << n << endl;
    cout << "Elements in the array : ";
    for (int x : a) cout << x << " ";
    cout << endl;
}

void longest_increasing_subseq() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPMONOSEQ.TXT");
    ofstream out("/home/justine/CLionProjects/3A_TP_Algo/TP2/OUTMONOSEQ.TXT");
    if (!in || !out) {
        cout << "Error opening file" << endl;
        return;
    }

    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) in >> a[i];

    vector<int> L(n, 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                L[i] = max(L[i], L[j] + 1);

    int length = *max_element(L.begin(), L.end());
    cout << "Length = " << length << endl;
    out << length << endl;
}

void complete_max_increasing_subseq() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPMONOSEQ.TXT");
    ofstream out("/home/justine/CLionProjects/3A_TP_Algo/TP2/OUTMONOSEQ.TXT");
    if (!in || !out) {
        cout << "Error opening file" << endl;
        return;
    }

    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) in >> a[i];

    vector<int> L(n, 1), pred(n, -1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j] && L[j] + 1 > L[i]) {
                L[i] = L[j] + 1;
                pred[i] = j;
            }

    int maxLen = 0, last = 0;
    for (int i = 0; i <n; i++)
        if (L[i] > maxLen) {
            maxLen = L[i];
            last = i;
        }

    vector<int> seq;
    for (int i = last; i != -1; i = pred[i]) seq.push_back(i);
    reverse(seq.begin(), seq.end());

    cout << "Length : " << maxLen << endl;
    out << maxLen << endl;
    cout << "Increasing subsequence : ";
    for (int idx : seq) {
        cout << a[idx] << " ";
        out << "a[" << idx + 1 << "] = " << a[idx] << "\n";
    }
    cout << endl;
}

int main() {
    cout << " EXERCICE 1" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Reading the input file and displaying the array :" << endl;
    read_display_array();
    cout << "----------------------------------------------------" << endl;
    cout << "Length of the longest increasing subsequence :" << endl;
    longest_increasing_subseq();
    cout << "----------------------------------------------------" << endl;
    cout << "Complete increasing subsequence max:" << endl;
    complete_max_increasing_subseq();
    cout << "----------------------------------------------------" << endl;
    return 0;
}