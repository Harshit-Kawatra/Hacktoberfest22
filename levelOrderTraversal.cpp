#include<iostream>
#include<algorithm>
#include<vector> 
#include<queue>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data) { 
        this->data = data; 
        left = right = NULL; 
    }
};

struct Node *root = NULL;

vector<vector<int>> levelOrderTraverse(struct Node *root) 
{
    vector<vector<int>> levels;
    
    if(root == NULL){
    	// if there is no root node return no levelss
    	return levels;
    }
    
    queue<Node*> queue;
    queue.push(root);
    
    while(!queue.empty())
    {
        int currlevelSize = queue.size();
        vector<int> currentLevel;
        
        for(int i=0;i<currlevelSize;++i)
        {
            Node *present = queue.front();
            queue.pop();
            currentLevel.push_back(present->data);
            if(present->left != NULL)
            	queue.push(present->left);
            if(present->right != NULL)
                queue.push(present->right);
        }
        levels.push_back(currentLevel);
    }
    return levels;
}
    
int main() {
	// sample tree
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // calling function
    vector<vector<int>> ans = levelOrderTraverse(root);
    // printing level order traversal
    
    /* output: 
     * 1
     * 2 3
     * 4 5 6 7
     */
    
    for(auto level : ans) {
        for(auto num : level) {
            cout << num << " ";
        }
        cout << endl;
    }
}

