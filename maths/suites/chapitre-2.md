# Le raisonnement par récurrence

Propriété : pour tout $n \in \mathbb N$, on note $(P_n)$ la propriété : $2^n \geq n + 1$.

- $n = 1$ : $2^1 \geq 1 + 1 \Leftrightarrow 2 \geq 2$
- $n = 2$ : $2^2 \geq 2 + 1 \Leftrightarrow 4 \geq 3$

## 1ère étape : Initialisation

On vérifie pour le plus petit entier naturel de la propriété que celle-ci est vraie (en l'occurence pour $n = 0$).

On a donc bien $P_0$ qui est vérifiée : $2^0 \geq 0 + 1 \Leftrightarrow 1 \geq 1$

## 2ème étape : Hérédité

On prend un indice au hasard : soit $n \in \mathbb N$ un entier naturel fixé. On suppose que $P_n$ est vraie, et on veut démontrer que $P_{n+1}$ est vraie

Comme $P_n$ est vraie, on a : $2^n \geq n + 1 \Leftrightarrow 2 \times 2^n \geq 2(n+1) \Leftrightarrow 2^{n+1} \geq 2n + 2$

Or pour tout $n \in \mathbb N$ : $2n \geq n$

D'où : $2^{n+1} \geq n + 2$ donc $P_{n+1}$ est vérifiée

## 3ème étape : Conclusion

Soit $(u_n) _ {n \in \mathbb N}$ par :

- $u_0 = -3$
- $u_{n+1} = 5 - 4u_n$


