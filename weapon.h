#include <iostream>
#include <random>
#include <string>
class weapon {
	private:
		std::string name;
		std::string type;
}

class weapon_attribute {
	private:
		std::string name;
	public:
		weapon_attribute(std::string nomer){
			name=nomer;
		}
		
		weapon_attribute(){
			std::string nomer;
			std::cout<< "Please input a weapon attribute\n";
			std::cin >>nomer;
			weapon_attribute(nomer);
		}
		
		~weapon_attribute(){}	
}
	