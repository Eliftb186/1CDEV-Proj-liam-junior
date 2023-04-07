// on include les fichiers d'en-tête
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jeu[10][10];
    int couleur[10][10];
    int end = 0;
    int x; // ligne
    int y; // colonne
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
    if (n ==1){
        jeu[0][0] = 0;
        jeu[0][1] = 1;
        jeu[0][2] = 2;
        jeu[0][3] = 3;
        couleur[0][0] = 34;
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
        printf("Choisi un déplacement (haut, bas, gauche, droite) : ");
        char c;
        scanf("%s", &c);
        if (c == 'h') {
            if (x > 0) {
                if (jeu[x - 1][y] > 0 && jeu[x - 1][y] >= jeu[x][y]) {
                    if (couleur[x - 1][y] == 0) {
                        couleur[x - 1][y] = couleur[x][y];
                        x--;
                    }
                }
            }
        } else if (c == 'b') {
            if (x < 9) {
                if (jeu[x + 1][y] > 0 && jeu[x + 1][y] >= jeu[x][y]) {
                    if (couleur[x + 1][y] == 0) {
                        couleur[x + 1][y] = couleur[x][y];
                        x++;
                    }
                }
            }
        } else if (c == 'g') {
            if (y > 0) {
                if (jeu[x][y - 1] > 0 && jeu[x][y - 1] >= jeu[x][y]) {
                    if (couleur[x][y - 1] == 0) {
                        couleur[x][y - 1] = couleur[x][y];
                        y--;
                    }
                }
            }
        } else if (c == 'd') {
            if (y < 9) {
                if (jeu[x][y + 1] > 0 && jeu[x][y + 1] >= jeu[x][y]) {
                    if (couleur[x][y + 1] == 0) {
                        couleur[x][y + 1] = couleur[x][y];
                        y++;
                    }
                }
            }
        }
    }
}