#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void battle(){
  
  // health value
  int hero_hp = 99;
  int monster_hp = 111;
  //choice to determine the execution in the condition 
  int choice;

  printf("\nA Monster appeared!\n");
  
  while(hero_hp > 0 && monster_hp > 0){
    printf("1.Sword slash 2.Sword thrust 3.Lucky-punch\n");
    scanf("%d", &choice);
    
    int damage; //damage used for hero and monster 
    //for attack choice
    switch(choice)
    {
      case 1:
        damage = rand() % 11 + 15;// damage 16-25
        monster_hp -= damage;
        printf("Wsskk!.. Sword slash dealt %d to Monster.", damage);
        break;

      case 2:
        damage = rand() % 11 + 10; // damage 11-20
        monster_hp -= damage;
        printf("Tsskk!.. Sword thrust dealt %d to Monster.", damage);
        break;

      case 3:
        damage = rand() % 8 + 10; //damage 11-15
        monster_hp -= damage;
        printf("Bogss!.. Lucky punch dealt %d to Monster.", damage);
        break

    }

    printf("\n\n");
    
    //Monster attack 
    if(monster_hp > 0)
    {
    damage = rand() % 11 + 10; //11-20 damage
    hero_hp -= damage;
    printf("Monster attack dealt %d to you.\n\n", damage);
    }
    
  }
  //if hero hp is 0
  if(hero_hp < 0)
  {
    printf("You have been slain!\n\n");
  }
  //if monster hp is 0
  if(monster_hp < 0){
    printf("You defeated the monster.\n");
    printf("Teleportation magic circle Activate\n\n");
  }
  printf("\n\n");

}

int main(){

  int choice;
  printf("--<-! Dungeon Explorer !->--");

  do{
    printf("1.Go to dungeon\n2.Exit\n");
    printf("Your choice: ");
    scanf(" %d", &choice);

    switch(choice){
      case 1:
        battle(); //battle logic function 
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
