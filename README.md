# Connect4
C Connect 4 Game, using CLI and Sockets


## Variables globales

 * **Int HIGH**  : Hauteur du plateau de jeu
 * **Int WIDTH** : Largeur du plateau de jeu
 * **Int PORT** : Port du serveur
 * **Const int MINPLAYER**  : Nombre de joueur minimum pour lancer une partie 
 * **Const int MAXPLAYER**   : Nombre de joueur maximum pour lancer une partie 
 * **int NBPLAYER** : Nombre de joueur dans la partie
 * **Char Array[WIDTH][HIGH]** : Grille de jeu
 * **Char Players[NBPLAYER]** : Tableau contenant les pions de chaque joueur
 * **Int line** : coordonée du dernier jeton posé 
 * **Int column**  : coordonée du dernier jeton posé 
 * **Int tokenLeft** : nombre de cases vides restantes (pour draw)
 * **Int mainMenuChoice** : choix du menu principal
 * **Int actualPlayer**  : référence le joueur actuel
 * **Int quit** : flag de ragequit
 * **Int win** : flag de victoire


## Fonctions


* **Int MainMenu()**

Retourne le choix effectué dans le Menu Principal


* **void displayMainMenu()**

 Affiche le menu Principal

* **Char **  choicetToken(int NBPLAYER)**

Prend en paramètre le nombre de joueurs , et retourne un tableau comportant les Tokens que chaque joueur à choisi (pion).

* **Void logAction()**

Log dans un fichier txt le contenu à Logger (passé en paramètre)

* **Void initArray(char ** Array)**

Initialisation de la grille de jeu a vide

* **Void displayArray(char ** Array)**

Affichage de la grille de jeu

* **int nextPlayer(int actualPlayer)**

 Prend en paramètre le joueur Actuel, et passe au joueur suivant

* **int placeToken(char ** Array,int actualPlayer)**

Permet au joueur en cours, de choisir la colonne où poser son pion, on s'assure qu'il place  son pion dans une colonne valide, que la colonne n'est pas pleine. Retourne la colonne choisie.

* **int Gravity(char ** Array,int column,int actualPlayer)**

Fait descendre le pion du joueur (passé en paramètre) dans la colonne (passée en paramètre), en s'assurant que le pion puisse descendre (cad tant que la hauteur du dessous n'est pas pleine et que l'on sorte pas du plateau de jeu)
On décrémente également le nombre de slots disponibles sur le plateau. Retourne la ligne sur laquelle le pion s'est arrété.

* **Void displayArray(char ** Array)**

Affiche la grille de jeu sur la sortie standard

* **Int Checkp4(int line,int column,int dx,int dy,char ** Array)**

Retourne la présence d'un puissance 4, en regardant si un puissance 4 existe dans au moins une des directions (vertical,horizontal,diagonale D1,diagonale D2)

* **int Search_H(int line,int column,int dx,int dy,char ** Array)**

 Retourne la présence d'un puissance 4 en horizontal (par rapport aux coordonnées du dernier pion placé), pour ce faire cette fonciton appelle Count_Left et Count_Right, et somme leurs valeurs de retour +1 et vérifie que la somme est >= 4.

* **int Search_V(int line,int column,int dx,int dy,char ** Array)**

 Retourne la présence d'un puissance 4 en vertical (par rapport aux coordonnées du dernier pion placé), pour ce faire cette fonciton appelle Count_Left et Count_Right, et somme leurs valeurs de retour +1 et vérifie que la somme est >= 4.

* **int Search_D1(int line,int column,int dx,int dy,char ** Array)**

 Retourne la présence d'un puissance 4 en Diagonale de gauche à droite (par rapport aux coordonnées du dernier pion placé), pour ce faire cette fonciton appelle Count_Left et Count_Right, et somme leurs valeurs de retour +1 et vérifie que la somme est >= 4.


* **int Search_D2(int line,int column,int dx,int dy,char ** Array)**

 Retourne la présence d'un puissance 4 en Diagonale de droite à gauche  (par rapport aux coordonnées du dernier pion placé), pour ce faire cette fonciton appelle Count_Left et Count_Right, et somme leurs valeurs de retour +1 et vérifie que la somme est >= 4.

* **Int Count_Left(int line,int column,int dx,int dy,char ** Array)**

Retourne le nombre de voisins gauche consécutifs de même pattern que le point de coordonnées passées en paramètre. 

* **Int Count_Right(int line,int column,int dx,int dy,char ** Array)**

Retourne le nombre de voisins droite consécutifs de même pattern que le point de coordonnées passées en paramètre

## Vue Globale

* ** Structure **

├── header
│   ├── count.h
│   ├── display.h
│   ├── log.h
│   ├── search.h
│   └── tocken.h
├── makefile
├── obj
├── README.md
└── src
    ├── count.c
    ├── display.c
    ├── log.c
    ├── main.c
    ├── search.c
    └── token.c

 
![alt text](https://githubimage.000webhostapp.com/connect4/overview.png "overview")
