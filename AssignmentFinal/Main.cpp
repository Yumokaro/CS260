/*
 *
 * Used:
 * https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-set-in-stl/?ref=lbp
 *
 */

// Master STL
//#include <bits/stdc++.h>

// STLs
#include <iostream>
#include <list>
#include <vector>
#include <utility>
#include <string>
#include <set>
#include "Graph.h"

using namespace std;


int main () {
    //cout << "hay" << endl;

    int number_of_vertices = 12;
    Graph G(number_of_vertices);

    G.add_edge(0, 1, 3);
    G.add_edge(0, 2, 5);
    G.add_edge(1,2,1);
    G.add_edge(1,5,12);
    G.add_edge(2,3,4);
    G.add_edge(3,4,4);
    G.add_edge(3,6,1);
    G.add_edge(4,5,1);
    G.add_edge(6,7,3);
    G.add_edge(6,11,3);
    G.add_edge(7,8,2);
    G.add_edge(7,9,1);
    G.add_edge(8,10,2);
    G.add_edge(9,10,5);

    int acquire_source;
    cout << "There are [12] Vertices - Enter 0 through 11 as a starting point: ";
    // Set me as the source!!
    cin >> acquire_source;
    G.dijkstra(acquire_source);

    return 0;
}