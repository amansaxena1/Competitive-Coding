#include <bits/stdc++.h>
using namespace std;

// // A binary tree node
// struct Node
// {
// 	int data;
// 	struct Node* left, *right;
// };

// // Utility function to allocate memory for a new node
// struct Node* newNode(int data)
// {
// 	struct Node* node = new(struct Node);
// 	node->data = data;
// 	node->left = node->right = NULL;
// 	return (node);
// }

// int max_gain(struct Node *root, int &res){
// 	if (root==NULL) return 0;
// 	if (!root->left && !root->right) return root->data;
//     int ls = max_gain(root->left, res);
// 	int rs = max_gain(root->right, res);
//     if (root->left && root->right){
// 		res = max(res, ls + rs + root->data);
// 		return max(ls, rs) + root->data;
// 	}
// 	return (!root->left)? rs + root->data:ls + root->data;
// }
// int maxPathSum(TreeNode *root)
// {
// 	int res = INT_MIN;
// 	int val = max_gain(root, res);
// 	if(res == INT_MIN) return val;
	
// 	return res;
// }

// // Driver Code
// int main()
// {
// 	struct Node *root = newNode(9);
// 	root->left = newNode(8);
// 	root->right = newNode(-11);
// 	root->left->left = newNode(-2);
// 	root->left->right = newNode(6);
// 	root->left->left->left = newNode(7);
// 	root->left->left->right = newNode(2);
// 	root->right->left = newNode(1);
// 	root->right->right = newNode(-3);
// 	// root->right->right->right= newNode(0);
// 	// root->right->right->right->left= newNode(4);
// 	// root->right->right->right->right= newNode(-1);
// 	// root->right->right->right->right->left= newNode(10);
// 	cout << "Max pathSum of the given binary tree is "
// 		<< maxPathSum(root);
// 	return 0;
// }



int unboundedKnapsack(int wt[], int val[], int n, int W){
    int dp[W+1];
    memset(dp, 0, sizeof dp);
 
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
 
    return dp[W];
}


int main()
{
    int W = 60;
    int val[] = {60, 100, 120};
    int wt[] = {30,40,50};
    int n = sizeof(val)/sizeof(val[0]);

    cout << unboundedKnapsack(wt, val, n, W);
 
    return 0;
}