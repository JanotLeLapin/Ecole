# Chapitre 1 - Rappels sur les suites.

## I - Sens de variations

### Définitions

Soit $(u_n) _ {n \in \mathbb N}$ une suite réelle.

- $(u_n)$ est une **suite croissante** si, pout tout $n \in \mathbb N$ : $u_n \leq u_{n+1}$
- $(u_n)$ est une **suite décroissante** si, pour tout $n \in \mathbb N$ : $u_n \geq u_{n+1}$
- $(u_n)$ est **monotone** si $(u_n)$ est croissante ou décroissante

Remarque : une suite n'est pas forcément monotone.

### Montrer la monotonie d'une suite

On étudie le signe de $u_{n+1} - u_n$ pour tout $n \in \mathbb N$ :

- si $u_{n+1} - u_n \leq 0$ alors $(u_n)$ est décroissante.
- si $u_{n+1} - u_n \geq 0$ alors $(u_n)$ est croissante

Soit $(u_n) _ {n \in \mathbb N} définie par : $u_n = n^2 - n$

Pour tout $n \in \mathbb N$ :

$u_{n+1} - u_n = (n+1)^2 - (n+1) - (n^2 - n) = n^2 + 2n + 1 - n - 1 - n^2 + n = 2n$

Comme $n \in \mathbb N$ alors $n \geq 0$ donc $2n \geq 0$

Ainsi pour tout $n \in \mathbb N$ : $u_{n+1} - u_n \geq 0$, donc $(u_n)$ est croissante

## II - Majoration, Minoration

### Définitions

Soit $(u_n) _ {n \in \mathbb N}$ une suite réelle :

- $(u_n) _ {n \in \mathbb N}$ est **majorée** s'il existe un réel $M$ tel que pour tout $n \in \mathbb N$ : $u_n \leq M$
- $(u_n) _ {n \in \mathbb N}$ est **minorée** s'il existe un réel $M$ tel que pour tout $n \in \mathbb N$ : $u_n \geq M$
- $(u_n) _ {n \in \mathbb N}$ est **bornée** si $(u_n)$ est majorée et minorée

Remarque : Si une suite est croissante, elle est minorée par son premier terme. Si elle est décroissante, elle est majorée par son premier terme.

Remarque : Si une suite est majorée par M alors elle est aussi majorée par tous les réels dans : $[M; + \infty]$

Méthode : Pour montrer qu'une suite est minorée ou majorée par M, on peut étudier le signe de $u_n - M$ pour tout $n \in \mathbb N$



