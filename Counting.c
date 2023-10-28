#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, guess, attempts = 0;
    
    // Initialize random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100. Try to guess it.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", numberToGuess, attempts);
        }
    } while (guess != numberToGuess);
    
    return 0;
}
