# Project-TicTacToe

## board.cpp, board.h

Le plateau de jeu est représenté par un std::array de 9 entiers qui peuvent être 0, -1 ou 1 :

- 0 représente l'absence de symbole.
- 1 représente les symboles du joueur (ou IA) en train de jouer.
- -1 représente les symboles de l'autre joueur (ou IA).
  
board.cpp contient des fonctions qui permettent de gérer certains aspects du plateau (affichage, initialisation, victoire et inversion des -1 et des 1).

## Agent.cpp, Agent.h

La structure Agent représente une entité qui peut jouer au morpion.
Sa méthode place_symbol place un 1 dans une case donnée du plateau.
Chaque Agent a un nom et un symbole avec lequel il joue.
Les structures Player et IA_random héritent de Agent.

## Player.cpp, Player.h

La structure Player représente un joueur.
Sa méthode play permet de demander au joueur d'entrer le coup qu'il souhaite effectuer puis place son symbole correspondant sur le plateau (si l'entrée n'est pas valide, on re-demande une entrée).

## IA_random.cpp, IA_random.h

La structure IA_random représente une IA qui joue au hasard.
Sa méthode play place son symbole sur le plateau, au hasard parmi les cases disponibles (on fait une liste des coups possibles puis on en prend un au hasard).

## IA_minmax.cpp, IA_minmax.h

La structure IA_minmax représente une IA qui joue en s'inspirant de l'algorithme min max.

## tictactoe.cpp, tictactoe.h

tictactoe.cpp contient toutes les fonctions qui permettent de lancer une partie, en combinant différentes fonctions des autres fichiers et en ajoutant des affichages.
Comme les Agent ne peuvent placer que des 1 sur le plateau, on inverse les -1 et les 1 du plateau quand on passe d'un joueur (ou IA) à l'autre. De cette manière, le 1 représente toujours les symboles du joueur qui est en train de jouer.