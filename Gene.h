#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <Allele.h>
#pragma once
using namespace std;

class Gene
{

  public:
	Gene();
	void WriteAlleleToFile(ofstream &);
	void setNameGene(string x);
	string getNameGene();
	void setTraitType(string x);
	string getTraitType();
	void setAllele1();
	// setAllele1
	// getAlle1
	// setAlle2
	// getAlle2
	Allele GetExpressedTrait();
	bool RunUnitTests();

  private:
	string nameGene;
	string traitType;
	Allele AlleleA;
	Allele AlleleB;
};