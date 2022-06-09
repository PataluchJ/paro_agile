#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, RandomDate)
{
  ASSERT_EQ(dayOfYear(7, 24, 2005), 205);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, LeapYear)
{
    ASSERT_EQ(dayOfYear(7, 24, 2004), 206);
}

TEST(DayOfYearTestSuite, LeapYear2)
{
    ASSERT_EQ(dayOfYear(7, 24, 2100), 205);
}

TEST(DayOfYearTestSuite, LeapYear3)
{
    ASSERT_EQ(dayOfYear(7, 24, 2000), 206);
}