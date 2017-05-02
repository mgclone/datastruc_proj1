#include <string>
#ifndef PERSON_INCLUDE
#define PERSON_INCLUDE

namespace pc{

	class Person{
		private:
			std::string fname;
			std::string lname;
			int age;
		public:
			Person(std::string & fname_para, std::string & lname_para, int age_para);

			//getters
			//returning by reference is better from 
			//performance point of view
			//returning by value is safer from
			//security point of view
			std::string getFName();
			std::string getLName();
			int getAge();
			
			//setters
			void updateFName(std::string & name_para);
			void updateLName(std::string & name_para);
			void updateAge(int age_para);
	};
}

#endif