#include <stdio.h>

int main(void) {
  const int SecondsPerDay = 86400;
  const int SecondsPerHour = 3600;
  const int SecondsPerMinute = 60;
  const int MinutesPerDay = 1440;
  const int MinutesPerHour = 60;
  const int HoursPerDay = 24;

  printf("Enter the day in the month: ");
  int day;
  scanf("%d", &day);

  printf("Enter the hour in the day: ");
  int hour;
  scanf("%d", &hour);

  printf("Enter the minute in the hour: ");
  int minute;
  scanf("%d", &minute);

  printf("Enter the second in the minute: ");
  int second;
  scanf("%d", &second);

  printf("\nDo you know that time is precious?\n");

  // This is easy to miss if a student does not try out the solution
  // with a simple example representing a special case, such as day 1, hour 0,
  // minute 0, and second 0. Once the student thought about the special case,
  // this becomes straightforward.
  day = day - 1;

  // The following code runs correctly, but may not be the best coding style.
  // It is also less readable.
  /*
  printf("%d seconds, or %.2lf minutes, or %.2lf hours, or %.2lf days have "
         "elapsed since the beginning of the month.\n",
         day * SecondsPerDay + hour * SecondsPerHour +
             minute * SecondsPerMinute + second,
         day * MinutesPerDay + hour * MinutesPerHour + minute +
             second / (double)SecondsPerMinute,
         day * HoursPerDay + hour + minute / (double)MinutesPerHour +
             second / (double)SecondsPerHour,
         day + hour / (double)HoursPerDay + minute / (double)MinutesPerDay +
             second / (double)SecondsPerDay);
  */

  // Good coding style should use variables with good names that reveal
  // what these variables represent. For example:

  // According to Google's C++ style guide, it is best to declare a variable
  // and then initialize it immediately
  int secondsElapsed = day * SecondsPerDay + hour * SecondsPerHour +
                       minute * SecondsPerMinute + second;
  // In the code above (and below), the second line lined up with 'day' after
  // the first line, making the code more elegant and readable. This is
  // formatted by clang-format, a C formatter that can be installed in Visual
  // Studio Code as an extension and at the command line (brew install
  // clang-format). Try to encourage the students to install a formatter
  // and turn on EditOnSave in Visual Studio Code.

  // explain why we need to typecast to double before division
  // Note: depending on the tutorial timing, typecasting may not have been
  // introduced in the lectures. It can be introduced briefly in this tutorial.
  double minutesElapsed = day * MinutesPerDay + hour * MinutesPerHour + minute +
                          second / (double)SecondsPerMinute;

  double hoursElapsed = day * HoursPerDay + hour +
                        minute / (double)MinutesPerHour +
                        second / (double)SecondsPerHour;

  double daysElapsed = day + hour / (double)HoursPerDay +
                       minute / (double)MinutesPerDay +
                       second / (double)SecondsPerDay;

  // Note: we are using multiple strings in printf() to break lines.
  // This is a special trick to make the code more readable.
  printf("%d seconds, or %.2lf minutes, or %.2lf hours, or %.2lf days have "
         "elapsed since the beginning of the month.\n",
         secondsElapsed, minutesElapsed, hoursElapsed, daysElapsed);
}
