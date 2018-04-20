#include <iostream>
#include<ostream>
#include "Student.h"
using namespace std; 

Student::Student()
{
	
}

Student::~Student()
{

}

ostream& operator<<(ostream& os, const Student &stud)
{
	os<<stud.id; 
	return os; 
}

void Student::callKeyConst(const Student &stud)
{
	int k = stud.id; 
}

bool operator> (const Student &s1, const Student &s2)
{
	return s1.id > s2.id; 
}

bool operator< (const Student &s1, const Student &s2)
{
	return s1.id < s2.id; 
}

bool operator<= (const Student &s1, const Student &s2)
{
	return s1.id <= s2.id; 
}

bool operator>= (const Student &s1, const Student &s2)
{
	return s1.id >= s2.id; 
}

bool operator!= (const Student &s1, const Student &s2)
{
	return (s1.id!=s2.id);
}

bool operator== (const Student &s1, const Student &s2)
{
	return (s1.id==s2.id);
}

int Student::getId()
{
	return id; 
}

string Student::getName()
{
	return name; 
}

