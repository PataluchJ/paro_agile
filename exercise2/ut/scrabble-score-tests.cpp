#include "gtest/gtest.h"
#include "scrabble-score.hpp"

std::string word;

TEST(word, EmptyWordGives0)
{
  word = "";
  ASSERT_EQ(scrabbleScore(word), 0);
}

TEST(word, CabbageGives13)
{
  word = "CABBAGE";
  ASSERT_EQ(scrabbleScore(word), 14);
}

TEST(word, AllOnePointsLettersGive10)
{
  word = "AEIOULNRST";
  ASSERT_EQ(scrabbleScore(word), 10);
}

TEST(word, AllTwoPointsLettersGive4)
{
  word = "DG";
  ASSERT_EQ(scrabbleScore(word), 4); 
}

TEST(word, AllThreePointsLettersGive12)
{
  word = "BCMP";
  ASSERT_EQ(scrabbleScore(word), 12); 
}

TEST(word, AllFourPointsLettersGive16)
{
  word = "FHVWY";
  ASSERT_EQ(scrabbleScore(word), 20); 
}

TEST(word, AllFivesPointsLettersGive5)
{
  word = "K";
  ASSERT_EQ(scrabbleScore(word), 5); 
}

TEST(word, AllEightPointsLettersGive16)
{
  word = "JX";
  ASSERT_EQ(scrabbleScore(word), 16); 
}

TEST(word, AllTenPointsLettersGive20)
{
  word = "QZ";
  ASSERT_EQ(scrabbleScore(word), 20); 
}