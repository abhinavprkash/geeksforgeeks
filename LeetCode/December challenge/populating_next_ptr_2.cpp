/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution 
{
    vector<Node*> My_array;
    
    void Link(Node * root, const int & iLevel)
    {
        
        if(My_array.size() < iLevel) 
        {
            My_array.push_back(root);
        }
        else if (My_array.size() >= iLevel)
        {
            Node * cur = My_array[iLevel-1];
            if(cur)
            {
                cur->next = root;
                My_array[iLevel -1] = root;
            }
        }
        
        if(root->left)
        {
            Link(root->left, iLevel +1);
        }
        
        if(root->right)
        {
            Link(root->right, iLevel +1);
        }
        
    }
    
public:
    Node* connect(Node* root) 
    {
        
        if (root)
        {
            Link(root, 1);            
        }

        return root;
    }
};