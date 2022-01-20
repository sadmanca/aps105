/*
Part 3 — Arrival Time Calculator

Nidaa, Issac and Amy are going on a road trip from Chelsea, Quebec to Mississauga, Ontario. They
used Ammar’s application that estimates the trip time in hours. Peter wanted to know their arrival
time as he will wait in Mississauga to greet them. However, Ammar’s application does not provide
them with the arrival time. You, taking APS 105 – like everyone in this question, decided to write
a C program that takes in the current time in hours and minutes, and the trip time in hours from
Ammar’s application. Your code should tell them if they will arrive the same day or next day and
their arrival time in hours and minutes rounded to the lowest minute. You can safely assume that
the trip time is lower than 24 hours, i.e. maximum trip time is 23:59. A sample output from an
execution of the program appears below:

    Enter current time: 15<space>30<enter>
    Enter trip time: 3.1<enter>
    Current time is 15:30
    Arrival Time is same day 18:36
    
*/

#include <stdio.h>
int main() {

    int start_hours, trip_hours, end_hours;
    double trip_time, start_min, trip_min, end_min;
    int extra_hour = 0, next_day = 0;
    
    printf("Enter current time: ");
    scanf("%d", &start_hours);
    scanf("%lf", &start_min);

    printf("Enter trip time: ");
    scanf("%lf", &trip_time);

    trip_hours = trip_time - (trip_time - (int) trip_time);
    trip_min = (trip_time - trip_hours) * 60;

    end_min = start_min + trip_min;
    if (end_min > 60) {
        extra_hour = 1;
        end_min = end_min - 60;
    }

    end_hours = start_hours + trip_hours + extra_hour;
    if (end_hours > 24) {
        next_day = 1;
        end_hours = end_hours - 24;
    }

    printf("\nCurrent time is %d:%.0f", start_hours, start_min);
    if (end_hours < 10) {
        if (next_day == 1) {
            printf("\nArrival Time is next day 0%d:%.0f", end_hours, end_min);
        } else {
            printf("\nArrival Time is same day 0%d:%.0f", end_hours, end_min);
        }
    } else {
        if (next_day == 1) {
            printf("\nArrival Time is next day %d:%.0f", end_hours, end_min);
        } else {
            printf("\nArrival Time is same day %d:%.0f", end_hours, end_min);
        }

    }

    return 0;
}