/*
name:peter
reg:CT100/G/26164/25
desc:guesing game
*/
#include<stdio.h>

int main() {
    
    int secretNumber, guess, attempts =0;
    
    while (1) {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low! \n");
        }
         else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;    
        }
    }

    return 0;
}	
	
