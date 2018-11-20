/******************************
Main file
Written by: Brett Hirschberger
******************************/
#include "SnowReport.h"

void displayResults(SnowReport *arr, int size);
void sort(SnowReport *arr, int size);
int main() {
	string month;
	int startDate;
	const int SIZE = 7;
	float snowDepth;
	SnowReport snowReport[SIZE];
	cout << "Enter the month the report was in: ";
	cin >> month;
	cout << "Enter the start date: ";
	cin >> startDate;
	//inputs data into object
	for (int i = 0; i < 7; i++) {
		cout << "Enter the snow hight for " << month << " " << startDate + i << ": ";
		cin >> snowDepth;
		snowReport[i].addInfo(startDate + i, month, snowDepth);
	}
	//sorts array by base depth in ascending order
	sort(snowReport, SIZE);
	//displays results
	cout << "Snow Report " << month << " " << startDate << "-" << startDate + 6 << endl;
	displayResults(snowReport, SIZE);
	system("PAUSE");
	return 0;
}
void displayResults(SnowReport *arr, int size) {
	cout << "     Date        Base" << endl;
	//prints info in array
	for (int x = 0; x < size; x++) {
		cout << "     " << arr[x].getDay() << "          " << arr[x].getBaseDepths() << endl;
	}
}
void sort(SnowReport *arr, int size) {
	SnowReport temp;
	for (int x = 0; x < size; x++) {
		for (int n = 0; n < size - 1; n++) {
			if (arr[n].getBaseDepths() > arr[x].getBaseDepths()) {
				//swaps element in array
				temp = arr[x];
				arr[x] = arr[n];
				arr[n] = temp;
			}
		}
	}
}