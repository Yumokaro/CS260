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
    int V;
    list<pair<int,int>> *adjacency_list;
public:
    //Graph (int V);
    // Constructor with parameters

    Graph (int V) {
        this->V = V;
        adjacency_list = new list<pair<int, int>> [V];
    }

    // Matrix [u][v]
    void add_edge(int u, int v, int w);
    void dijkstra(int source);
};
/*
Graph::Graph(int V) {
    this->V = V;
    adjacency_list = new list<pair<int, int>> [V];
}
*/
void Graph::add_edge(int u, int v, int w) {
    // Send both to end of line, then make a union using ints for vertex and weight
    adjacency_list[u].push_back(make_pair(v, w));
    adjacency_list[v].push_back(make_pair(u, w));
}

void Graph::dijkstra(int source) {
    // Set to allow ordering
    set<pair<int,int>> setds;
    vector<int> dist(V, initial_distance);
    setds.insert(make_pair(0,source));
    dist[source] = 0;

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
}

#endif //CS260_GRAPH_H
