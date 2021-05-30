// Write a Guess the Number game that has three levels of difficulty. The first
// level of difficulty would be a number between 1 and 10. The second difficulty
// set would be between 1 and 100. The third difficulty set would be between 1
// and 1000. Prompt for the difficulty level, and then start the game. The
// computer picks a random numberin thatrange and prompts the player to guess
// that number. Each time the player guesses, the computer should give the
// player a hint as to whether the number is too high or too low. The computer
// should also keep track of the number of guesses. Once the player guesses the
// correct number, the computer should present the number of guesses and ask if
// the player would like to play again.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game();
int main(void) {
  char re = 'Y';
  while (re != 'N') {
    game();
    printf("\nPlay again?");
    scanf(" %c", &re);
  }
  return 0;
}
void game() {

  int num, diff, score = 20, multiplier = 0, guess, count = 0;
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
  printf("%d", num);
  printf("Ihave my number. What's your guess?");
  while (1) {
    scanf("%d", &guess);
    count++;
    if (guess > num) {
      printf("Too high, try again.");
      score--;
    } else if (guess < num) {
      printf("Too low, try again.");
      score--;
    } else {
      printf("You got it in %d guesses!\n", count);
      if (count == 1) {
        printf("You’re a mind reader!");
      } else if (count < 5) {
        printf("Most impressive.");
      } else if (count < 7) {
        printf("You can do better than tha.");
      } else {
        printf("Better luck next time.");
      }
      break;
    }
  }
}
