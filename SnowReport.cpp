/******************************
Snow Report implementation file
Written by: Brett Hirschberger
******************************/
#include "SnowReport.h"

void SnowReport::addInfo(int d, string m, float b) {
	day = d;
	month = m;
	baseDepths = b;
}

string SnowReport::getMonth()
{
	return month;
}

void SnowReport::setMonth(string m)
{
	month = m;
}

int SnowReport::getDay()
{
	return day;
}

void SnowReport::setDay(int d)
{
	day = d;
}

float SnowReport::getBaseDepths()
{
	return baseDepths;
}

void SnowReport::setBaseDepths(float b)
{
	baseDepths = b;
}
