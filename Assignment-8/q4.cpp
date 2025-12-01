#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data) {
        this->data = data;  
        left = right = NULL;
    }
};

void inorder(Node* root, vector<int>& answer) {   
    if (root == NULL) return;

    inorder(root->left, answer);
    answer.push_back(root->data);
    inorder(root->right, answer);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(9);
    root->right->right = new Node(25);

    vector<int> helper;
    inorder(root, helper); 

    if (is_sorted(helper.begin(), helper.end()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
