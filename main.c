#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#define WORD_SIZE 256

#include "capitals.c"

// Safe read input
void read_input(char buffer[WORD_SIZE]){
  fgets(buffer, WORD_SIZE, stdin);
  for (int i = 0; i < WORD_SIZE; i++){
    if (buffer[i] == 0 || buffer[i] == '\n'){
      buffer[i] = 0;
      return;
    }
  }
  buffer[255] = 0;
}



// ----------------
// -- Game state --
// ----------------

typedef struct {
  int score;
  int lose_streak;
  Country country;
  char buffer[WORD_SIZE];
} GameState;

void game_get_country(GameState* s){
  int i = rand() % country_size;
  s->country = country[i];
}

void game_guess_correct(GameState* s){
  s->score++;
  s->lose_streak = 0;
}

void game_guess_incorrect(GameState* s){
  s->lose_streak++;
}

void game_print_state(GameState s){
  printf("  Current score : %d\n", s.score);
  printf("  Losing streak : %d\n", s.lose_streak);
  printf("  Guessing the capital of %s?\n", s.country.name);
  printf("  $ ");
}

GameState game_init(){

  srand(time(NULL));
  
  GameState s;
  s.score = 0;
  s.lose_streak = 0;
  game_get_country(&s);
  memset(s.buffer, 0, WORD_SIZE);
  return s;
}

int game_check_country(GameState s){
  return strcmp(s.country.capital, s.buffer);
}



// ---------------
// -- Main body --
// ---------------

int main(){


  // Greetings
  printf("Welcome to the capital game, the game where you need\n"
	 "to guess the capitals of countries all over the world\n");


  
  // Choose to open game or quit
  int should_exit = 0;
  do {
    
    // Print options and input
    printf("  s -> Start game\n"
	   "  q -> Quit\n"
	   "  > ");
    char input = getchar();
    while (getchar() != '\n');

    
    switch (input){
      // Start game
    case 's':
      should_exit = 1;
      break;

      // Exit game
    case 'q':
      printf("Thanks for playing!\n");
      exit(0);

      // Unrecognised input
    default:
      printf("  Unrecognised input\n");
      break;
    }
    
  } while (!should_exit);


  

  GameState s = game_init();
  
  while (1){

    // Set new country and input
    game_get_country(&s);
    game_print_state(s);
    read_input(s.buffer);


    // Check correct guess or not
    if (game_check_country(s) == 0){
      printf("\tCorrect!\n");
      game_guess_correct(&s);
    }
    else{
      printf("\tWrong!\n");
      printf("\tCorrect : %s\n", s.country.capital);
      game_guess_incorrect(&s);
    }

    // Check lose streak
    if (s.lose_streak == 3){
      printf("\tYou lose!\n");
      break;
    }


    printf("\n");
  }

  return 0;
}
