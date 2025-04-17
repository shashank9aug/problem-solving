//print the graph

#include <bits/stdc++.h>
using namespace std;


void printGraph(vector<vector<int>>adjacenyMatrix){
    //print the graph -> all places in matrix where value == 1 -> will have node between ith and jth index of matrix.
    for(int i=1;i<=4;i++){
        cout<<"Node: "<<i<<" , Neighbour: ";
        for(int j=1;j<=4;j++){
            if(adjacenyMatrix[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
/*
Node: 1 , Neighbour: 2 3 
Node: 2 , Neighbour: 1 3 4 
Node: 3 , Neighbour: 1 2 4 
Node: 4 , Neighbour: 2 3 
*/ 

int main(){
    vector<vector<int>>edgeList = {{1,2}, {2,3}, {3,4}, {4,2}, {1,3}};

    // 1-2, 2-3, 3-4, 4-2, 1-3

    int n = 5; //size of addjacency list 

    //matrix whose 0,0 index will not be used so, calculation will work from 1,1
    vector<vector<int>>adjacenyMatrix(5,vector<int>(5,0));

    for(int i=0;i<edgeList.size();i++){
        //nodes of a, b;
        int a = edgeList[i][0], b = edgeList[i][1];

        adjacenyMatrix[a][b] = 1;
        adjacenyMatrix[b][a] = 1;
    }
    printGraph(adjacenyMatrix);

    return 0;
}