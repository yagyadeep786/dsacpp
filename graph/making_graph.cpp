#include<iostream>
#include<stack>
#include<queue>
using namespace std;


void printGraph(int graph[][5],int size){

    cout<< "the graph is:"<<endl;

    for(int i=0;i<size;i++){
        cout<<i<<"->";
        for(int j=0;j<size;j++){

            if(graph[i][j] == 1){
                cout<< j<<endl;
            }
        }
    }
}

void dfs(int graph[][5],int size){
    
    stack<int> st;
    st.push(0);
    bool visited[5]= {false};

    cout<< "DFS traversel:-> \n";
    while(!st.empty()){
        int ele= st.top();
        st.pop();
        visited[ele]= true;
        cout<< ele << " ";

        for(auto i:graph[ele]){
            cout<< i;
            if(!visited[i]){
                st.push(i);
            }
        }
    }
}

main(){

    int a,b;
    int graph[5][5]; // adjecenty list;

    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            graph[i][j]=0;
        }
    }
    for(int i=1;i<=6;i++){

        cout<<"Enter the edeg: ";
        cin>>a>>b;

          graph[a][b]= 1;
          graph[b][a]= 1;
    }

    printGraph(graph,5);

    dfs(graph,5);
}