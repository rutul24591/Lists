class BST{

private:

struct node{
		int key;
		node* left;
		node* right;
	};

	node* root;

// Keeping these 2 functions private will prevent the main method from directly calling it.. Would be called bu only the BST class..

void AddLeafPrivate(int key, node* Ptr);
void PrintInOrderPrivate(node* Ptr);
node* ReturnNodePrivate(int key, node* Ptr);
int FindSmallestPrivate(node* Ptr);  
int FindLargestPrivate(node* Ptr);
void RemoveNodePrivate(int key, node* parent);
void RemoveRootMatch();
void RemoveMatch(node* parent,node* match, bool left);    //match is the node to be deleted. Parent is the parent of the match node that is to be deleted. left is boolean to indicate if match is the left child of the parent.
node* ReturnNode(int key);
node* CreateLeaf(int key);
void RemoveSubtree(node* Ptr);


public:

	BST();  // create constructor prototype
	~BST();
	
	void AddLeaf(int key);
	void PrintInOrder();
	int ReturnRootKey();
	void PrintChildren(int key);   // will use returnNode method
	int FindSmallest();   
	int FindLargest();         // will just find the smallest node in the tree
	void RemoveNode(int key);
};