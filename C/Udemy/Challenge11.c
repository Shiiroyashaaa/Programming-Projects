/**
 * @file Challenge11.c
 * @author Steven
 * @brief Tic Tac Toe Game
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
void PrintScreen();
int WinnerCheck();


char game [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){

    int player = 1, answer, WinCondition = 0;    
    char mark;
    
    PrintScreen();

    while(1){          

        player = (player % 2) ? 1 : 2;

        printf("\nPlayer %d, enter a number: ", player);
        scanf("%d", &answer);

        mark = (player == 1) ? 'X' : 'O';        
    
        if(answer > 9 || answer < 1)
            printf("\nInvalid move");

        if (answer == 1 && game[1] == '1')
            game[1] = mark;

        else if (answer == 2 && game[2] == '2')
            game[2] = mark;

        else if (answer == 3 && game[3] == '3')
            game[3] = mark;

        else if (answer == 4 && game[4] == '4')
            game[4] = mark;

        else if (answer == 5 && game[5] == '5')
            game[5] = mark;

        else if (answer == 6 && game[6] == '6')
            game[6] = mark;

        else if (answer == 7 && game[7] == '7')
            game[7] = mark;

        else if (answer == 8 && game[8] == '8')
            game[8] = mark;

        else if (answer == 9 && game[9] == '9')
            game[9] = mark;
        
        else{
            printf("\nInvalid move");
            player--;
        }

        player++;
        
        PrintScreen();

        WinCondition = WinnerCheck();

        if(WinCondition == 1){
            printf("\nPlayer %d wins!\n", --player);
            return 0;
        }
        if(WinCondition == 0){
            printf("/nDraw!\n");
            return 0;
        }
    }
    
    return 0;
    
}
void PrintScreen(){
    printf("\n\tTic Tac Toe\n\n");
    printf("Player 1(X)   -    Player 2 (O)\n\n");

    printf("\t     |       |\n");
        printf("\t  %c  |   %c   |  %c\n", game[1], game[2], game[3]);
        printf("\t_____|_______|_____\n");

        printf("\t     |       |\n");
        printf("\t  %c  |   %c   |  %c\n", game[4], game[5], game[6]);
        printf("\t_____|_______|_____\n");

        printf("\t     |       |\n");
        printf("\t  %c  |   %c   |  %c\n", game[7], game[8], game[9]);
        printf("\t     |       |\n");
}

int WinnerCheck(){
    if(game[1] == game[2] && game[2] == game[3])
        return 1;
    else if(game[4] == game[5] && game[5] == game[6])
        return 1;
    else if(game[7] == game[8] && game[8] == game[9])
        return 1;
    else if(game[1] == game[4] && game[4] == game[7])
        return 1;
    else if(game[2] == game[5] && game[5] == game[8])
        return 1;    
    else if(game[3] == game[6] && game[6] == game[9])
        return 1;    
    else if(game[1] == game[5] && game[5] == game[9])
        return 1;    
    else if(game[3] == game[5] && game[5] == game[7])
        return 1;    
    else if (game[1] != '1' && game[2] != '2' && game[3] != '3' &&
        game[4] != '4' && game[5] != '5' && game[6] != '6' && game[7] 
        != '7' && game[8] != '8' && game[9] != '9')
        return 0;    

}