#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "person.h"


int main(){

	std::string fname;
	std::string lname;
	int age;

	std::ifstream in_file;
	in_file.open("names.txt");

	std::vector<pc::Person> temp_person;



	while (in_file >> fname >> lname >> age){

		temp_person.push_back(pc::Person(fname, lname, age));

	}

	for (pc::Person e : temp_person){
		std::cout << e.getFName() << std::endl;
	}


	//notes old code below.
	/*
	while (in_file >> fname >> lname >> age){

		fname.erase(std::remove_if(fname.begin(), fname.end(), ispunct), fname.end());

		std::cout << "fist name: " << fname << std::endl;

		std::cout << "last name: " << lname << std::endl;
		std::cout << "age: " << age << std::endl;
		std::cout << std::endl;
		//commen
		//anothe
		//te
		std::cout << "waht up" << std::endl;
	}
	*/
	

	return 0;
}