#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#pragma once
using namespace std;

class Allele
{

  public:
	Allele();
	void WriteAlleleToFile(ofstream &);
	void setNucleotideSequence(string x);
	string getNucleotideSequence();
	void setVariantName(string x);
	string getVariantName();
	void setVariantType(string x);
	string getVariantType();
	bool RunUnitTests();

  private:
	string nucleotideSequence;
	string variantName;
	string variantType;
};