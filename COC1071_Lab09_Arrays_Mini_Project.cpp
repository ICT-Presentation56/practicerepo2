#include<iostream>
using namespace std;
// 1. inputMarks
void inputMarks(int marks[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout << "Enter Marks:\t";
		cin >> marks[i];
	}
}

// 2. displayMarks
void displayMarks(int marks[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout << marks[i] << "\t";
	}
	cout << endl;
}

void highestMark(int marks[], int size)
{
	int highest = 0;
	for(int i=0; i<size; i++)
	{
		if(marks[i] > highest)
		{
			highest = marks[i];
		}
	}
	cout << "Highest Marks:\t" << highest << endl;
}

void lowestMark(int marks[], int size)
{
	int lowest = 100;
	for(int i=0; i<size; i++)
	{
		if(marks[i] < lowest)
		{
			lowest = marks[i];
		}
	}
	cout << "Lowest Marks:\t" << lowest << endl;
}

void averageMarks(int marks[], int size)
{
	float sum = 0;
	for(int i=0; i<size; i++)
	{
		sum += marks[i];
	}
	cout << "Average Marks:\t" << sum / size << endl;
}

void searchMark(int marks[], int size, int key)
{
	bool flag = false;
	for(int i=0; i<size; i++)
	{
		if(marks[i] == key)
		{
			flag = true;	// found
			break;
		}
	}
	
	if(flag)
		cout << "Marks found ..." << endl;
	else
		cout << "Marks NOT found!!!" << endl;
}

bool updateMark(int marsk[], int size, int key, int newMarks)
{
	bool flag = false;
	for(int i=0; i<size; i++)
	{
		if(marsk[i] == key)
		{
			flag = true;
			marsk[i] = newMarks;
			break;
		}
	}
	if(flag)
		cout << "Marks updated successfully..." << endl;
	else
		cout << "Marks could not updated!!!" << endl;
}
int main()
{
	const int size = 5;
	int array[size] = {65, 89, 90, 34, 58};
//	inputMarks(array, size);
	displayMarks(array, size);
//	highestMark(array, size);
//	lowestMark(array, size);
//	averageMarks(array, size);
//	searchMark(array, size, 89);
	updateMark(array, size, 89, 100);
	cout << endl;
	displayMarks(array, size);
}

