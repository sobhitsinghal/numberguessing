#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int number,guess,nguess = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do {
        printf("Guess a number between 1-100:\n");
        scanf("%d",&guess);
        
        if(guess<number){
            printf("Please guess a higher number\n");
        }
        else if(guess>number){
            printf("Please guess a lower number\n");
        }
        else{
            printf("You guess the number in %d attemps\n",nguess );
        }
        nguess++;
       
       }while(guess!=number);

       return 0;
}
