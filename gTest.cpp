#include <stdio.h>

#include "gtest/gtest.h"

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



TEST(szeSauceSimTest, simulateTasteOfSauceTest){
	EXPECT_EQ("MMMMMMHHHHMMMM...you said this sauce was from a movie or something?", simulateTasteOfSauce());
}
TEST(szeSauceSimTest, simulateOrderTest){
	EXPECT_EQ("Alright so that'll be 1 order of chicken nuggets with the Mulan movie sauce", simulateOrder());
}
TEST(szeSauceSimTest, numberOfSeasonsUntilWeGetTheSauceTest){
	EXPECT_EQ(9, numberOfSeasonsUntilWeGetTheSauce());
}
TEST(szeSauceSimTest, stillAtShoneysTest){
	EXPECT_TRUE(stillAtShoneys());
}

GTEST_API_ int main(int argc, char **argv) {
	printf("Running main() from gtest_main.cc\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
