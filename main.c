
#include<string.h>
#include <stdio.h>

typedef struct Player
{
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

	
	// Asks the user to input a set of players (max 6). 
	printf("Please input  number of players 2-6");
	scanf ("%d", &input);
	while (input <2 || input > 6)
	{
   		printf("Input is invaid, Please input  number of players 2-6");
   		scanf ("%d", &input);
	}
   
     //input a name.
	for (numplayers=0;numplayers >= 0 && numplayers <= input; ++numplayers)
  	{
		printf("Please input name for player %d", numplayers+1);
		scanf("%s", &players[numplayers].name);
		printf("%s/n",players[numplayers].name) ;
   	}
 
   // For each player the user has to select a type (Elf, Human, Ogre, Wizard) 
	for (numplayers=0;numplayers >= 0 && numplayers <= input; ++numplayers)
 	{
		printf("Please input choose a chartcter type for player %d :/n 1 Elf/n 2 Human/n 3 Ogre/n 4 Wizard/n ", numplayers+1);
		scanf ("%d", &input);
		while (input <1 || input > 6)
		{
			printf("Input is invaid, Please input number of between 1 and 4");
			scanf ("%d", &input);
		}
		switch (input)
		{
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
}
	
int elf( player players[numplayers], int numplayers)
{
	srand(time(NULL));
	players[numplayers].smartness = (rand()%(100-70))+70;
	players[numplayers].strength=(rand()%(50-1))+1; 
	players[numplayers].magic =(rand()%(80-51))+51; 
	players[numplayers].luck = (rand()%(100-60))+60; 
	players[numplayers].dexterity=(rand()%(100-1))+1;

	return players[numplayers] ;

}
human(player players[numplayers], int numplayers)
{
	while ((players[numplayers].smartness + players[numplayers].strength + players[numplayers].magic+ players[numplayers].luck + players[numplayers].dexterity) = 0 || (players[numplayers].smartness + players[numplayers].strength + players[numplayers].magic+ players[numplayers].luck + players[numplayers].dexterity) >300) 
	{
		srand(time(NULL));
		players[numplayers].smartness =(rand()%(100-1))+1;
		players[numplayers].strength=(rand()%(100-1))+1; 
		players[numplayers].magic =(rand()%(100-1))+1; 
		players[numplayers].luck=(rand()%(100-1))+1; 
		players[numplayers].dexterity=(rand()%(100-1))+1;
	}
	
	return players[numplayers] ;	
}

ogre(player players[numplayers], int numplayers)
{
	srand(time(NULL));
	players[numplayers].smartness =(rand()%(20-1))+1;
	players[numplayers].strength=(rand()%(100-80))+80; 
	players[numplayers].magic = 0; 
	players[numplayers].luck=(rand()%(100-1))+1; 
	players[numplayers].dexterity=(rand()%(100-80))+80;
	
	return players[numplayers] ;

}

wizard(player players[numplayers], int numplayers)
{
	srand(time(NULL));
	players[numplayers].smartness =(rand()%(100-90))+90;
	players[numplayers].strength=(rand()%(20-1))+1; 
	players[numplayers].magic = (rand()%(100-80))+80;
	players[numplayers].luck=(rand()%(100-50))+50; 
	players[numplayers].dexterity=(rand()%(100-1))+1;
}


attack (player players[numplayers], int numplayers)
