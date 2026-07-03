#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void battle(){
  // health value
  int hero_hp = 99;
  int monster_hp = 150;
  int choice;

  printf("\nA Monster appeared!\n");
  while(hero_hp > 0 && monster_hp > 0){
    printf("1.Sword slash 2.Sword thrust 3.Lucky punch\n");
    scanf("%d", &choice);

    int damage;
    switch(choice)
    {
      case 1:
        damage = rand() % 11 + 15;
        monster_hp -= damage;
        break;

      case 2:
        damage = rand() % 11 + 10;
        monster_hp -= damage;
        break;

      case 3:
        damage = rand() % 6 + 10;
        monster_hp -= damage;
        break

    }
    

    
  }
  

}

int main(){

  int choice;
  printf("---! Dungeon Explorer !---");

  do{
    printf("1.Go to dungeon\n2.Exit\n");
    printf("Your choice: ");
    scanf(" %d", &choice);

    switch(choice){
      case 1:
        battle();
        break;
      case 2:
        printf("Closing...\n");
        break;
      default:
        printf("Invalid choice!\n");
        break;
    }
  }while(choice != 2);
  
  return 0;
}
