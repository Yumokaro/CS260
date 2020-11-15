#ifndef CS260_GRAPH_H
#define CS260_GRAPH_H

// Master STL
//#include <bits/stdc++.h>

#include <iostream>
#include <list>
#include <vector>
#include <utility>
#include <string>
#include <set>

// 0x3f3f3f3f or 999
#define initial_distance 2000

using namespace std;

class Graph {
private:
    int Vertex;
    list<pair<int,int>> *adjacency_list;
public:
    // Graph (int Vertex);
    // Constructor with parameters

    explicit Graph (int num_verts) {
        this->Vertex = num_verts;
        adjacency_list = new list<pair<int, int>> [num_verts];
    }

    // Matrix [u][v]
    void add_edge(int u, int v, int w);
    void dijkstra(int source);
};

void Graph::add_edge(int u, int v, int w) {
    // Send both to end of line, then make a union using ints for vertex and weight
    adjacency_list[u].emplace_back(v, w);
    adjacency_list[v].emplace_back(u, w);
}

void Graph::dijkstra(int source) {
    // Set to allow ordering
    set<pair<int,int>> setds;
    vector<int> dist(Vertex, initial_distance);
    setds.insert(make_pair(0,source));
    dist[source] = 0;

    // O(n*(n(log n(1))) = n^2 log n  ??
    while (!setds.empty()) {
        pair<int,int> tmp = *(setds.begin());
        setds.erase(setds.begin());

        int u = tmp.second;

        list<pair<int,int>>::iterator i;

        for (i = adjacency_list[u].begin(); i != adjacency_list[u].end(); ++i) {
            int v =(*i).first;
            int weight = (*i).second;

            if (dist[v] > dist[u]) {
                if (dist[v] != initial_distance) {
                    setds.erase(setds.find(make_pair(dist[v], v)));
                }

                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }

    // Print output
    cout << "\n\tVertex |" << " Distance from Source" << endl;
    // O(1(1)) = 1 -- real time
    for (int i = 0; i < Vertex; ++i)

        // O(1) Always run the same.
        if (i < 10 - 1) {
            if (i == source) {
                cout << "\t *** " << i+1 << " | " << dist[i] << endl;
            } else {
                cout << "\t     " << i+1  << " | " << dist[i] << endl;
            }
        } else {
            if (i == source) {
                cout << "\t*** " << i+1 << " | " << dist[i] << endl;
            } else {
                cout << "\t    " << i+1 << " | " << dist[i] << endl;
            }
        }
}

#endif //CS260_GRAPH_H
