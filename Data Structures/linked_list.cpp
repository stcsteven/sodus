#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node
    Node(int value): val(value), next(NULL) {}
};

int main(){
    Node* root = new Node(5);
    cout << root->val << endl;
    root->next = new Node(6);
    cout << root->next->val << endl;
}