#include <iostream>
#include <string>

using namespace std;

class Television {
public:
	Television(string type, double size, string* a);           // Constructor
	Television(const Television& input);                       // Copy Constructor

	string getType() { return displayType; }                   // Accessor
	double getDimension() { return dimension; }
	string* getConnectivity() { return connectivitySupport; }
	int getObject() { return used; }
	
	void setObject(int o) { used = o; }                        // Mutator
	void showData();
private:
	string displayType;
	double dimension;
	string* connectivitySupport;
	int used;
};

int main() {
	int num;
	string type;
	double inch;
	string* connectivity;

	cout << "Enter the number of the televisions>";
	cin >> num;

	connectivity = new string[num];
	
	cout << "Enter your display type>";
	cin >> type;
	cout << "Enter the dimension in inches>";
	cin >> inch;

	for (int i = 0; i < num; i++) {
		cout << "Enter the NO." << i + 1 << " connectivity suport:";
		cin >> connectivity[i];
	}

	Television user(type, inch, connectivity);       // Create the Television object
	user.setObject(num);
	Television copy(user);                           // Create another Television object
	
	cout << "Your data:\n";                          // Display data of the copied object
	copy.showData();

	system("pause");
	return 0;
}

Television::Television(string type, double size, string* a)
	:displayType(type), dimension(size), connectivitySupport(a)
{}

Television::Television(const Television& input)
	: displayType(input.displayType), dimension(input.dimension), used(input.used)
{
	delete[] connectivitySupport;
	connectivitySupport = new string[used];
	for (int i = 0; i < used; i++)
		connectivitySupport[i] = input.connectivitySupport[i];
}

void Television::showData()
{
	cout << "The display type is>" << displayType << endl;
	cout << "The dimension is>" << dimension << endl;
	for (int i = 0; i < used; i++)
		cout << "The NO " << i + 1 << ". ConnectivitySupport is " << connectivitySupport[i] << endl;
}