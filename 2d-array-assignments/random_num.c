// Write a program that generates a random numberbetween 1 and 20and asks the
// user to guess what the number is. If the user's guess is higher than the
// random number, the program should display "Too high, try again." If the
// user's guess is lower than the random number, the program should display "Too
// low, try again." The program should use a loop that repeats until the user
// correctly guesses the random number.Display score after user enters correct
// number.Total score is 20.And score deduced by one each time user enter wrong
// guess.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int num, diff, score = 20, multiplier = 0, guess;
  srand(time(0));
  printf("Let's play Guess the Number. Pick a difficulty level (1, 2, or 3):");
  scanf("%d", &diff);
  if (diff == 1) {
    multiplier = 10;
  } else if (diff == 2) {
    multiplier = 100;
  } else {
    multiplier = 1000;
  }
  num = rand() % multiplier + 1;
  printf("I have my number. What's your guess?");
  while (1) {
    scanf("%d", &guess);
    if (guess > num) {
      printf("Too high, try again.");
      score--;
    } else if (guess < num) {
      printf("Too low, try again.");
      score--;
    } else {
      printf("Your score %d!\n", score);
      break;
    }
  }
  return 0;
}
