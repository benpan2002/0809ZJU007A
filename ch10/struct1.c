#include <stdio.h>

struct date {
  int month;
  int day;
  int year;
};

int main (int argc, char const *argv[]) {
  struct date today;
  today.day = 31;
  today.month = 07;
  today.year = 2014;
  //today = (struct date){07,31,2014};
  struct date day;
  day = today;
  day.year = 2015;
  return 0;
}