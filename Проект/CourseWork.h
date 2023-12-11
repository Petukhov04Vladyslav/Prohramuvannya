#pragma once
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

class CourseWork
{
private:
	string title;
	string description;
	string deliveryDate;

public:
	CourseWork(string newTitle, string newDescription, string newDeliveryDate):
		title(newTitle), description(newDescription), deliveryDate(newDeliveryDate)
	{
	}
	
	string getTitle()
	{
		return title;
	}

	string getDescription()
	{
		return description;
	}

	string getDeliveryDate()
	{
		return deliveryDate;
	}
};