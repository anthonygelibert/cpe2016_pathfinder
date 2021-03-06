# cpe2016_pathfinder
## Objectif 

La recherche de chemins permettant de se rendre d’un point à un autre fait partie des problèmes de bases de la robotique mais aussi et surtout d’un bon nombre de jeux sur ordinateur. Nous proposons dans ce projet de mettre en œuvre l’algorithme le plus utilisé A* (lire A star) et éventuellement de le comparer à l’algorithme plus  naïf de Djikstra.  Le projet relève donc de trois aspects :
La création du terrain (vue comme un quadrillage) où pour chaque case est définie la présence ou l’absence d’obstacle (cf. l’exemple de terrain suivant).
L’exécution de l’algorithme A* (ce qui implique la mise en place des structures de données nécessaires) et donc l’obtention d’un chemin optimal de parcours. 
La représentation graphique du terrain, de l’ensemble des cases examinées par l’algorithme et enfin le tracé du chemin solution.
Eventuellement, il serait plus pratique de sauvegarder  les terrains (et donc de pouvoir les recharger).
 Il serait aussi intéressant de comparer l’algorithme A* avec d’autres comme par exemple celui de Djikstra qui revient à considérer que la fonction de coût F  vaut uniquement G et non
