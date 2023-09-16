#include <iostream>
#include <regex>
#include <string>

int main() {

	
	std::string choice;
	std::string input;
	std::regex email_expr("[a-z]+([0-9]*[a-z]*)*@[a-z]+.com");
	std::regex phone_expr("([0-9]{3})-[0-9]{3}-[0-9]{4}");
	std::regex web_expr("www.[a-z]+([0-9]*[a-z]*).com");
	while(true) {

		std::cout << "What would you like to validate? Phone Number (p), Email (e), Website (w), or Exit (q)? ";
		std::cin >> choice;
		std::cout << "Please enter input" << std::endl;
		std::cin >> input;
		if (!std::cin) break;

		//Exit when user inputs q 
		if (choice == "e") {
			if (std::regex_match(input, email_expr))
				std::cout << "Input is in email format" << std::endl;
			else
				std::cout << "Invalid email input : Not in correct format" << std::endl;
		
		} else if (choice == "p") {
			if (std::regex_match(input, phone_expr))
				std::cout << "Input is in phone format" << std::endl;
			else
				std::cout << "Invalid phone input : Not in correct format" << std::endl;
		} else if (choice == "w") {
			if (std::regex_match(input, web_expr))
				std::cout << "Input is in website format" << std::endl;
			else
				std::cout << "Invalid website input : Not in correct format" << std::endl;
		}  
		else
			break;
	}
}
