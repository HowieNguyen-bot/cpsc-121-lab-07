// Howell Nguyen
// 27hnguyen@csu.fullerton.edu
// @HowieNguyen-bot
// Partners: @AMartinez025

#include "datediff_functions.h"

int JulianDay(int month, int day, int year) {
  int julian_day = day - 32075 + 1461 * (year + 4800 + (month - 14) / 12) / 4 +
                   367 * (month - 2 - (month - 14) / 12 * 12) / 12 -
                   3 * ((year + 4900 + (month - 14) / 12) / 100) / 4;
  return julian_day;
}
int DateDifference(int start_month, int start_day, int start_year,
                   int end_month, int end_day, int end_year) {
  int date_difference = JulianDay(end_month, end_day, end_year) -
                        JulianDay(start_month, start_day, start_year);
  return date_difference;
}

void PrintDate(int month, int day, int year) {
  std::cout << month << "/" << day << "/" << year;
}
