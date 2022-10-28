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
vector<vector<int>> zigZagTraversal(struct Node *root);
    
int main()
{
	// construct a tree
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    /*  Output:
	*   1
	*   3 2
	*   4 5 6 7
	*/
	
    vector<vector<int>> ans = zigZagTraversal(root);
    for(auto lvl : ans){
    	for(auto ele : lvl){
    		cout << ele << " ";
    	}
    	cout << endl;
    }
    
    return 0;
}

vector<vector<int>> zigZagTraversal(struct Node *root)
{
    vector<vector<int>> bfs;
    if(root == NULL) return bfs;
    
    bool leftToRight = true;
    queue<Node *> queue;
    queue.push(root);
    
    while(!queue.empty())
    {
        int levelSize = queue.size();
        vector<int> currentLevel(levelSize);
        for(int i = 0; i < levelSize; i++)
        {
            Node *current = queue.front();
            queue.pop();
            
            if(leftToRight)
                currentLevel[i] = current->data;
            else
                currentLevel[levelSize - i - 1] = current->data;

            if(current->left != NULL)
                queue.push(current->left);
            if(current->right != NULL)
                queue.push(current->right);
        }
        
        bfs.push_back(currentLevel);
        leftToRight = !leftToRight;
    }
    return bfs;
}
