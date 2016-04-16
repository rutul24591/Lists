
class hashtable{

public:
	hashtable();			// contructor
	int Hash(string key);
	void AddItem(string name, string drink);
	int NumberOfItemsInIndex(int index);  // To find the number of items in that particular index 

private:
	static const int tableSize = 10;  // declaring it in the class and using it anywhere

	struct item{
		string name;
		string drink;
		item* next; 
	};

	item* HashTable[tableSize];
};
