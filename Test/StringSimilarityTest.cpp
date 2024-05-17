#include "pch.h"
#include "../StringSimilarity/StringSimilarity.cpp"

TEST(StringSimilarityTest, StringsWithSameLength) {
	StringSimilarity stringSmilarity{};
	string right = "abcdefghijk";
	string left = "kjihgfedcba";
	
	EXPECT_EQ(60, stringSmilarity.getScore(left, right));
}

TEST(StringSimilarityTest, ZeroLengthRight) {
	StringSimilarity stringSmilarity{};
	string right = "";
	string left = "kjihgfedcba";

	EXPECT_EQ(0, stringSmilarity.getScore(left, right));
}


TEST(StringSimilarityTest, ZeroLengthLeft) {
	StringSimilarity stringSmilarity{};
	string right = "abcdefghijk";
	string left = "";

	EXPECT_EQ(0, stringSmilarity.getScore(left, right));
}

TEST(StringSimilarityTest, TwiceLengthRight) {
	StringSimilarity stringSmilarity{};
	string right = "abcdefghijkabcdefghijk";
	string left = "kjihgfedcba";

	EXPECT_EQ(0, stringSmilarity.getScore(left, right));
}


TEST(StringSimilarityTest, TwiceLengthLeft) {
	StringSimilarity stringSmilarity{};
	string right = "abcdefghijk";
	string left = "kjihgfedcbakjihgfedcba";

	EXPECT_EQ(0, stringSmilarity.getScore(left, right));
}