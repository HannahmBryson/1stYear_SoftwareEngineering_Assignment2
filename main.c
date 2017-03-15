# COMP10050-assignment-2

#include<string.h>
#include <stdio.h>

typedef struct Player{
	char name[20];
	char type[6];
	int life;
	int smartness;
	int strength;
	int magic;
	int luck;
	int dexterity;
}player;
player players[6];
int main(void) 
{
	int input=0, numplayers=0;
	int a,b;
	char name[20];

	
	// Hannah Asks the user to input a set of players (max 6). 
   printf("Please input  number of players 2-6");
   scanf ("%d", &input);
   while (input <2 || input > 6){
   printf("Input is invaid, Please input  number of players 2-6");
   scanf ("%d", &input);
   }
   
     //input a name.
	 for (numplayers=0;numplayers >= 0 && numplayers <= input; ++numplayers){
	printf("Please input name for player %d", numplayers+1);
	scanf("%s", &players[numplayers].name);
	printf("%s/n",players[numplayers].name) ;
   }
 
   //Hannah For each player the user has to select a type (Elf, Human, Ogre, Wizard) 
 for (numplayers=0;numplayers >= 0 && numplayers <= input; ++numplayers){
	printf("Please input choose a chartcter type for player %d :/n 1 Elf/n 2 Human/n 3 Ogre/n 4 Wizard/n ", numplayers+1);
	scanf ("%d", &input);
	while (input <1 || input > 6){
		printf("Input is invaid, Please input number of between 1 and 4");
		scanf ("%d", &input);
		}
		switch (input){
			case 1;
			elf();
			break;
		
			case 2; 
			human();
			break;
		
			case 3; 
			ogre();
			break;
		
			case 4;
			wizard();
			break;
		
			default;
			printf("Input is invaid, Please input number of between 1 and 4");
			break;
			}			
	}
