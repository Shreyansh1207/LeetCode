class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> graph(n);
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        double prob = succProb[i];
        graph[u].emplace_back(v, prob);
        graph[v].emplace_back(u, prob);
    }

    // Max heap (priority queue)
    priority_queue<pair<double, int>> pq;
    vector<double> maxProb(n, 0.0); // Stores the maximum probability to reach each node
    maxProb[start_node] = 1.0;
    pq.emplace(1.0, start_node);

    while (!pq.empty()) {
        auto [prob, node] = pq.top();
        pq.pop();

        // If we reach the end_node, return the probability
        if (node == end_node) {
            return prob;
        }

        // Explore neighbors
        for (auto& [neighbor, edgeProb] : graph[node]) {
            double newProb = prob * edgeProb;
            if (newProb > maxProb[neighbor]) {
                maxProb[neighbor] = newProb;
                pq.emplace(newProb, neighbor);
            }
        }
    }

    // If there's no path to the end_node, return 0
    return 0.0;
    }
};