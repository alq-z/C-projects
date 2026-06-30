#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void battle(){

  int hero_hp = 100;
  int monster_hp = 180;

}
int main(){

  int choice;
  printf("--- Dungeon Explorer ---");

  do{
    printf("1.Go to dungeon\n2.Exit\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        battle();
        break;
      case 2:
        printf("Closing...\n");
        break;
      default:
        printf("Invalid choice!\n");
    }
  }while(choice != 2);
  
  return 0;
}
