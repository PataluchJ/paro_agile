add_executable(ScrabbleScoreTests
  scrabble-score-tests.cpp)

target_link_libraries (ScrabbleScoreTests PUBLIC ScrabbleScore gtest_main)
