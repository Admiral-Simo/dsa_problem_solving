class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;

        unordered_map<Node*, Node*> visited;

        queue<Node*> q;

        Node* clone = new Node(node->val);

        visited[node] = clone;

        q.push(node);


        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            for (Node* &neighbor : current->neighbors) {
                if (visited.find(neighbor) == visited.end()) {
                    Node* new_neighbor = new Node(neighbor->val);
                    visited[neighbor] = new_neighbor;
                    q.push(neighbor);
                }


                visited[current]->neighbors.push_back(visited[neighbor]);
            }
        }


        return clone;
    }
};
