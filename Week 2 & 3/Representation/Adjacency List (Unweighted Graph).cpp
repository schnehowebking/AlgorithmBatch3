#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

const int N = 1e5+5;
vector<int> adj[N];

int main()
{
    init_code();
    
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
    	int u,v;
    	cin >> u >> v;
    	adj[u].push_back(v);
    	adj[v].push_back(u); // comment out the opposite direction in case of directed graph
    }

    cout << "Printing the adjacency list:\n";
    for(int i=1;i<=n;i++)
    {
    	cout << "List " << i << ": ";
    	for(auto v:adj[i])
    		cout << v << " ";
    	cout << endl;
    }

 	return 0;
    
}
