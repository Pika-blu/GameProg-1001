#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
//insertion sort, better for laarger quantities
//function prototypes
void selectionSort(vector<int>&);
void showArray(vector<int>);

int main()
{
	const int SIZE = 6;
	int values[SIZE] = { 1,6,3,2,5,8 };
	cout << "The unsorted values are\n";
	showArray(values, SIZE);

	selectionSort(values, SIZE);
	cout << "the sorted values are\n";
	showArray(values, SIZE);

	return 0;
}

void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int i = startScan + 1; i < size; i++)
		{
			//compare the current i value to min value
			if(array[i] < minValue)
			{
				minValue = array[i];
				minIndex = i;
			}
		}
		//Preform swap
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
} 
void showArray(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

bubble sort good for sorting small amount of values!
void sortArray(int[], int);
void showArray(const int[], int);

int main()
{
	const int SIZE = 6;
	int values[SIZE] = { 7,2,3,6,8,9 };

	display values
	cout << "The unsorted values are\n";
	showArray(values, SIZE);
	sort and display
	sortArray(values, SIZE);
	cout << "Thr sorted values are\n";
	showArray(values, SIZE);

	return 0;
}

void sortArray(int array[], int size)
{
	int temp;
	bool swap;

	do 
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;

			}
		}

	} while (swap);

}
	 
void showArray(const int array[], int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
int binarySearch(const int[], int, int);
const int SIZE = 20;

int main()
{
	int IDnums[SIZE] = { 101,142,147,189,199,207,222,234,
		                 289,296,310,319,388,394,417,429,
		                 447,521,536,600 };

	int empID, //hold ID to search for
		results; //holds search result 

	cout << "Enter the employee ID wyou wish to search for :";
	cin >> empID;
	 search for ID
	results = binarySearch(IDnums, SIZE, empID);
	
	if (results = -1)
	{
		cout << "This number does not exist in the array.\n";
	}
	else
	{
		cout << "ID " << empID << " was found in the element " << results << " of the array.\n";
	}
	return 0;
}

int binarySearch(const int array[], int size, int value)
{
	int first = 0, //first array element
		last = size - 1, // last array element
		middle, //Midpoind of the search
		position = -1; //Position of the search value
	bool found = false;



}
int searchList(const int[], int, int);

const int SIZE = 5;
int main()
{
	int test[SIZE] = { 12, 75 ,67,90,84 };
	int result;
	result = searchList(test, SIZE, 100);

	if (result == -1)
	{
		cout << " you did not earn 100 points on any test\n";
	}
	else
	{
		cout << "You earned 100 points on test " << (result + 1) << ".\n";
	}
	return 0;
}

int searchList(const int list[], int size, int value)
{
	int index = 0; //subscript to search array
	int position = -1; // used to record position of the search value (if found)
	bool found = false; //Flag to indicate if value was found

	while (!found && index < size)
	{
		if (list[index] == value)
		{
			We found it 
			found = true;
			position = index;

		}
		we didnt find it 
		index++;
	}
	return position;
}
struct CostInfo
{
	double food, medical, license, misc;

}; 

struct PetInfo
{
	string name, type;
	int age;
	
	CostInfo cost;

	PetInfo() //default constructor
	{
		Declaring default info in variables
		name = "unknown";
		type = "unknown";
		age = 0;
		cost.food = cost.medical = cost.license = cost.misc = 0.0;;
		
	}
};


int main()
{
	PetInfo pet;
	Assign values to the pet variables
	pet.name = "Amelia";
	pet.type = "Cat";
	pet.age = 1;

	pet.cost.food = 200.00;
	pet.cost.medical = 200.00;
	pet.cost.license = 5.00;
	
	display info out
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual cost for my " << pet.age << "-year old " << pet.type << " " << pet.name
	   	 << " are $ " << (pet.cost.food + pet.cost.license + pet.cost.medical + pet.cost.misc) << endl;




	return 0;
}