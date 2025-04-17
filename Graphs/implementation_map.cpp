//print the graph

#include <bits/stdc++.h>
using namespace std;


void printGraph(unordered_map<int, vector<int>>graph){
    //print the graph -> all places in matrix where value == 1 -> will have node between ith and jth index of matrix.
    for(auto x:graph){
        cout<<"Node: "<<x.first<<" , Neighbour: ";
        for(int node:x.second){
            cout<<node<<" ";
        }
        cout<<endl;
    }
}
/*
Node: 4 , Neighbour: 3 2 
Node: 3 , Neighbour: 2 4 1 
Node: 2 , Neighbour: 1 3 4 
Node: 1 , Neighbour: 2 3 
*/

int main(){
    vector<vector<int>>edgeList = {{1,2}, {2,3}, {3,4}, {4,2}, {1,3}};

    // 1-2, 2-3, 3-4, 4-2, 1-3

    int n = 5; //size of addjacency list 

    //matrix whose 0,0 index will not be used so, calculation will work from 1,1
    // vector<vector<int>>adjacenyMatrix(5,vector<int>(5,0));
    unordered_map<int, vector<int>>graph;
    for(int i=0;i<edgeList.size();i++){
        //nodes of a, b;
        int a = edgeList[i][0], b = edgeList[i][1];

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    printGraph(graph);

    return 0;
}