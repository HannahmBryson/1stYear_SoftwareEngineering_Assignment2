Design Decisions

The user is asked to input a number of players. I then used a while loop to ensure that the input is between 2 and 6. 
The user is then asked to input a name for each player. I then decided to have the life point set to 100 before other values are put in struct.

Program then ask for each player to select a type. I decided to ask the user to input a number as there are less variables and it is also easier for the user to input. I then decided to use a switch statement, with functions in each case as it produces a cleaner and more efficient code. 

In each case, there is 2 functions, the function that randomly assigns values and the function that prints said values..

I decided to a game variable that is set at one at start then increases by 1 when a player loses all their life. Once game is the same as the input which holds the amount of players the loop ends.  

In the human function i have put a while loop in as i thought that would be a way to ensure that the values are completely random. Although I do realise that this isn't the most efficient way as the while loop will have to rerun several times.

I added a if statement “players[attacked].life >0” so the life point dont go into the negative for more than one player. This would cause the game to delay ending.

