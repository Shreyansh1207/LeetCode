/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
void post(Node*node,vector<int>&result){
    if(node== NULL) return;
    for (Node* child : node->children) {
        post(child, result);
    }
    result.push_back(node->val);
}



class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>result;
        post(root,result);
        return result;

    }
};