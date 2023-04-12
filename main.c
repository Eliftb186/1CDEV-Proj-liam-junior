#include <stdio.h>
#include <stdlib.h>

int main()
{
    int logicielTourne = 0;
    while (logicielTourne == 0)
    {
        int jeu[10][10]; // max tableau 10/10
        int couleur[10][10];
        int end = 0;
        int x; // ligne
        int y; // colonne
        int posxb;
        int posyb;
        int posxr;
        int posyr;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                jeu[i][j] = -1;
                couleur[i][j] = 0;
            }
        }
        // choix du niveau
        printf("Choisi un niveau entre 1 et 30 : ");
        int n;
        scanf("%d", &n);

        if (n == 1){
        jeu[0][0] = 0;
        jeu[0][1] = 1;
        jeu[0][2] = 1;
        jeu[0][3] = 2;
        couleur[0][0] = 34;
        posxr = -1; // si il n'y qu'une couleur
        x = 0;
        y = 0;
    }
    else if(n == 2){
        jeu[0][0] = 0;
        jeu[0][1] = 1;
        jeu[0][2] = 1;
        jeu[0][3] = 2;
        jeu[1][3]=2;
        couleur[0][0] = 31;
        posxr = -1; // si il n'y qu'une couleur
        x = 0;
        y = 0;
    }
    else if (n == 3) {
    jeu[0][0] = 0;
    jeu[0][1] = 1;
    jeu[0][2] = 1;
    jeu[1][2] = 1;
    jeu[2][2] = 2;
    jeu[3][2] = 2;
    jeu[3][1] = 2;
    couleur[0][0] = 31;
    posxr =-1;
    x = 0;
    y = 0;
    } else if (n == 4) {
    jeu[0][0] = 0;
    jeu[0][1] = 1;
    jeu[0][2] = 1;
    jeu[1][2] = 1;
    jeu[2][2] = 1;
    jeu[2][1] = 1;
    jeu[2][0] = 1;
    jeu[1][0] = 2;
    couleur[0][0] = 31;
    posxr = -1;
    x = 0;
    y = 0;
    } else if (n == 5) {
    jeu[4][5] = 0;
    jeu[3][5] = 1;
    jeu[2][5] = 1;
    jeu[1][5] = 1;
    jeu[1][4] = 1;
    jeu[1][3] = 1;
    jeu[1][2] = 1;
    jeu[2][2] = 1;
    jeu[3][2] = 2;
    jeu[3][3] = 2;
    jeu[3][4] = 2;
    couleur[4][5] = 31;
    posxr = -1;
    x = 4;
    y = 5;
    } else if (n == 6) {
    jeu[6][6] = 0;
    jeu[6][5] = 1;
    jeu[6][4] = 1;
    jeu[6][3] = 2;
    jeu[6][2] = 2;
    jeu[6][7] = 1;
    jeu[5][7] = 1;
    jeu[5][6] = 1;
    jeu[5][5] = 1;
    couleur[6][6] = 31;
    posxr = -1;
    x = 6;
    y = 6;
    } else if (n == 7) {
    jeu[3][0] = 0;
    jeu[4][0] = 1;
    jeu[5][0] = 1;
    jeu[5][1] = 1;
    jeu[4][1] = 2;
    jeu[4][2] = 2;
    jeu[3][2] = 2;
    jeu[3][1] = 2;

    couleur[3][0] = 31;
    posxr = -1;
    x = 3;
    y = 0;
    } else if (n == 8) {
    jeu[5][5] = 0;
    jeu[5][6] = 1;
    jeu[4][6] = 1;
    jeu[4][5] = 1;
    jeu[4][4] = 1;
    jeu[5][4] = 1;
    jeu[6][4] = 1;
    jeu[6][5] = 2;
    jeu[6][6] = 2;
    couleur[5][5] = 31;
    x = 5;
    y = 5;
    }
    else if (n == 9) {
            jeu[2][4] = 0;
            jeu[3][4] = 1;
            jeu[4][4] = 1;
            jeu[5][4] = 1;
            jeu[5][5] = 1;
            jeu[5][6] = 1;
            jeu[5][7] = 1;
            jeu[4][7] = 1;
            jeu[3][7] =1;
            jeu[2][7] = 1;
            jeu[2][8] = 2;
            jeu[2][9] = 2;
            jeu[3][9] = 2;
            jeu[4][9] = 2;
            jeu[5][9] = 3;
            jeu[6][9] = 3;
            jeu[7][9] = 3;
            couleur[2][4] = 34;
            posxr = -1;
            x = 2;
            y = 4;
    } else if (n == 10) {
        jeu[3][2] = 0;
        jeu[3][3] = 2;
        jeu[0][1] = 1;
        jeu[1][1] = 1;
        jeu[2][1] = 1;
        jeu[3][1] = 1;
        jeu[4][1] = 2;
        jeu[5][1] = 2;
        jeu[5][2] = 2;
        jeu[5][3] = 2;
        jeu[0][2] = 2;
        jeu[0][3] = 2;
        jeu[0][4] = 2;
        jeu[1][4] = 2;
        jeu[2][4] = 2;
        jeu[3][4] = 2;
        jeu[4][4] = 2;
        jeu[5][4] = 2;
        couleur[3][2] = 34;
        x = 3;
        y = 2;
    } else if (n == 11) {
        jeu[0][0] = 0;
        jeu[0][1] = 1;
        jeu[0][2] = 1;
        jeu[0][3] = 1;
        jeu[1][3] = 1;
        jeu[1][4] = 1;
        jeu[1][5] = 1;
        jeu[2][5] = 1;
        jeu[2][6] = 2;
        jeu[2][7] = 2;
        jeu[2][8] = 2;
        jeu[2][9] = 2;
        jeu[3][5] = 1;
        jeu[3][6] = 1;
        jeu[3][7] = 2;
        jeu[3][8] = 2;
        jeu[3][9] = 2;
        couleur[0][0] = 31;
        x = 0;
        y = 0;
    } else if (n == 12) {
        jeu[0][0] = 2;
        jeu[1][0] = 2;
        jeu[2][0] = 3;
        jeu[2][1] = 1;
        jeu[2][2] = 1;
        jeu[2][3] = 0;
        jeu[1][1] = 1;
        jeu[1][2] = 1;
        jeu[0][1] = 1;
        jeu[0][2] = 1;
        couleur[2][3] = 31;
        x = 2;
        y = 3;
    }
    else if (n == 13) {
        jeu[0][0] = 3;
        jeu[0][1] = 3;
        jeu[0][2] = 3;
        jeu[0][3] = 3;
        jeu[1][0] = 2;
        jeu[1][1] = 2;
        jeu[1][2] = 2;
        jeu[2][0] = 2;
        jeu[2][1] = 2;
        jeu[2][2] = 1;
        jeu[2][3] = 0;

        couleur[2][3] = 34;
        x = 2;
        y = 3;
    }else if (n == 14)
        {
            jeu[0][3] = 5;
            jeu[1][1] = 2;
            jeu[1][2] = 2;
            jeu[1][3] = 4;
            jeu[2][1] = 2;
            jeu[2][2] = 2;
            jeu[2][3] = 3;
            jeu[3][0] = 0;
            jeu[3][1] = 1;
            jeu[3][2] = 2;
            jeu[3][3] = 2;
            couleur[3][0] = 31;
            posxr = -1;
            x = 3;
            y = 0;
        }else if (n == 15)
        {
            jeu[0][0] = 1;
            jeu[0][1] = 1;
            jeu[0][2] = 1;
            jeu[0][3] = 3;
            jeu[0][4] = 4;
            jeu[1][0] = 1;
            jeu[1][2] = 1;
            jeu[1][3] = 3;
            jeu[1][4] = 5;
            jeu[2][0] = 1;
            jeu[2][1] = 0;
            jeu[2][2] = 1;
            jeu[2][3] = 1;
            jeu[2][4] = 3;
            jeu[3][0] = 1;
            jeu[3][2] = 1;
            jeu[3][3] = 1;
            jeu[3][4] = 3;
            jeu[4][0] = 1;
            jeu[4][1] = 1;
            jeu[4][2] = 1;
            jeu[4][3] = 2;
            jeu[4][4] = 2;
            couleur[2][1] = 31;
            posxr = -1;
            x = 2;
            y = 1;
        }else if (n == 16)
        {
            jeu[0][1] = 7;
            jeu[0][2] = 6;
            jeu[0][3] = 3;
            jeu[0][4] = 2;
            jeu[1][0] = 9;
            jeu[1][1] = 8;
            jeu[1][2] = 5;
            jeu[1][3] = 4;
            jeu[1][4] = 1;
            jeu[1][5] = 0;
            jeu[2][1] = 4;
            jeu[2][2] = 4;
            jeu[2][3] = 4;
            jeu[3][1] = 4;
            jeu[3][3] = 4;
            jeu[4][1] = 4;
            jeu[4][2] = 4;
            jeu[4][3] = 4;
            couleur[1][5] = 31;
            posxr = -1;
            x = 1;
            y = 5;
        }else if (n == 17)
        {
            jeu[0][4] = 0;
            jeu[1][0] = 1;
            jeu[1][1] = 1;
            jeu[1][2] = 1;
            jeu[1][3] = 1;
            jeu[1][4] = 1;
            jeu[2][0] = 1;
            jeu[2][1] = 1;
            jeu[2][2] = 1;
            jeu[2][3] = 1;
            jeu[2][4] = 8;
            jeu[2][5] = 9;
            jeu[3][0] = 1;
            jeu[3][1] = 1;
            jeu[4][0] = 1;
            jeu[4][1] = 1;
            jeu[4][2] = 1;
            jeu[4][3] = 1;
            jeu[4][4] = 1;
            jeu[5][0] = 1;
            jeu[5][1] = 1;
            jeu[5][2] = 1;
            jeu[5][3] = 1;
            jeu[5][4] = 1;
            couleur[0][4] = 31;
            posxr = -1;
            x = 0;
            y = 4;
        }else if (n == 18)
        {
            jeu[0][1] = 9;
            jeu[0][2] = 8;
            jeu[0][3] = 7;
            jeu[1][0] = 4;
            jeu[1][1] = 4;
            jeu[1][2] = 4;
            jeu[1][3] = 6;
            jeu[2][0] = 4;
            jeu[2][1] = 0;
            jeu[2][2] = 4;
            jeu[2][3] = 5;
            jeu[3][0] = 4;
            jeu[3][1] = 4;
            couleur[2][1] = 31;
            posxr = -1;
            x = 2;
            y = 1;
        } else if (n == 19)
        {
            jeu[0][1] = 2;
            jeu[0][2] = 2;
            jeu[0][3] = 2;
            jeu[1][1] = 2;
            jeu[1][2] = 2;
            jeu[1][3] = 2;
            jeu[2][0] = 0;
            jeu[2][1] = 1;
            jeu[2][2] = 2;
            jeu[2][3] = 9;
            jeu[3][1] = 2;
            jeu[3][2] = 2;
            jeu[3][3] = 8;
            jeu[4][1] = 2;
            jeu[4][2] = 2;
            jeu[4][3] = 7;
            couleur[2][0] = 31;
            posxr = -1;
            x = 2;
            y = 0;
        }else if (n == 20)
        {
            jeu[0][0] = 4;
            jeu[0][1] = 4;
            jeu[0][2] = 4;
            jeu[0][3] = 4;
            jeu[0][4] = 4;
            jeu[1][0] = 4;
            jeu[1][1] = 2;
            jeu[1][2] = 2;
            jeu[1][3] = 2;
            jeu[1][4] = 4;
            jeu[2][0] = 4;
            jeu[2][1] = 2;
            jeu[2][2] = 0;
            jeu[2][3] = 4;
            jeu[2][4] = 4;
            jeu[3][0] = 4;
            jeu[3][1] = 2;
            jeu[3][2] = 2;
            jeu[3][3] = 4;
            jeu[3][4] = 4;
            jeu[4][0] = 4;
            jeu[4][1] = 4;
            jeu[4][2] = 4;
            jeu[4][3] = 5;
            jeu[4][4] = 6;
            couleur[2][2] = 31;
            posxr = -1;
            x = 2;
            y = 2;
        }
        else if (n == 21)
        {
            jeu[0][0] = 1;
            jeu[0][1] = 0;
            jeu[1][0] = 1;
            jeu[1][1] = 1;
            jeu[2][0] = 0;
            jeu[2][1] = 1;
            couleur[0][1] = 34;
            couleur[2][0] = 31;
            posxr = 2;
            posyr = 0;
            x = 0;
            y = 1;
        }
        else if (n == 22)
        {
            jeu[0][0] = 0;
            jeu[0][1] = 1;
            jeu[0][2] = 1;
            jeu[1][2] = 1;
            jeu[2][0] = 1;
            jeu[2][1] = 1;
            jeu[2][2] = 0;
            couleur[0][0] = 34;
            couleur[2][2] = 31;
            posxr = 2;
            posyr = 2;
            x = 0;
            y = 0;
        }
        else if (n == 23)
        {
            jeu[0][0] = 1;
            jeu[0][1] = 1;
            jeu[0][2] = 1;
            jeu[1][1] = 1;
            jeu[1][0] = 1;
            jeu[2][0] = 0;
            jeu[2][1] = 1;
            jeu[3][0] = 0;
            jeu[3][1] = 1;
            jeu[3][2] = 1;
            couleur[2][0] = 34;
            couleur[3][0] = 31;
            posxr = 3;
            posyr = 0;
            x = 2;
            y = 0;
        }
        else if (n == 24)
        {
            jeu[0][0] = 0;
            jeu[0][1] = 1;
            jeu[0][3] = 1;
            jeu[1][0] = 1;
            jeu[1][1] = 1;
            jeu[1][2] = 1;
            jeu[1][3] = 1;
            jeu[2][0] = 1;
            jeu[2][1] = 0;
            jeu[2][2] = 1;
            jeu[3][0] = 1;
            jeu[3][1] = 1;
            jeu[3][2] = 1;
            jeu[3][3] = 1;
            couleur[0][0] = 34;
            couleur[2][1] = 31;
            posxr = 2;
            posyr = 1;
            x = 0;
            y = 0;
        }
        else if (n == 25)
        {
            jeu[0][0] = 1;
            jeu[0][1] = 1;
            jeu[0][2] = 0;
            jeu[1][0] = 1;
            jeu[1][2] = 1;
            jeu[2][0] = 0;
            jeu[2][1] = 2;
            jeu[2][2] = 1;
            ;
            couleur[0][2] = 34;
            couleur[2][0] = 31;
            posxr = 2;
            posyr = 0;
            x = 0;
            y = 2;
        }
        else if (n == 26)
        {
            jeu[0][1] = 1;
            jeu[0][2] = 2;
            jeu[0][3] = 2;
            jeu[1][0] = 1;
            jeu[1][1] = 1;
            jeu[1][2] = 1;
            jeu[1][3] = 0;
            jeu[2][0] = 0;
            jeu[2][2] = 2;
            jeu[2][3] = 2;
            couleur[1][3] = 34;
            couleur[2][0] = 31;
            posxr = 2;
            posyr = 0;
            x = 1;
            y = 3;
        }
        else if (n == 27)
        {
            jeu[0][1] = 0;
            jeu[0][2] = 1;
            jeu[1][0] = 3;
            jeu[1][1] = 2;
            jeu[1][2] = 1;
            jeu[1][3] = 1;
            jeu[2][0] = 3;
            jeu[2][1] = 2;
            jeu[2][2] = 1;
            jeu[2][3] = 1;
            jeu[3][0] = 2;
            jeu[3][1] = 2;
            jeu[3][2] = 1;
            jeu[3][3] = 0;
            jeu[4][0] = 2;
            jeu[4][1] = 3;
            jeu[4][2] = 1;
            jeu[4][3] = 1;
            couleur[0][1] = 34;
            couleur[3][3] = 31;
            posxr = 3;
            posyr = 3;
            x = 0;
            y = 1;
        }
        else if (n == 28)
        {
            jeu[0][0] = 0;
            jeu[0][1] = 6;
            jeu[0][2] = 5;
            jeu[1][0] = 2;
            jeu[1][1] = 2;
            jeu[1][2] = 1;
            jeu[2][0] = 4;
            jeu[2][1] = 3;
            jeu[2][2] = 0;
            couleur[0][0] = 34;
            couleur[2][2] = 31;
            posxr = 2;
            posyr = 2;
            x = 0;
            y = 0;
        }
        else if (n == 29)
        {
            jeu[0][0] = 4;
            jeu[0][1] = 2;
            jeu[0][3] = 1;
            jeu[0][4] = 0;
            jeu[1][0] = 0;
            jeu[1][1] = 2;
            jeu[1][2] = 2;
            jeu[1][3] = 1;
            jeu[1][4] = 1;
            jeu[2][0] = 2;
            jeu[2][1] = 2;
            jeu[2][2] = 2;
            jeu[2][3] = 2;
            jeu[2][4] = 2;
            jeu[3][0] = 4;
            jeu[3][1] = 3;
            jeu[3][3] = 2;
            jeu[3][4] = 2;
            couleur[0][4] = 34;
            couleur[1][0] = 31;
            posxr = 1;
            posyr = 0;
            x = 0;
            y = 4;
        }
        else if (n == 30)
        {
            jeu[0][0] = 2;
            jeu[0][1] = 2;
            jeu[0][2] = 2;
            jeu[0][3] = 1;
            jeu[1][0] = 2;
            jeu[1][1] = 2;
            jeu[1][2] = 2;
            jeu[1][3] = 1;
            jeu[1][4] = 1;
            jeu[2][0] = 2;
            jeu[2][1] = 2;
            jeu[2][2] = 2;
            jeu[2][3] = 3;
            jeu[2][4] = 1;
            jeu[3][0] = 0;
            jeu[3][1] = 3;
            jeu[3][3] = 1;
            jeu[3][4] = 1;
            jeu[4][0] = 1;
            jeu[4][1] = 1;
            jeu[4][3] = 0;
            couleur[3][0] = 31;
            couleur[4][3] = 34;
            posxr = 3;
            posyr = 0;
            x = 4;
            y = 3;
        }

        // boucle du jeu
        while (end == 0)
        {
            // affichage du jeu
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (jeu[i][j] == -1)
                    {
                        printf(" ");
                    }
                    else if (jeu[i][j] == 0)
                    {
                        printf("\033[%dmX\033[0m", couleur[i][j]); // X = départ
                    }
                    else
                    {
                        if (couleur[i][j] == 0)
                        {
                            printf("%d", jeu[i][j]);
                        }
                        else
                        {
                            printf("\033[%dm%d\033[0m", couleur[i][j], jeu[i][j]);
                        }
                    }
                }
                printf("\n");
            }
            // afficher position X et Y et couleur
            printf("X = %d, Y = %d, couleur = ", x, y);
            if (couleur[x][y] == 34)
            {
                printf("\033[34m Bleu \n\033[0m");
            }
            else if (couleur[x][y] == 31)
            {
                printf("\033[31m Rouge \n\033[0m");
            }
            // choix du déplacement
            printf("Choisi un deplacement (1 :HAUT, 2:BAS, 3:GAUCHE, 4:DROITE) : \n");
            printf("Selectionner une autre couleur (6) : \n");
            printf("Effacer la chaine (8) : \n");
            printf("recommencer le niveau (5) : \n");
            printf("Arrete la partie(7): \n");
            int c;
            scanf("%d", &c);
            if (c == 1)
            {
                if (x > 0)
                {
                    if (jeu[x - 1][y] > 0 && jeu[x - 1][y] >= jeu[x][y])
                    {
                        if (couleur[x - 1][y] == 0)
                        {
                            couleur[x - 1][y] = couleur[x][y];
                            x--;
                        }
                    }
                }
            }
            else if (c == 2)
            {
                if (x < 9)
                {
                    if (jeu[x + 1][y] > 0 && jeu[x + 1][y] >= jeu[x][y])
                    {
                        if (couleur[x + 1][y] == 0)
                        {
                            couleur[x + 1][y] = couleur[x][y];
                            x++;
                        }
                    }
                }
            }
            else if (c == 3)
            {
                if (y > 0)
                {
                    if (jeu[x][y - 1] > 0 && jeu[x][y - 1] >= jeu[x][y])
                    {
                        if (couleur[x][y - 1] == 0)
                        {
                            couleur[x][y - 1] = couleur[x][y];
                            y--;
                        }
                    }
                }
            }
            else if (c == 4)
            {
                if (y < 9)
                {
                    if (jeu[x][y + 1] > 0 && jeu[x][y + 1] >= jeu[x][y])
                    {
                        if (couleur[x][y + 1] == 0)
                        {
                            couleur[x][y + 1] = couleur[x][y];
                            y++;
                        }
                    }
                }
            }
            else if (c == 5)
            {
                int compteur = 0;
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        if (jeu[i][j] == 0 && compteur == 0)
                        {
                            compteur++;
                            x = i;
                            y = j;
                        }
                        else if (jeu[i][j] > 0)
                        {
                            couleur[i][j] = 0;
                        }
                    }
                }
            }
            else if (c == 6)
            {
                if (posxr == -1)
                {
                    printf("\nVous ne pouvez pas changer de couleur\n");
                }
                else
                {
                    if (couleur[x][y] == 31)
                    {
                        posxr = x;
                        posyr = y;
                        x = posxb;
                        y = posyb;
                    }
                    else
                    {
                        posxb = x;
                        posyb = y;
                        x = posxr;
                        y = posyr;
                    }
                }
            }
            else if (c == 8)
            {
                int couleurtmp = couleur[x][y];
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        if (couleur[i][j] == couleurtmp)
                        {
                            if (jeu[i][j] > 0)
                            {
                                couleur[i][j] = 0;
                            }
                            else if (jeu[i][j] == 0)
                            {
                                x = i;
                                y = j;
                            }
                        }
                    }
                }
            }
            // test end
            end = 1;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (couleur[i][j] == 0)
                    {
                        if (jeu[i][j] > 0)
                        {
                            end = 0;
                        }
                    }
                }
            }
            if (c == 7)
            {

                end = 1;
            }
        }

        printf("Partie terminee !\n");
        printf("Voulez-vous rejouer ? (0 = oui, 1 = non) : ");
        scanf("%d", &logicielTourne);
    }
    printf("Programme termine");
}
