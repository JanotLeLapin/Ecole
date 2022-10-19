# 1. Rappels de première

## Définition

Soit $f$ une fonction dérivée sur un intervalle $I$ et soient $a \in I$ et $b \in I$.
Le **taux de variations (ou taux d'acroissement)** entre $a$ et $b$ est égal à $\frac {f(b) - f(a)} {b - a}$

Soit $f$ une fonction dérivée sur un intervalle $I$ et soient $a \in I$ et $h \in \mathbb R$ tel que $a + h \in I$.
On dit que $f$ est **dérivable** en $a$ noté $f'(a)$ si la limite lorsque $h$ tend vers 0 du taux de variations de $f$ entre $a$ et $a + h$ est unique :

$f'(a) = \lim_{h \to 0} \frac {f(a + h) - f(a)} h$

### Remarque

Soit $A (a; f(a))$ et $B (b; f(b))$ alors la droite $(AB)$ a pour coefficient directeur le taux de variations entre $a$ et $b$.

### Propriété

Soit $f$ une fonction définie et dérivable sur un intervalle $I$ et $a \in I$. Alors la tangente à $f$ en $a$, notée $T_a$, admet comme coefficient directeur $f'(a)$ et admet comme équation de droite : $y = f'(a)(x - a) + f(a)$

### Remarque

La fonction racine carrée définie sur ${\mathbb R} _ +$ et dérivable sur ${\mathbb R} _ + ^ \star$ . Elle n'est donc pas dérivable sur 0.

### Théorème

Soit $f$ une fonction définie et dérivable sur un intervalle $I$. Alors on a :

- Si pour tout $x \in I ; f'(x) < 0$ alors $f$ est strictement décroissante sur $I$.
- Si pour tout $x \in I ; f'(x) > 0$ alors $f$ est strictement croissante sur $I$.

### Théorème

Soit $f$ une fonction définie et dérivable sur $I$.

- Pour tout $x \in I : f'(x) \leq 0 \Leftrightarrow f$ est décroissante sur $I$.
- Pour tout $x \in I : f'(x) \geq 0 \Leftrightarrow f$ est croissante sur $I$.

### Théorème

Soit $f$ une fonction définie et dérivable sur $I$ et soit $x_0 \in I$.

- Si $f$ admet un extremum local en $x_0$ alors $f'(x_0) = 0$.
- Si $f'(x_0) = 0$ et si $f'$ change de signe en $x_0$ alors $f$ admet un extremum local en $x_0$

# Composée de fonctions

## Définition

Soit $f$ une fonction définie sur $D_f$ et $g$ une fonction définie sur $D_g$. Alors la **composée** de $f$ par $g$, notée $g \circ f$, est la fonction définie sur l'ensemble $E$ des $x \in D_f$ tels que $f(x) \in D_g$, tel que pour tout $x \in E$ :

- $g \circ f \colon E \to \mathbb R$
- $g \circ f \colon x \to g(f(x))$

### Remarque

La composée n'est pas commutative : $f \circ g \neq g \circ f$

### Propriété

- Soit $f$ définie et dérivable sur $I$
- Soit $g$ définie et dérivable sur $J$
- Soit $E$ l'ensemble des réels $x \in I$ tels que $f(x) \in J$.

Alors la composée de $f$ par $g$ ($g \circ f$) est dérivable sur $E$ et pour tout $x \in E$ :

$( \circ f)'(x) = f'(x) \times g' \circ f(x)$

### Exemple

- $(e^{u(x)})' = u'(x) \times e^{u(x)}$

