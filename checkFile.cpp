#include <iostream>
#include <fstream>
#include <string>
#include "checkFile.h"
using namespace std;

checkFile::checkFile()
{

}

checkFile::checkFile(string name)
{
	name = fileName; 
	fileExists();
}
checkFile::~checkFile()
{

}

bool checkFile::fileExists()
{
	ifstream file;
	bool exists = false;  
	file.open(fileName.c_str()); 
	if(file.fail())
	{
		cout<<"file dne"<<endl;
		return exists; 
	}
	else{
		//go to reading?
		file.close(); 
		exists = true; 
		return exists; 
	}
}