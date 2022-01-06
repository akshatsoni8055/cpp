#include <bits/stdc++.h>
using namespace std;

class Graph {
    map<int, list<int>> adj;
    map<int, bool> visited;

public:

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void DFS(int v) {
        visited[v] = true;
        cout << v << " ";

        for (auto i : adj[v])
            if (!visited[i])
                DFS(i);
    }
    void dfsitr(int s) {
    int V = adj.size();
    // Initially mark all vertices as not visited
    vector<bool> visited(V, false);

    // Create a stack for DFS
    stack<int> stack;

    // Push the current source node.
    stack.push(s);

    while (!stack.empty()) {
        // Pop a vertex from stack and print it
        int s = stack.top();
        stack.pop();

        // Stack may contain same vertex twice. So
        // we need to print the popped item only
        // if it is not visited.
        if (!visited[s]) {
            cout << s << " ";
            visited[s] = true;
        }

        // Get all adjacent vertices of the popped vertex s
        // If a adjacent has not been visited, then push it
        // to the stack.
        for (auto i : adj[s])
            if (!visited[i])
                stack.push(i);
    }
}

    void BFS(int s) {
        map<int, bool> vis;
        list<int> queue;

        // Mark the current node as visited and enqueue it
        vis[s] = true;
        queue.push_back(s);

        while (!queue.empty()) {
            // Dequeue a vertex from queue and print it
            s = queue.front();
            cout << s << " ";
            queue.pop_front();

            // Get all adjacent vertices of the dequeued
            // vertex s. If a adjacent has not been visited,
            // then mark it visited and enqueue it
            for (auto i : adj[s])
                if (!vis[i]) {
                    vis[i] = true;
                    queue.push_back(i);
                }
        }
    }
};

// Driver code
int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
        << "(starting from vertex 2) \n";
    g.BFS(2);
    cout << endl;
    g.DFS(2);
    cout << endl;
    g.dfsitr(2);

    return 0;
}