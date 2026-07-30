#include <iostream>
#include <vector>
using namespace std;

// Tree Node Definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};



// Insert function to build BST
TreeNode* insert(TreeNode* root, int val) {
    if(root == NULL) {
        return new TreeNode(val);
    }

    if(val < root->val) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }

    return root;
}



// Morris Inorder Traversal
vector<int> inorderTraversal(TreeNode* root) {

    vector<int> ans;
    TreeNode* curr = root;
    TreeNode* pred;

    while(curr != NULL) {

        if(curr->left != NULL) {

            pred = curr->left;

            while(pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }

            // LINK
            if(pred->right == NULL) {
                pred->right = curr;
                curr = curr->left;
            }

            // UNLINK
            else {
                pred->right = NULL;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }

        else {
            ans.push_back(curr->val);
            curr = curr->right;
        }
    }

    return ans;
}

int main() {

    TreeNode* root = NULL;

    // Creating BST
    root = insert(root, 4);
    insert(root, 2);
    insert(root, 6);
    insert(root, 1);
    insert(root, 3);
    insert(root, 5);
    insert(root, 7);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal using Morris Traversal:\n";

    for(int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}