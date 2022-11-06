# Chapitre 4 : Dérivabilité et Continuité

## Contenu

- [Continuité](https://janotlelapin.github.io/Ecole/maths/continuite/derivabilite)

## Continuité

### Définition pas très rigoureuse

En première approche, on dira qu'une fonction est **continue** sur un intervalle I si on n'a pas besoin de "lever le stylo" en traçant sa courbe représentative.

### Propriétés (admises)

- Soit $f$ et $g$ deux fonctions continues sur $I$, soit $\lambda \in \mathbb R$. Alors $f+g$, $f \times g$, $\lambda f$ et $f^n$ sont continues sur $I$.
- La composée de fonctions continues est continue.
- Si $g \neq 0$ sur $I$ alors $\frac 1 g$ et $\frac f g$ sont continues sur I.
- Les fonctions affines, polynômiales et rationnelles sont des fonctions continues sur leur ensemble de définition.

### Propriété sur la dérivation

Soit $f$ une fonction dérivable sur un intervalle $I$.

Alors $f$ est continue sur $I$ : si une fonction est dérivable, alors elle est forcément continue.

### Remarque

Une fonction continue n'est pas forcément dérivable (exemple de la fonction absolue)

## Théorème des valeurs intermédiaires

Soit $f$ une fonction continue sur un intervalle $[c;b]$

Soit $k$ un réel compris entre $f(a)$ et $f(b)$. Alors il existe un réel $c$ appartenant à l'intervalle $[a;b]$ tel que : $f(c) = k$

## Corollaire du théorème des valeurs intermédiaires

Soit $f$ une fonction continue sur $[c;b]$ et **strictement** monotone sur $[a;b]$

Soit $k$ un réel compris entre $f(a)$ et $f(b)$

Alors il existe un **unique** réel $c \in [a;b]$ tel que : $f(c) = k$

### Propriété

Soit $f$ une fonction dérivable sur un intervalle $I$.

- Si $f'$ ne s'annule qu'en un nombre fini de points tout en étant strictement négative, alors $f$ est strictement décroissante.
- Si $f'$ ne s'annule qu'en un nombre fini de points tout en étant strictement positive, alors $f$ est strictement croissante.

### Exemple

Soit $f$ définie par :

$f(x) = 3x^3 - 6x^2 + 4x + 1$

Montrer que $f(x) = 0$ admet une unique solution sur $[-2;2]$ et donner un encadrement à $10^{-3}$ près de cette solution.

$f'(x) = 9x^2 - 12x + 4$

$\Delta = b^2 - 4 \times a \times c = 81 - 4 \times 12 \times 4 = -111$

Le discriminant de $f'$ est négatif, la fonction $f'$ n'a donc aucune racine. Comme $a$ est positif, la fonction $f$ est donc strictement positif pour tout $x \in I$.

$f(x) = 0$ admet donc une seule solution sur $I$.

