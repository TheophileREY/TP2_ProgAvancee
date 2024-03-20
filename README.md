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

## Question 3

Classe Day
-> Représente un jour du mois.
- number : Le numéro du jour dans le mois.

Classe Month
-> Représente un mois de l'année.
- Attributs : name (nom du mois), daysCount (nombre de jours du mois), startDay (le jour de la semaine du premier jour du mois, avec 0 pour lundi et 6 pour dimanche), days (un vecteur contenant les jours du mois).
- Le constructeur initialise le mois avec son nom, son nombre de jours, et le jour de la semaine du premier jour. Il remplit également le vecteur days avec des objets Day.
- La méthode print affiche le mois, les jours de la semaine en entête, puis les numéros des jours en respectant le jour de début du mois et en allant à la ligne après chaque dimanche.

Classe Calendar
-> Représente un calendrier pour une année donnée.
- Attributs privés : year (année du calendrier), months (un vecteur contenant les mois de l'année).
- La méthode isLeapYear permet de voir si l'année est bissextile.
- La méthode getStartDayOfYear calcule le jour de la semaine du premier janvier de l'année.
- Le constructeur initialise l'année, puis remplit le vecteur months avec les 12 mois de l'année, en calculant le nombre correct de jours pour février selon si l'année est bissextile ou pas, et en ajustant le jour de début de chaque mois.
- La méthode print affiche chaque mois du calendrier en utilisant la méthode print de la classe Month.
