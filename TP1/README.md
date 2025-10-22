# 3A_TP_Algo
Pour lancer les différents exercices, il faut commenter/décommenter les parties corrspondates dans le CMakelist.txt.
## TD1
### 1 Pile
#### 1.1 Implémenter une pile à l'aide de tableaux
Cette 1ère pile à une longueur maximale définit à la création, car le tableau est de taille fixe. Cela implique aussi de réserver tout l'espace mémoire de la pile même lorsque cette dernière est vide.  
Elle implémente les méthodes push et pop.
#### 1.2 Implémenter une pile à l'aide d'une liste chaînée LIFO
Cette 2nd pile est implémentée par une liste chainée. Ainsi la taille maximale n'as pas besoin d'être définis.  
La taille est uniquement ce qui est requis, et la file s'agrandit ou rétrécit au besoin.  
Cependant, chaque bloc utilisé pour crée la pile est légérement plus volumineux car il y a besoin de stocker l'emplacement du noeu suivant, et car chaque noeu est une objet.  
Elle implémente les méthodes push et pop.  
### 2 File
#### 2.1 Implémenter une file d'attente à l'aide d'un tableau  
Cette file à une longueur maximale définit dans le code (10 000 annoncé par l'énoncé.) comme pour la pile en 1.1, l'espace est réservé des la création.  
Elle à aussi l'inconvénient d'être limité en usage, après les 10 000 ajouts, la file cesse de fonctionner (plus d'ajouts possibles).
#### 2.2 Implémenter une file d'attente à l'aide d'une liste circulaire
Cette file présente toujours le problème de taille en mémoire lors de la création, mais permet une continuité après avoir atteint 10 000 ajouts (et retraits).  
Elle ne peut évidemment pas prendre plus de valeurs que sa taille maximal.
#### 2.3 Implémenter une file d'attente à l'aide d'une liste chaînée FIFO
Cette file à une taille adaptable au besoin et permet un ajout et retrait de valeurs à l'infini.
### 3 Tas binaire
#### 3.1 Dessiner le tas après chaque ajout de ces nombres dans leur ordre
           188
        /       \
      90         100
     /  \       /   \
    27   75    63    95
    / \   / \   / \   / \
    5 12 17 26  8 32 45

#### 3.2 Dessiner le tas après chaque suppression de ces nombres du dernier tas obtenu en 3.1
           100
       /         \
     90            95
    /   \          /  \
    27   75        63   45
    / \   / \      / \
    5  12 17 26    8  32

#### 3.3 Implémenter les deux opérations Insérer et Extraire Max
Le tas-max est une structure où chaque parent est supérieur ou égal à ses enfants. La racine contient donc la valeur maximale. Les principales fonctions sont insert(x), qui ajoute un élément tout en maintenant la propriété du tas, et extract_max(), qui retire le plus grand élément (la racine).
#### 3.4 Mêmes questions pour un tas-min
                 5
           /             \
         8                 12
      /    \             /    \
    17     11         26     100
    / \    / \        / \     / \
    45 75  27 90      63 32   188 95



          8
      /        \
    11           12
    /   \         /   \
    17    27      26    100
    / \   / \    / \
    45 75 90 63 32 188 95


Le tas-min fonctionne de manière inverse : chaque parent est inférieur ou égal à ses enfants, et la racine contient la valeur minimale. Les principales fonctions sont insert(x), qui insère un élément en réorganisant le tas, et extract_min(), qui retire le plus petit élément (la racine).

## TD2

Dans cette partie, nous avons étudié deux approches de résolution de problèmes : la récursivité et la programmation dynamique.

### Exercice 4
Cela portait sur le calcul du PGCD de deux entiers à l’aide de l’algorithme d’Euclide récursif, basé sur la relation
PGCD(a,b)=PGCD(b,a%b) avec une condition d’arrêt lorsque b=0.

### Exercice 6
Cela traitait de la recherche de la plus longue sous-séquence croissante d’un tableau, en utilisant la programmation dynamique pour calculer progressivement la longueur maximale à partir des sous-problèmes déjà résolus.
