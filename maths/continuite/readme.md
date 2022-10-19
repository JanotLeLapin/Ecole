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

