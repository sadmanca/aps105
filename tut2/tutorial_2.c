//Jumping in the Wild
#include <stdio.h> //to access printf and scanf
#include <stdlib.h> //to access rand(), srand()
#include <time.h> //to access time()
#include <stdbool.h> //to access bool, true, false


int main(void){

    //Declare variables with constants given in the question
    const int ROCKS_PERIOD = 4;
    const int NEEDLES_PERIOD = 3;

    //Initialize your seed once
    //To get a different seed every time you run your code, make your seed depend on UNIX time 
    //time(NULL) returns the number of seconds since Jan 1, 1970
    srand(time(NULL)); 

    //Recall that to generate a random number between a range [MIN, MAX]
    //Example how the equation is brought through an example 
    // To generate a random number from 0 to 12, rand() % 13
    // To generate a random number from 8 to 20, rand() % 13 + 8
    int jump_blocks = rand() % (20-8+1) + 8;
    printf("He will jump %d blocks ", jump_blocks);

    if (jump_blocks % NEEDLES_PERIOD == 0 || jump_blocks % ROCKS_PERIOD == 0){
        if(jump_blocks % NEEDLES_PERIOD == 0 && jump_blocks % NEEDLES_PERIOD == 0){
            printf("and hit needles and rocks.\n");
        }
        else if (jump_blocks % NEEDLES_PERIOD == 0){
            printf("and hit needles.\n"); 
        }
        else{
            printf("and hit rocks.\n");
        }
    }
    else{
        printf("and hit the ground! Yaay!\n");
    }


    return 0;
}
