#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node *left, *right;
    Node(int val = 0): data(val), left(nullptr), right(nullptr) {}
};
class BinaryTree{
private:
    Node *root;
public:
    BinaryTree() : root(nullptr) {}
    void insert(int val) {
        root = insertRec(root,val);
    }
    Node* insertRec(Node *root,int val) {
        if(root == nullptr) {
            Node* newNode = new Node(val);
            return newNode;
        }
        if(val < root->data) root->left = insertRec(root->left,val);
        else root->right = insertRec(root->right, val);

        return root;
    }

    void traverse(Node* root) {
        if(root == nullptr) return;

        traverse(root->left);
        cout<<root->data<<" ";
        traverse(root->right);
    }
    void display() {
        traverse(root);
    }
};
int main() {
    BinaryTree T;
    T.insert(50);
    T.insert(6);
    T.insert(59);
    T.insert(33);
    T.insert(52);
    T.insert(11);
    T.insert(22);
    T.insert(3);

    T.display();

    return 0;
}