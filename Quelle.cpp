#include <iostream>
#include <string>
#include <fstream>




std::string digit() { char x = getchar(); if (isdigit(x)) { return  "mov D0 " + x; } return "FAIL"; }

std::string add() { return "mov D1 D0" + digit() + "add D1 D0"; }







int main(int pInt)
{

	

	std::ofstream myfile;
	myfile.open("example.txt");
	myfile << digit();
	myfile.close();

	return 0;
}