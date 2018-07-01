#include "simpleclass.h"

std::string SimpleClass::hello(){
	return "world";
}

std::string SimpleClass::verify(std::string cdKey){
	if(cdKey== "apa123"){
		return "cdKey: " + cdKey + " ,was sucessfully verified by c++";
	}else{
		return "cdKey: " + cdKey + " ,was invalid according to c++";
	}
}

void SimpleClass::helloString(std::vector<std::string> *results){
	results->push_back("world");
}

void SimpleClass::helloBytes(std::vector<char> *results){
	results->push_back('w');
	results->push_back('o');
	results->push_back('r');
	results->push_back('l');
	results->push_back('d');
}
