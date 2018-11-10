/*designing a pokedex

Pokedex
	int numSeen;
	int maxPkm;
	//methods
	void add(); //mutator 
	bool = is PkmMaster = false;
	*/
	
class Pokedex { 
	public:
		/* mutator */
		void add(int numNew) { numSeen+=numDev; }
		/* accessor */
		bool isPokemonMaster const { return numSeen == maxPolemon; }
	private:
		int numseen;
		int maxPokemon;
};
	
Pokedex::Pokedex() {
	numSeen = 0;
	maxPoleman = 151;
}

int main() {
	Pokedex danielsPokemon = Pokedex();
	danielsPokedox.add(151);
	
	if (daniels.Pokedex.iPokemonMaster()) {
		cout << ":)\n";
	}
	else {
		cout << ":(\n"
	}
	return 0;
}

	
	