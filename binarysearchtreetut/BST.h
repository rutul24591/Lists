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

public:

	BST();  // create constructor prototype

	node* CreateLeaf(int key);
	void AddLeaf(int key);
	void PrintInOrder();

};