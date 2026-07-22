#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess_number,no_of_guesses=0, random_number;


    srand(time(0));  // Seed the random number generator

    random_number = rand() % 100 + 1;
    //printf("Random Number = %d\n", random_number);

    do{
        no_of_guesses++;
        printf("GUESS YOUR NUMBER PLEASE:");
        scanf("%d",&guess_number);
        if(guess_number>random_number){
        printf("GUESS THE LOWER number,Dunghead.\n");
        }
        else if(guess_number<random_number){
            printf("LOOSER,GUESS THE HIGHER number.\n");
        } 
        else{
            printf("CONGRATS :) you guessed the right number, that is %d\n",random_number);
        }

    }
    while(guess_number!=random_number);
    
    printf("NUMBER OF GUESSES ARE:%d\n",no_of_guesses);
  return 0;
}
