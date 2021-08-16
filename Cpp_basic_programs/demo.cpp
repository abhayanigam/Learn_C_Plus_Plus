// Some Functions of Binary tree.

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
    
    node(int value){
        data = value;
        left = right = NULL;
    }
};

// InOrder Traversal.
void inOrder(node * root){
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

node * CreatNode(int value){
    node * n = new node(value);
    return n;
}

node * insert(node * root, int value){
    if (root == NULL) {
        return CreatNode(value);
    }
    else if (value < root->data) {
        root->left =  insert(root->left, value);
    }
    else if (value > root->data){
        root->right = insert(root->right, value);
    }
    return root;
}

node * Min_Value(node * root){
    node * current = root;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}

node * deleteNode(node *root, int value){
    if (root == NULL) {
        return root;
    }
    else if(value < root ->data){
        root->left = deleteNode(root->left, value);
    }
    else if(value > root ->data){
        root->right = deleteNode(root->right, value);
    }
    else{
        if (root->left == NULL) {
            node * ptr = root->right;
            free(root);
            return ptr;
        }
        else if (root->right == NULL){
            node * ptr = root->left;
            free(root);
            return ptr;
        }
        node * ptr = Min_Value(root->right);
        root->data = ptr->data;
        root->right = deleteNode(root->right, ptr->data);
    }
    return root;
}

int size(node * root){
    if (root == NULL) {
        return 0;
    }
    return (size(root->left)+size(root->right) + 1);
}

// Finding depth of the tree.
int maxDepth(node * root){
    if (root == NULL) {
        return 0;
    }
    else{
        int ldepth = maxDepth(root->left);
        int rdepth = maxDepth(root->right);
        
        if (ldepth > rdepth) {
            return ldepth+1;
        }else{
            return rdepth+1;
        }
    }
}

void mirror(node * root){
    if (root == NULL) {
        return;
    }
    else{
        node * temp;
        mirror(root->left);
        mirror(root->right);
        
        // Swap the pointer in this node
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

void doubleTree(node * root){
    if (root == NULL) {
        return;
    }
    else{
        node * temp;
        doubleTree(root->left);
        doubleTree(root->right);
        
        // duplicate this node to its left
        temp = root->left;
        root->left = new node(root->data);
        root->left->left = temp;
    }
}

int main()
{
    // 1. Call new Node() three times
    node * root = new node(2);
    node * lchild = new node(1);
    node * rchild = new node(3);
    
    root->left = lchild;
    root->right = rchild;
    
    inOrder(root);
    cout << endl;
    
    //2. call new node() three times, and use only one local variable
    node * root1 = new node(2);
    root1->left = new node(1);
    root1->right = new node(3);
        
    inOrder(root1);
    cout << endl;
    
    // 3. Build 123 by calling insert() three times. Note that the '2' must be inserted first.
    node * root2 = NULL;
    root2 = insert(root2, 2);
    insert(root2, 1);
    insert(root2, 3);
    insert(root2, 4);
    insert(root2, 5);
    
    inOrder(root2);
    cout << endl;
    
    cout << "After deleting a node :"<<endl;
    root = deleteNode(root2, 5);
    
    inOrder(root2);
    cout << endl;
    
    cout << "Size of the Tree is : " << size(root2) << endl;
    
    cout << "Max Depth is : " << maxDepth(root2) << endl;
    
    cout << "Printing Mirror Image of the Tree." << endl;
    
    mirror(root2);
    
    inOrder(root2);
    cout << endl;
    
    cout << "duplicate this node to its left" << endl;
    doubleTree(root2);
    
    inOrder(root2);
    cout << endl;
}
