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


public:

	BST();  // create constructor prototype

	node* CreateLeaf(int key);
	void AddLeaf(int key);
	void PrintInOrder();
	node* ReturnNode(int key);
	int ReturnRootKey();
	void PrintChildren(int key);   // will use returnNode method
	int FindSmallest();   
	int FindLargest();         // will just find the smallest node in the tree
	void RemoveNode(int key);
};