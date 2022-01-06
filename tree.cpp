#include <bits/stdc++.h>
using namespace std;

template <class X> class Node {
private:
    X data;
    Node* left = NULL;
    Node* right = NULL;
    Node(X data) {
        this->data = data;
    }
};

template <class X> class Tree {
private:
    Node* root = NULL;

    Tree(X data) {
        this->root->data = data;
    }

    Node* insert(X el) {
        if (el == NULL) {
            return;
        }

        Node* root = new Node(el);
        root->left = insert(NULL);
        root->right = insert(NULL);

        return root;
    }
    void inorder(Node* root) {

    }
    void postorder(Node* root) {

    }
    void levelorder(Node* root) {

    }
    int height (Node * root) {
        if (root -> data == NULL) return 0;
        int left = height(root -> left);
        int right = height(root -> right);
        return max(left, right) + 1;
    }
};


int main() {

    return 0;
}