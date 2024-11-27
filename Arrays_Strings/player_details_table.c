#include <stdio.h>

int findSumOfRuns(int *ptr, int size)
{
}
void readDetailsOfPlayers(int ptr[5][2])
{
    puts("Enter Jersy Number and the runs scored by the 5 players:");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Jersy Number of player-%d: ", i + 1);
        scanf("%d", &ptr[i][0]);
        printf("Enter runs scored by player-%d: ", i + 1);
        scanf("%d", &ptr[i][1]);
    }
}

void printDetailsOfPlayers(int players[5][2], int rows, int columns)
{
    puts("Details of the 5 players are");
    printf("Jersy Number\t Runs Scored \n");
    for (int i = 0; i < 5; i++)
    {
        
        printf("%03d \t \t %03d \n", players[i][0], players[i][1]);
    
    }
}

int main()
{
    int playerDetails[5][2] = {{0}}; // 5 rows and 2 columns
    readDetailsOfPlayers(playerDetails);
    printDetailsOfPlayers(playerDetails, 5, 2);
}