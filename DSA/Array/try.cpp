#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int magicalTree(int n, int m, vector<vector<int>>& edges) {
    // Function to check if there is an alternate path between start and end excluding excluded_match
    auto hasAlternatePath = [](const unordered_set<int>& graph[], int start, int end, int excluded_match) -> bool {
        unordered_set<int> visited;
        vector<int> stack = {start};

        while (!stack.empty()) {
            int current = stack.back();
            stack.pop_back();
            visited.insert(current);

            for (int neighbor : graph[current]) {
                if (neighbor == end && excluded_match != current && excluded_match != neighbor) {
                    return false;
                }
                if (visited.find(neighbor) == visited.end()) {
                    stack.push_back(neighbor);
                }
            }
        }

        return true;
    };

    // Function to count usable matches
    auto countUsableMatches = [&](const unordered_set<int>& graph[], const vector<vector<int>>& matches, int excluded_match) -> int {
        int count = 0;
        for (const auto& match : matches) {
            if (hasAlternatePath(graph, match[0], match[1], excluded_match)) {
                count++;
            }
        }
        return count;
    };

    // Build the initial graph
    unordered_set<int> graph[n + 1];
    for (const auto& edge : edges) {
        graph[edge[0]].insert(edge[1]);
        graph[edge[1]].insert(edge[0]);
    }

    // Initial matches
    vector<vector<int>> initial_matches = edges;
    int initial_usable_matches = countUsableMatches(graph, initial_matches, -1);

    // Check the effect of scheduling an additional match
    for (const auto& match : initial_matches) {
        unordered_set<int> updated_graph[n + 1];
        for (int i = 1; i <= n; ++i) {
            updated_graph[i] = graph[i];
        }
        updated_graph[match[0]].insert(match[1]);
        updated_graph[match[1]].insert(match[0]);

        int updated_usable_matches = countUsableMatches(updated_graph, initial_matches, match[0]);

        if (updated_usable_matches == 0) {
            return 0;
        }
    }

    return initial_usable_matches;
}

int main() {
    // Example usage
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges(m, vector<int>(2));
        for (int i = 0; i < m; ++i) {
            cin >> edges[i][0] >> edges[i][1];
        }
        int result = magicalTree(n, m, edges);
        cout << result << endl;
    }

    return 0;
}
