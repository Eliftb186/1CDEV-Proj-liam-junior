// on include les fichiers d'en-tête
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jeu[10][10]; // max tableau 10/10
    int couleur[10][10];
    int end = 0;
    int x; // ligne
    int y; // colonne
    int posxb;
    int posyb;
    int posxr;
    int posyr;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
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
        jeu[0][2] = 2;
        jeu[0][3] = 3;
        couleur[0][0] = 34;
        posxr = -1; // si il n'y qu'une couleur
        x = 0;
        y = 0;
    } else if (n == 22) { // un niveau avec des couleurs pour l'exemple
        jeu[0][0] = 0;
        jeu[0][1] = 1;
        jeu[0][2] = 1;
        jeu[1][2] = 1;
        jeu[2][2] = 0;
        jeu[2][1] = 1;
        jeu[2][0] = 1;
        couleur[0][0] = 34;
        couleur[2][2] = 31;
        posxr = 2;
        posyr = 2;
        x = 0;
        y = 0;
    }

    // boucle du jeu
    while (end == 0) {
        // affichage du jeu
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (jeu[i][j] == -1) {
                    printf(" ");
                } else if (jeu[i][j] == 0)
                {
                    printf("\033[%dmD\033[0m", couleur[i][j]); // D = départ
                } else {
                    if (couleur[i][j] == 0) {
                        printf("%d", jeu[i][j]);
                    } else {
                        printf("\033[%dm%d\033[0m", couleur[i][j],jeu[i][j]);
                    }
                }
            }
            printf("\n");
        }
        // choix du déplacement
        printf("Choisi un déplacement (1 ⬆️, 2 ⬇️, 3 ⬅️, 4 ➡️) : ");
        printf("recommencer le niveau (5) :");
        printf("Sélectionner une autre couleur (6) :");
        int c;
        scanf("%d", &c);
        if (c == 1) {
            if (x > 0) {
                if (jeu[x - 1][y] > 0 && jeu[x - 1][y] >= jeu[x][y]) {
                    if (couleur[x - 1][y] == 0) {
                        couleur[x - 1][y] = couleur[x][y];
                        x--;
                    }
                }
            }
        } else if (c == 2) {
            if (x < 9) {
                if (jeu[x + 1][y] > 0 && jeu[x + 1][y] >= jeu[x][y]) {
                    if (couleur[x + 1][y] == 0) {
                        couleur[x + 1][y] = couleur[x][y];
                        x++;
                    }
                }
            }
        } else if (c == 3) {
            if (y > 0) {
                if (jeu[x][y - 1] > 0 && jeu[x][y - 1] >= jeu[x][y]) {
                    if (couleur[x][y - 1] == 0) {
                        couleur[x][y - 1] = couleur[x][y];
                        y--;
                    }
                }
            }
        } else if (c == 4) {
            if (y < 9) {
                if (jeu[x][y + 1] > 0 && jeu[x][y + 1] >= jeu[x][y]) {
                    if (couleur[x][y + 1] == 0) {
                        couleur[x][y + 1] = couleur[x][y];
                        y++;
                    }
                }
            }
        } else if (c == 5) {
            int compteur = 0;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (jeu[i][j] == 0 && compteur == 0) {
                        compteur++;
                        x = i;
                        y = j;
                    } else if (jeu[i][j] >0){
                        couleur[i][j] = 0;
                    }
                }
            }
        } else if (c == 6) {
            if (posxr == -1) {
                printf("\nVous ne pouvez pas changer de couleur\n");
            } else {
                if (couleur[x][y] == 31) {
                    posxr = x;
                    posyr = y;
                    x = posxb;
                    y = posyb;
                } else {
                    posxb = x;
                    posyb = y;
                    x = posxr;
                    y = posyr;
                }
            }
        }
        // test end
        end = 1;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (couleur[i][j] == 0) {
                    if (jeu[i][j] > 0) {
                        end = 0;
                    }
                }
            }
        }
    }
    printf("Partie terminée !\n");   
}