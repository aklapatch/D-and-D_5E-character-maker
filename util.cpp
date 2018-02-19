/**common-util.cpp
 * houses all the common utility functions, such as an rng output function and abort
 * function to select options to choose from
 */
#include "util.h"
/** lists options and lets the user select them
 * It does that by having the user type in a number
 * There will always be an option to call the roll function
 * in order to pick one of the previous options randomly
 */
int Select(int listnum, std::string * itemlist, std::string describe){
	int selector,i;
	bool endflag = 1;
	
	while(endflag)
		std::cout<< "Please select a "<< describe <<" by typing its number and pressing enter.\n";
		for(i=0;i<listnum;i++){
			std::cout<< " "<< itemlist[listnum]<<" "<< i+1<<".\n";
		}
		std::cout << "Or roll for it "<<listnum+1<<".\n";	
		std::cin << selector;
	
		if(selector==listnum+1){
			selector=Roll(listnum);
			endflag=0;
		} else if(selector>listnum+1||selector<1){
			std::cout<<"That input was invalid, let's try again.\n";
		} else {
			endflag=0;
		}
	}	
	
	return selector
}	

/** returns a random number between 1 and max
 * uses C++11 random_device generator to do so
 * and just returns the generated int
 */
int Roll(int max){
	std::random_device rng;
	std::uniform_int_distribution<int> distr(1,max);
	return distr;
}
	
	