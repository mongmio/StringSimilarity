#include "pch.h"
#include "../StringSimilarity/StringSimilarity.cpp"

TEST(StringSimilarityTest, StringsWithSameLength) {
	StringSimilarity stringSmilarity{};
	string right = "abcdefghijk";
	string left = "kjihgfedcba";
	
	EXPECT_EQ(60, stringSmilarity.getScore(left, right));
}