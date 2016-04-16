
class hashtable{

public:
	hashtable();			// contructor
	int Hash(string key);
	void AddItem(string name, string drink);
	int NumberOfItemsInIndex(int index); 
	void PrintTable(); // To find the number of items in that particular index 
	void PrintItemsInIndex(int index);
	void FindDrink(string name);




private:
	static const int tableSize = 49;  // declaring it in the class and using it anywhere

	struct item{
		string name;
		string drink;
		item* next; 
	};

	item* HashTable[tableSize];
};
