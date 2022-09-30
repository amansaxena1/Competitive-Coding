// C++ program to find single source shortest paths for Directed Acyclic Graphs
#include<iostream>
#include <bits/stdc++.h>
#define INF INT_MAX
#define ll long long int
using namespace std;
vector<int> vect;
// Graph is represented using adjacency list. Every node of adjacency list
// contains vertex number of the vertex to which edge connects. It also
// contains weight of the edge
class AdjListNode
{
	int v;
	int weight;
public:
	AdjListNode(int _v, int _w) { v = _v; weight = _w;}
	int getV()	 { return v; }
	int getWeight() { return weight; }
};

// Class to represent a graph using adjacency list representation
class Graph
{
	int V; // No. of vertices'

	// Pointer to an array containing adjacency lists
	list<AdjListNode> *adj;

	// A function used by shortestPath
	void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
	Graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int u, int v, int weight);

	// Finds shortest paths from given source vertex
	void shortestPath(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<AdjListNode>[V];
}

void Graph::addEdge(int u, int v, int weight)
{
	AdjListNode node(v, weight);
	adj[u].push_back(node); // Add v to u's list
}

// A recursive function used by shortestPath. See below link for details
// https://www.geeksforgeeks.org/topological-sorting/
void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack)
{
	// Mark the current node as visited
	visited[v] = true;

	// Recur for all the vertices adjacent to this vertex
	list<AdjListNode>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		AdjListNode node = *i;
		if (!visited[node.getV()])
			topologicalSortUtil(node.getV(), visited, Stack);
	}

	// Push current vertex to stack which stores topological sort
	Stack.push(v);
}

// The function to find shortest paths from given vertex. It uses recursive
// topologicalSortUtil() to get topological sorting of given graph.
void Graph::shortestPath(int s)
{
	stack<int> Stack;
	int dist[V];

	// Mark all the vertices as not visited
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function to store Topological Sort
	// starting from all vertices one by one
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			topologicalSortUtil(i, visited, Stack);

	for (int i = 0; i < V; i++)
		dist[i] = INF;
	dist[s] = 0;

	while (Stack.empty() == false)
	{

		int u = Stack.top();
		Stack.pop();
		list<AdjListNode>::iterator i;
		if (dist[u] != INF)
		{
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
			if (dist[i->getV()] > dist[u] + i->getWeight())
			{
			    dist[i->getV()] = dist[u] + i->getWeight();
			    if(i->getV() == V-1)
			        vect.push_back(dist[i->getV()]);
			}
		}
	}
	sort(vect.begin(),vect.end());
	vect[vect.size()-1] = floor(vect[vect.size()-1]/2);
	ll sum = 0;
	for(ll i = 0 ; i < vect.size() ; i++)
	{
	    sum += vect[i];   
	}
    reverse(vect.begin(),vect.end());
    for (int i = 0;i<vect.size();i++)
    {
        if(i-1==-1){
            continue;
        }
        vect[i] = vect[i] - vect[i-1];
        
    }
}

int main()
{
	ll V,m;
	cin>>V>>m;
	Graph g(V);
	while(m--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
	    g.addEdge(a-1, b-1, c);
	}

	int s = 0;
	g.shortestPath(s);
    sort(vect.begin(),vect.end());
    vect[vect.size() - 1] / 2;
    ll sum = accumulate(vect.begin(),vect.end(),0) - vect[vect.size() - 1] + vect[vect.size() - 1] / 2;
    cout << sum << "\n";
    return 0;
}