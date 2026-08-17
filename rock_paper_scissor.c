#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game (char you, char computer) {
//0 computer wins 1 user wins -1 draw
    //si les deux sont les meme
    if(you == computer)
        return -1;

    //si user stone et computer paper
    if(you == 's' && computer == 'p')
        return 0;
        //si user paper et computer stone
        else if (you == 'p' && computer =='s')
            return 1;
    //si user stone et computer scissor
    if(you == 's' && computer =='z')
        return 0;
        else if (you == 'z' && computer == 'p')
            return 1;
}

int main(){
    //n va store le numero random
    int n;

    char you, computer, result;

    //ceci va choisir le numero random
    srand(time(NULL));


    // Make the random number less
    // than 100, divided it by 100
    //j'ai pas compris ça surement pour que ça dépasse pas les 100
    n = rand() % 100;

    //ici on va determiner quelle numero sera pierre feuille ou scissor
    if (n < 33)
        computer ='s';
    else if (n > 33 && n < 66)
        computer ='p';
    else
        computer ='z';

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    //c'est l'input user
    scanf("%c", &you);

    //ça appelle la fonction jeu
    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
    printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);

    return 0;

}
