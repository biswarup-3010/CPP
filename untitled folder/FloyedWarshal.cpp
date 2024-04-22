//Floyed Warsall Algorithm

#include<iostream>
using namespace std;
int graph[10][10];
void FW(int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j]>(graph[i][k]+graph[k][j])){
                    graph[i][j] = graph[i][k]+graph[k][j];
                }
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter the graph in matrix form :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    FW(n);
    for(int i=0;i<n;i++){
            for(int k=0;k<n;k++) cout<<".--.";
            cout<<endl;
            for (int j = 0; j < n; j++){    
                if(graph[i][j]==0) cout<<"| 0 ";
                else cout<<"| "<<graph[i][j]<<" ";
            }
            cout<<"|"<<endl;
        }
        for(int k=0;k<n;k++) cout<<"'--'";
        cout<<endl;
    return 0;
}



