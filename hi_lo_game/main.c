#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main(){
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n\n");
  // You do not need to change anything above this line for this assignment.
  const int MAX_CHANCES = 7;
  int computer_guess;
  long seed = time(NULL);  //random class
  // set the seed using the srand function
  srand(seed);
  computer_guess = rand() % 100;   // let your program guess a 2 digit number

  // Prompt the user
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n\n");
  int user_guess; // to store the input from user.
  int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
  int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
                       // initially it is 0 as user yet to find the number.
   while(match == 0 && chance_count <= MAX_CHANCES){
   printf("Enter your number: ");
    // get that input in user_guess
    scanf("%d", &user_guess);
    if (user_guess> computer_guess){                     // 10 Marks
    printf("Your guess is high\n");
    printf("remaining chances:%d\n",MAX_CHANCES-chance_count);
    }
    else if(user_guess < computer_guess){
        printf("Your guess is low \n");
        printf("remaining chances:%d\n",MAX_CHANCES-chance_count);
        printf("number of steps that the user took to find the number:%d\n",chance_count);

    }
    else{
        printf("Bingo! you have won \n");
        printf("It took you %d steps for find the number.\n", MAX_CHANCES - (MAX_CHANCES - chance_count));
        break;
      }

  printf("\n\n");
  chance_count++;
}
if (chance_count > MAX_CHANCES){

    printf("Game Over\n");
}


  if((MAX_CHANCES - (MAX_CHANCES - chance_count)) <= 3) {
    printf("\nYou are a Super Duper NINJA!\n");
  }

  else if((MAX_CHANCES - (MAX_CHANCES - chance_count) > 3) && (MAX_CHANCES - (MAX_CHANCES - chance_count) <= 5)) {
    printf("You are Crezy NINJA!\n");
  }

  else if((MAX_CHANCES - (MAX_CHANCES - chance_count) == 6) || (MAX_CHANCES - (MAX_CHANCES - chance_count) == 7)) {
    printf("You have potential to be a NINJA!\n");
  }

return 0;

}



