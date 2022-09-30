#include <iostream>
#include<bits/stdc++.h>
#define llint long long int
using namespace std;



// void dfs(vector<vector<int>>& graph, vector<int> path, int start, int end){
    
//     path.push_back(start);  
    
//     if(start == end)
//     {
//         ans.push_back(path);
//         return;
//     }
    
//     for(auto i: graph[start])
//         dfs(graph, path, i, end);
   
// }
// vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    
//     // int n = graph.size();
//     vector<int> path;
//     dfs(graph, path, 0, n-1);
    
//     return ans;
    
// }

// bool bfs(vector<vector<llint>>adj, llint s, llint d){
//     llint n = adj.size();
//     vector <llint> vis(n+1, 0);
//     vector <llint> result;
//     bool ans = false;
//     if(!vis[s]){
//         queue<llint> q;
//         q.push(s);
//         vis[s] = 1;
//         while(q.size()){
//             for (llint j = 0; j < adj[q.front()].size(); j++){
//                 if(!vis[adj[q.front()][j]]) {
//                     q.push(adj[q.front()][j]);
//                     vis[adj[q.front()][j]] = 1;
//                 }
//             }
//             if(q.front() == b) return true;
//             q.pop();
            
//         }
//     }
//     return ans;
// }

vector<vector<int>> ab;
// void printpath(vector<int>& path)
// {
//     ab.push_back(path);
// }

int isNotVisited(int x, vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i] == x)
            return 0;
    return 1;
}

void findpaths(vector<vector<llint> >&g, int src, int dst, int v){
    // create a queue which stores
    // the paths
    queue<vector<int> > q;
 
    // path vector to store the current path
    vector<int> path;
    path.push_back(src);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
 
        // if last vertex is the desired destination
        // then print the path
        if (last == dst) ab.push_back(path);       
 
        for (int i = 0; i < g[last].size(); i++) {
            if (isNotVisited(g[last][i], path)) {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}

int main() {
	llint n;
	cin>> n;
	map<llint,llint>mp;
	for(llint i=1;i<=n;i++){
		llint a;
		cin>>a;
		mp[a] = i;
	}
	vector<vector<llint>>adj(n+1, vector<llint>(n+1,0));
	vector<vector<llint>>temp(n+1, vector<llint>(n+1,0));

	llint e;
	cin>> e;
	for(llint i=0;i<e;i++){
		llint a, b;
		cin >> a >> b;
		adj[mp[a]][mp[b]] = 1;
        temp[mp[b]][mp[a]] = 1;
	}

    for(auto i:mp){
        cout << i.first << " " << i.second << "\n";
    }
    cout<<"\n";

    for (llint i = 0; i<adj.size(); i++)
    {
        cout << i << " - ";
        for (llint j = 0;j<adj[i].size();j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (llint i = 0; i<temp.size(); i++)
    {
        cout << i << " - ";
        for (llint j = 0;j<temp[i].size();j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << "\n";
    }

    llint a, b;
    cin >> a>> b;
    cout<<mp[a]<<" "<<mp[b]<<"\n";

    vector<llint> ans;
    


    
    
    for (llint i = 0; i<adj[mp[b]].size(); i++){
        if(adj[i][mp[b]] == 1){
            findpaths(temp, i, mp[a], n);
        }
    }



    cout << "\n";
    for (llint i = 0;i<ab.size(); i++){
        for (llint j = 0; j < ab[i].size(); j++)
        {
            cout<<ab[i][j]<<" ";
        }
        cout<<"\n";
        
    }


}