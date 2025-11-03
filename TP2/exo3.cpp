//
// Created by justine on 22/10/2025.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>
#include <queue>

using namespace std;

void read_display_graph() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPARBGRAPH.TXT");
    if (!in) {
        cerr << "Error opening file " << endl;
        return;
    }

    int n, m;
    in >> n >> m;
    cout << "Number of vertices : " << n << endl;
    cout << "Number of edges : " << m << endl;

    cout << "List of edges : " << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        in >> u >> v;
        cout << u << " " << v << endl;
    }
}

void adjacency_matrix() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPARBGRAPH.TXT");
    ofstream out("/home/justine/CLionProjects/3A_TP_Algo/TP2/OUTARBGRAPH.TXT");
    if (!in || !out) {
        cerr << "Error opening file" << endl;
        return;
    }

    int n, m;
    in >> n >> m;

    vector<vector<int> > mat(n + 1, vector<int>(n + 1, 0));

    for (int k = 0; k < m; k++) {
        int u, v;
        in >> u >> v;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;
    visited[1] = true;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (mat[u][i] && !visited[i]) {
                visited[i] = true;
                q.push(i);
                cout << u << " " << i << endl;
                out << u << " " << i << endl;
            }
        }
    }
}

void adjacency_list() {
    ifstream in("/home/justine/CLionProjects/3A_TP_Algo/TP2/INPARBGRAPH.TXT");
    ofstream out("/home/justine/CLionProjects/3A_TP_Algo/TP2/OUTARBGRAPH.TXT");
    if (!in || !out) {
        cerr << "Error opening file" << endl;
        return;
    }

    int n, m;
    in >> n >> m;
    vector<list<int>> list(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        in >> u >> v;
        list[u].push_back(v);
        list[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;
    visited[1] = true;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : list[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                cout << u << " " << v << endl;
                out << u << " " << v << endl;
            }
        }
    }
}

int main() {
    cout << "EXERCICE 3" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Reading the file and displaying the graph : " << endl;
    read_display_graph();
    cout << "----------------------------------------------------" << endl;
    cout << "Spanning tree with adjacence matrix : " << endl;
    adjacency_matrix();
    cout << "----------------------------------------------------" << endl;
    cout << "Spanning tree with adjacence list : " << endl;
    adjacency_list();
    cout << "----------------------------------------------------" << endl;
    return 0;
}