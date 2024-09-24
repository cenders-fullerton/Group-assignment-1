#include "programs.hpp"

#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;
using std::string;

int main (){
	std::cout << "Welcome to myShell" << std::endl;
	string input;
	while (true) 
	{
		cin >> input;
		std::cout << "==> " << input;
	    cout << endl;
	    
	    if (input == "exit"){
			break;
		}
		
		try
		{
			if ( input == "dir" ) {
				
			}
			else {
				cout << "Invalid input!" << endl;
			}
		}
		catch(const std::exception& e)
		{
			cout << "There is an error" << endl;
			cout << "==> " << e.what() << endl;
		}
	}	
	return 0;
}
