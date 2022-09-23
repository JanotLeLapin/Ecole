# Suites

## Exercices de rappels & correction partielle

### Exercice 1

On considère la suite arithmétique ($u_n$) définie pour tout entier naturel n de raison 3 et de premier terme valant -5.

1. Calculer $u_1$ et $u_{37}$.
2. Déterminer le sens de variations de cette suite.

#### Question 1

Comme $(u_n)$ est une suite arithmétique de raison $r$, on sait par définition que $u_n$ vaut $u_0 + r \times n$. Ainsi :

- $u_1 = u_0 + r \times 1 = -5 + 3 = -2$
- $u_{37} = u_0 + r \times 37 = -5 + 3 \times 37 = -5 + 111 = 106$

#### Question 2

Par définition, pour tout $n \in \mathbb{N}$, $u_{(n + 1)} = u_n + r$

La raison de $(u_n)$ est strictement positive, donc $u_{(n + 1)} > u_n$

La suite $(u_n)$ est donc strictement croissante dans son ensemble de définition.

### Exercice 2

On considère les suites suivantes définies pour tout entier naturel $n$ :

- $w_n = 9 - 7n$
- $p_n = (-2)^n + 4$

Ces suites sont-elles arithmétiques ? Justifier rigoureusement.

#### Question 1

La suite $(w_n)$ est arithmétique, on peut identifier un premier terme valant 9 et une raison valant -7, et donc l'exprimer de manière récurrente :

```hs
w :: Int -> Int
w 0 = 9
w n = w (n - 1) - 7
```

#### Question 2

- $p_0 = (-2)^0 + 4 = 1 + 4 = 5$
- $p_1 = (-2)^1 + 4 = -2 + 4 = 2$
- $p_2 = (-2)^2 + 4 = 4 + 4 = 8$

$8 - 2 \neq 2 - 5 \Leftrightarrow p_2 - p_1 \neq p_1 - p_0$

La suite $(p_n)$ n'est donc pas arithmétique car elle n'a pas de raison constante.

### Exercice 3

On considère la suite géométrique $(u_n)$ définie pour tout entier naturel $n$ de raison $q = \frac 1 3$ et de premier terme valant 438.

1. Calculer $u_1$ et $u_6$.
2. Déterminer le sens de variations de cette suite.

#### Question 1

Déterminons la formule explicite de la suite $(u_n)$.

On sait que la formule explicite d'une suite géométrique $(v_n)$ de raison $q$ vaut : $v_n = u_0 \times q^n$

La formule explicite de $(u_n)$ vaut donc : $u_n = 438 \times (\frac 1 3) ^ n$.

On peut maintenant utiliser cette formule pour calculer $u_1$ et $u_6$.

- $u_1 = 438 \times (\frac 1 3) ^ 1 = 438 \times \frac 1 3 = \frac {438} 3 = 146$
- $u_6 = 438 \times (\frac 1 3) ^ 6 = \frac {438} {3 ^ 6} = \frac {438} {729}$

#### Question 2

On sait que $u_0 = 438$ et que $q = \frac 1 3$

On sait aussi qu'une suite géométrique est strictement décroissante si $u_0 > 0$ et $0 < q < 1$.

Dans le cas de $(u_n)$, $438 > 0$ et $0 < \frac 1 3 < 1$. $(u_n)$ est donc strictement décroissante dans son ensemble de définition.

### Exercice 4

On considère les suites suivantes définies pour tout entier naturel n :

$a_n = \frac {5^n} 3$
$b_n = 2^{n+2} - 6$

Ces suites sont-elles géométriques ? Justifier rigoureusement.

#### Question 1

La suite $(a_n)$ est géométrique, on peut réécrire sa formule explicite ainsi : $a_n = 5^n \times \frac 1 3$ afin de mieux identifier son premier terme valant 5 et sa raison valant $\frac 1 3$. On peut aussi déterminer sa définition récurrente :

```hs
a :: Int -> Ratio
a 0 = 5
a n = a (n - 1) * (1 / 3)
```

#### Question 2

On calcule les trois premiers termes de la suite $(b_n)$ :

- $b_0 = 2^{0+2} - 6 = 2^2 - 6 = 4 - 6 = -2$
- $b_1 = 2^{1+2} - 6 = 2^3 - 6 = 8 - 6 = 2$
- $b_2 = 2^{2+2} - 6 = 2^4 - 6 = 16 - 6 = 10$

$\frac {b_2} {b_1} \neq \frac {b_1} {b_0} \Leftrightarrow \frac {10} 2 \neq \frac 2 {-2}$

La suite $(b_n)$ n'est donc pas géométrique car elle n'a pas de raison constante.

