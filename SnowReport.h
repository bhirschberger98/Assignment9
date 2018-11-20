/******************************
Snow Report Header file
Written by: Brett Hirschberger
******************************/
#include <iostream>
#include <string>
using namespace std;

class SnowReport {
public:
	void addInfo(int d, string m, float b);
	string getMonth();
	void setMonth(string m);
	int getDay();
	void setDay(int d);
	float getBaseDepths();
	void setBaseDepths(float b);
private:
	string month;
	int day;
	float baseDepths;
};