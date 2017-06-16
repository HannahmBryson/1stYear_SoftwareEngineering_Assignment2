Software Engineering Project 1 
(Comp 10050)
Assignment 2 – Players & Slots Representation, Slots and Attack behaviour
 
Aim: Representation of players using struct; and attacks  behaviour
 
A. Detailed Specification
The objective for this assignment is to create a program that:
Asks the user to input a set of players (max 6). For each player the user has to select a type (Elf, Human, Ogre, Wizard) and input a name.
Each player will be represented as a struct characterised by the fields identifying the player (player type and player name), life points, and the fields characterising the player capabilities (Smartness, Strength, Magic Skills, Luck and Dexterity). The life points are represented as an integer initially set to 100. The capabilities are represented as integers that can assume values in [0, 100] and are randomly assigned to each player following the criteria indicated in section B.
 
If a player decides to perform an attack, s/he should be able to choose between the them. The attacked and attacker players can lose or gain points according to the criteria described in Section D.
After each player has chosen an action, the program prints the name and type of each player and its life points and terminates. These should be formatted as follows: <Player Name>(<Player Type>, <Life Points>. For example: 
 
Liliana (Ogre, 50)
	John (Wizard, 76)
Evan (Elf, 100)
	...
B. Criteria for Initial Assignment of Capabilities to Players

If the player is a Human: 
all his/her capabilities should be > 0
the total sum of the capabilities should be < 300

If the payer is an Ogre:
Magic Skills should be set to 00
Smartness <= 20
Strength >=80
Dexterity >=80
The sum of  Luck and Smartness should always be <= 50

If the player is an Elf:
All the capabilities should be > 0
Luck >= 60
Smartness >=70
Strength <= 50
50 < Magic Skills < 80

If the player is a Wizard:
All the capabilities should be > 0
Luck >= 50
Smartness >= 90
Strength <= 20
Magic Skills >= 80
 
 
C. Implementing an Attack
If a player (Attacker) decides which player to attack(Attacked)
If the Strength points of the attacked player are <=70, then attacked player life points = life points - 0.5 * his/her Strength points. 
If the strength points of the attacked player are > 70, the attacker life points = life points - 0.3 * (attacked player’s strength points).
 
Code Design Requirements:
●      Comment your code,
●      Use functions where you can.
