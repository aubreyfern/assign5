#include <iostream>
#include <string>
#include <ostream>
using namespace std; 
class Student
{
public:
	Student(); 
	~Student(); 

	int getId();
	string getName();

	void callKeyConst(const Student &stud); 
	friend bool operator> (const Student &s1, const Student &s2);
	friend bool operator< (const Student &s1, const Student &s2);
	friend bool operator<= (const Student &s1, const Student &s2);
	friend bool operator>= (const Student &s1, const Student &s2);
	friend bool operator!= (const Student &s1, const Student &s2);
	friend bool operator== (const Student &s1, const Student &s2);
	friend ostream& operator<<(ostream& os, const Student &stud); 

	//private:
	int id; 
	string name; 
	string level; 
	string major; 
	double gpa; 
	int advisorId; 	
};