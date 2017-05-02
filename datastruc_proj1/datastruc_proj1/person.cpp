#include <string>
#include "person.h"

//constructor
pc::Person::Person(std::string & fname_para, std::string & lname_para, int age_para) : fname(fname_para), lname(lname_para), age(age_para){}

//getters
std::string pc::Person::getFName(){
	return fname;
}
std::string pc::Person::getLName(){
	return lname;
}
int pc::Person::getAge(){
	return age;
}

//setters
void pc::Person::updateFName(std::string & name_para){
	fname = name_para;
}
void pc::Person::updateLName(std::string & name_para){
	lname = name_para;
}
void pc::Person::updateAge(int age_para){
	age = age_para;
}