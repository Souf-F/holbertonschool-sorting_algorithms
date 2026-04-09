# 🔄 Sorting Algorithms

## 📚 Description du Projet

Ce projet explore les algorithmes de tri fondamentaux en programmation. L'objectif est d'implémenter plusieurs algorithmes classiques, de comprendre leur fonctionnement, et d'analyser leur complexité temporelle dans différents scénarios.

## 🎯 Objectifs d'Apprentissage

- **Maîtriser les algorithmes de tri** : Bubble Sort, Insertion Sort, Selection Sort, Quick Sort
- **Analyser la complexité** : Notation Big O dans les cas best, average et worst
- **Manipulation de structures de données** : Tableaux et listes doublement chaînées
- **Optimisation** : Comprendre quand utiliser quel algorithme

## 🛠️ Algorithmes Implémentés

### 1. **Bubble Sort** 🫧
- Parcourt le tableau en comparant des paires d'éléments adjacents
- Échange les éléments s'ils sont dans le mauvais ordre
- Répète jusqu'à ce que le tableau soit trié

### 2. **Insertion Sort** 🔄
- Construit progressivement un tableau trié
- Prend chaque élément et l'insère à sa position correcte
- Particulièrement efficace sur les listes doublement chaînées

### 3. **Selection Sort** 🎯
- Trouve le plus petit élément et le place au début
- Répète pour le reste du tableau
- Simple mais pas optimal pour les grands ensembles

### 4. **Quick Sort** ⚡
- Utilise la stratégie "diviser pour régner"
- Choisit un pivot (dernier élément avec Lomuto)
- Partitionne et trie récursivement

## 📊 Complexités Temporelles

| Algorithme | Best Case | Average Case | Worst Case |
|------------|-----------|--------------|------------|
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |

## 📁 Structure du Projet
holbertonschool-sorting_algorithms/
├── 0-bubble_sort.c          # Implémentation Bubble Sort
├── 0-O                      # Complexité Bubble Sort
├── 1-insertion_sort_list.c  # Implémentation Insertion Sort
├── 1-O                      # Complexité Insertion Sort
├── 2-selection_sort.c       # Implémentation Selection Sort
├── 2-O                      # Complexité Selection Sort
├── 3-quick_sort.c           # Implémentation Quick Sort
├── 3-O                      # Complexité Quick Sort
├── sort.h                   # Header avec prototypes
├── print_array.c            # Fonction d'affichage tableau
├── print_list.c             # Fonction d'affichage liste
└── README.md                # Ce fichier
## 🚀 Compilation et Exécution

### Bubble Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble
```

### Insertion Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 1-insertion_sort_list.c 1-main.c print_list.c -o insertion
./insertion
```

### Selection Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 2-selection_sort.c 2-main.c print_array.c -o select
./select
```

### Quick Sort
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-quick_sort.c 3-main.c print_array.c -o quick
./quick
```

## 📝 Fichiers de Complexité

Chaque algorithme possède un fichier `-O` contenant ses complexités :
