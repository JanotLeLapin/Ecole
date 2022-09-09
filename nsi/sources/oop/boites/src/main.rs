use rand::Rng;

#[derive(Clone, Copy)]
struct Boite(u32, u32, u32);
impl Boite {
    pub fn new(length: u32, width: u32, height: u32) -> Self {
        Self(length, width, height)
    }

    pub fn volume(&self) -> u32 {
        self.0 * self.1 * self.2
    }

    pub fn fits_in(&self, other: &Boite) -> bool {
        self.0 <= other.0
        && self.1 <= other.1
        && self.2 <= other.2
    }
}

impl std::fmt::Display for Boite {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(&format!("Box (length: {}, width: {}, height: {})", self.0, self.1, self.2))
    }
}

fn main() {
    let mut boites: Vec<Option<Boite>> = Vec::new();
    for _ in 0..20 {
        boites.push(Some(Boite::new(
            rand::thread_rng().gen_range(1..50),
            rand::thread_rng().gen_range(1..50),
            rand::thread_rng().gen_range(1..50),
        )));
    }

    boites.sort_by(|a, b| b.unwrap().volume().partial_cmp(&a.unwrap().volume()).unwrap());
    let mut current = boites[0].unwrap();
    for i in 1..boites.len() {
        let boite = boites[i].unwrap();
        if boite.fits_in(&current) {
            current = boite;
        } else {
            boites[i] = Option::None;
        }
    }

    let boites: Vec<Boite> = boites
        .iter()
        .filter(|boite| boite.is_some())
        .map(|boite| boite.unwrap()).collect();

    for boite in boites {
        println!("{}", boite);
    }
}

