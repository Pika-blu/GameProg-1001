#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem
{
private:
	int partNum;
	string description;
	int onHand;
	double price;
public:
	void storeInfo(int p, string d, int oH, double cost); //Prototype 

	int getPartNum() { return partNum; }
	string getDescription() {return description;}
	int getOnHand() { return onHand; }
	double getPrice() { return price; }
};


void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;

}

//fuction prototype for the client program
void storeValues(InventoryItem&);
void showValues(InventoryItem);


int main()
{
	InventoryItem part;
	storeValues(part);
	showValues(part);

	return 0;
}

void storeValues(InventoryItem& item)
{
	//local variables
	int partNum;
	string description;
	int qty;
	double price;

	cout << "Enter date for the new part\n";
	cout << "Part number :";
	cin >> partNum;
	cout << "Description \n";
	cin.get(); //Move past \n left in the input buffer by the last input
	getline(cin, description);
	cout << "Quantity\n";
	cin >> qty;
	cout << "Cost?\n";
	cin >> price;

	item.storeInfo(partNum, description, qty, price);
}

void showValues(InventoryItem item)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Part Number    :" << item.getPartNum() << endl;
	cout << "Description    :" << item.getDescription() << endl;
	cout << "Units on Hand  :" << item.getOnHand() << endl;
	cout << "Price          :$" << item.getPrice() << endl;


}