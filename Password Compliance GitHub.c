#include <stdio.h>
#include <string.h>


/// TEST L$$555ee
/// TEST 01234567
/// TEST UppDDDll  u=upper p=punctuation d=digit l=lowera


int main()
{
  char pass[10];
  char letter1;
  char letter2;
  char letter3;
  char letter4;
  char letter5;
  char letter6;
  char letter7;
  char letter8;
  int length;

  printf("Enter your Password: \n");    /// Ask password
  scanf("%s", &pass);                  /// User types

  length = strlen(pass);
  letter1 = isupper(pass[0]);
  letter2 = ispunct(pass[1]);
  letter3 = ispunct(pass[2]);
  letter4 = isdigit(pass[3]);
  letter5 = isdigit(pass[4]);
  letter6 = isdigit(pass[5]);
  letter7 = islower(pass[6]);
  letter8 = islower(pass[7]);

  /// Checking the length of the characters of the word first of all
  if(length == 8){
    printf("Length of Characters CORRECT\n");
  } else {
    printf("Length of Characters WRONG\n");
    }
  /// Checking if the condition we asking for each letter is true
  if(letter1 == 1){
    printf("Letter 1 CORRECT Format\n");
  } else {
    printf("Letter 1 WRONG Format\n");
    }

  if(ispunct(pass[1])){
    printf("Letter 2 CORRECT Format\n");
  } else {
    printf("Letter 2 WRONG Format\n");
    }

  if(ispunct(pass[2])){
    printf("Letter 3 CORRECT Format\n");
  } else {
    printf("Letter 3 WRONG Format\n");
    }

  if(letter4 == 1){
    printf("Letter 4 CORRECT Format\n");
  } else {
    printf("Letter 4 WRONG format \n");
    }

  if(letter5 == 1){
    printf("Letter 5 CORRECT Format\n");
  } else {
    printf("Letter 5 WRONG format \n");
    }

  if(letter6 == 1){
    printf("Letter 6 CORRECT Format\n");
  } else {
    printf("Letter 6 WRONG format \n");
    }

  if(islower(pass[6])){
    printf("Letter 7 CORRECT Format \n");
  } else {
    printf("Letter 7 WRONG Format\n");
    }

  if(islower(pass[7])){
    printf("Letter 8 CORRECT Format \n");
  } else {
    printf("Letter 8 WRONG Format\n");
    }


return 0;
}
