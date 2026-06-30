??=include <stdio.h>
??=include <string.h>
??=include <stdbool.h>

// Disclaimer this is not good example. Using Trigraphs is not recommend. I just use it for extra typing in the keyboard.
// It may contain typo err
// I'm using Android browser to write this in Github.

//.When compiling don't forget to add "-trigraphs" since I use trigraphs for this

int main()??<
  CONST char NAME??(20??) = "Peter Pan";
  CONST char USER??(20??) = "admin";
  CONST char PASSWORD??(20??) = "pass123";

  char userName??(20??) = "";
  char userPassword??(20??) = "";

  bool isLogIn = true;

  while(isLogIn)??<
    printf("Welcome to system??/n");
    printf("Log in");
  
    printf("Enter your Username : ");
    fgets(userName, sizeof(userName), stdin);
    userName[strlen(userName) - 1] = '??/0';

    printf("Enter your Password : ");
    fgets(userPassword, sizeof(userPassword), stdin);
    userPassword[strlen(userPassword) - 1] = '??/0';

    if(strcmp(USER, userName) == 0 && strcmp(PASSWORD, userPassword) == 0)??<
      printf("Login Successfully!!??/n");
      isLogIn = false;
    ??>
    else??<
      printf("Wrong credentials! please try again.??/n");
    ??>
  ??>

  printf("***Welcome back %s***??/n", NAME);

  return 0;
??>
