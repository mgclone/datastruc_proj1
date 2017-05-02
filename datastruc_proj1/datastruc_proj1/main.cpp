#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


int main(){

	std::string name;

	std::string fname;
	std::string lname;
	int age;

	std::ifstream in_file;
	/*
	in_file.open("names.txt");
	while (std::getline(in_file, name)){
		std::cout << name << std::endl;
	}*/
	in_file.open("names.txt");
	while (in_file >> fname >> lname >> age){

		fname.erase(std::remove_if(fname.begin(), fname.end(), ispunct), fname.end());

		std::cout << "fist name: " << fname << std::endl;

		std::cout << "last name: " << lname << std::endl;
		std::cout << "age: " << age << std::endl;
		std::cout << std::endl;
		//commen
		//anothe
		//tea
		std::cout << "waht up" << std::endl;
	}

	return 0;
}