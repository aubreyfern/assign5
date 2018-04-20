#include <iostream>
#include <fstream>
#include <stdio.h>
#include "BST.h"
#include "checkFile.h"
#include "Student.h"
using namespace std; 
int main()
{
	checkFile checkStud("studentTable.txt");
	checkFile checkFaculty("facultyTable.txt"); 

	Student stud; 
	stud.id = 1; 
	stud.name = "Aubrey"; 
	stud.level = "Sophomore";
	stud.major = "CS"; 
	stud.gpa = 3.6; 
	BST<Student> studTree; 
	studTree.insert(stud); 
	studTree.printTreeAll();
	cout<<studTree.getSize()<<endl; 
	cout<<studTree.contains(stud)<<endl; 
	cout<<studTree.getMax()<<endl<<studTree.getMin()<<endl;
	studTree.deleteNode(stud);
	cout<<studTree.getSize()<<endl;
	

	// attempting serialization to a binary file

	/*BST<int> newTree; 
	FILE* dat = fopen("test.bin","wb");
	fwrite(&myTree,sizeof(myTree),myTree.getSize(),dat); 
	fclose(dat); 
	
	FILE* datt = fopen("test.bin", "rb"); 
	fread(&myTree,sizeof(myTree),1,datt); 
		//fread(&myTree,sizeof(myTree),1,datt); 

	fclose(datt); 
	cout<<endl<<myTree.getSize()<<endl;
	//myTree.printTreeAll();
*/


}
