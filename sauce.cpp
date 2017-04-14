#include <iostream>
#include <String>
#include "sauce.h"
#include <gtest\gtest.h>


int main() {
	
	std::cout << simulateOrder();
	
	system("pause");
	
	std::cout << simulateTasteOfSauce();
	
	system("pause");
	
	if(stillAtShoneys()){
		std::cout << "WE'RE STILL AT SHONEY'S THIS IS NOT A DRILL";
	}
	
	system("pause");
	
	std::cout << numberOfSeasonsUntilWeGetTheSauce() << " more seasons till we get that sauce Morty.";
	
	system("pause");

}


std::string simulateTasteOfSauce() {
	return "MMMMMMHHHHMMMM...you said this sauce was from a movie or something?";
}

std::string simulateOrder() {
	return "Alright so that'll be 1 order of chicken nuggets with the Mulan movie sauce";
}

int numberOfSeasonsUntilWeGetTheSauce() {
	return 9;
}

bool stillAtShoneys() {
	return true;
}
