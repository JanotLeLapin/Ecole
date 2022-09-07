MOIS = [
    'Janvier',
    'Février',
    'Mars',
    'Avril',
    'Mai',
    'Juin',
    'Juillet',
    'Août',
    'Septembre',
    'Octobre',
    'Novembre',
    'Décembre',
]

class Date:
    def __init__(self, jour: int, mois: int, annee: int) -> None:
        self.jour = jour
        self.mois = mois
        self.annee = annee


    def __str__(self) -> str:
        return f"{self.jour} {MOIS[self.mois - 1]} {self.annee}"


    def __lt__(self, other) -> bool:
        l = [self.annee, self.mois, self.jour]
        m = [other.annee, other.mois, other.jour]
        for i in range(len(l)):
            if l[i] < m[i]:
                return True
            elif l[i] > m[i]:
                return False

        return False


d1 = Date(30, 1, 2000)
d2 = Date(27, 2, 2000)

print(d1 < d2)
print(d2 < d1)

