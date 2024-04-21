#include <iostream>

using namespace std;

class HotDogStand {
public:
	HotDogStand(int id, int initialSales);

	void JustSold();

	int GetHotDogsSold() const;

	static int GetTotalHotDogsSold();

private:
	int standID, hotDogsSold;
	static int totalHotDogsSold;
};

int HotDogStand::totalHotDogsSold = 0;

int main() {
	HotDogStand stand1(1, 0);        //Create three hot dog stands
	HotDogStand stand2(2, 0);
	HotDogStand stand3(3, 0);

	stand1.JustSold();               //Simulate sales1
	stand1.JustSold();
	stand2.JustSold();

	cout << "Hot dogs sold by stand 1 is " << stand1.GetHotDogsSold() << endl;              //Display individual sales
	cout << "Hot dogs sold by stand 2 is " << stand2.GetHotDogsSold() << endl;
	cout << "Hot dogs sold by stand 3 is " << stand3.GetHotDogsSold() << endl;
	cout << "Total hot dogs sold by all stands is " << HotDogStand::GetTotalHotDogsSold();  //Display total sales

	system("pause");
	return 0;
}

HotDogStand::HotDogStand(int id, int initialSales) : standID(id), hotDogsSold(initialSales) {}     //Constructor

void HotDogStand::JustSold() {                      //Function to increment hot dogs sold
	hotDogsSold++;
	totalHotDogsSold++;
}

int HotDogStand::GetHotDogsSold() const {           //Function to get hot dogs sold by this stand
	return hotDogsSold;
}

int HotDogStand::GetTotalHotDogsSold() {            //Static function to get total hot dogs sold by all stands
	return totalHotDogsSold;
}