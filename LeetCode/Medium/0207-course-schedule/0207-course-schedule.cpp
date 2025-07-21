class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        int count = 0;
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }

        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                indegree[adj[i][j]]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (q.size() > 0) {
            int temp = q.front();
            q.pop();
            count++;

            for (int j = 0; j < adj[temp].size(); j++) {
                int neighbor = adj[temp][j];
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        return count == V;
    }
};