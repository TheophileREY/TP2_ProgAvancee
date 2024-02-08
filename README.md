# TP2_ProgAvancee
## Question 1
Dans la version 1 (premier commit), on ne peut pas créer un objet Forme sans initialiser f0, f1, et f2 car il n'existe pas de constructeur par défaut. On ajoute la ligne suivante pour corriger ce problème :
```cpp
// Constructeur par défaut
Forme() : f0(0), f1(0), f2(0) {}
// Constructeur avec paramètres
Forme(int f0, int f1, int f2) : f0(f0), f1(f1), f2(f2) {}
```

Les modifications pour la derniere version de la Question 1 sont dans le dernier commit.
