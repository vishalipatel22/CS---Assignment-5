#include "Allele.h"

Allele::Allele()
{

	nucleotideSequence = "";
	variantName = "";
	variantType = "";
}

void Allele::WriteAlleleToFile(ofstream &)
{
}

void Allele::setNucleotideSequence(string x)
{

	nucleotideSequence = x;
}

string Allele::getNucleotideSequence()
{

	return nucleotideSequence;
}

void Allele::setVariantName(string x)
{

	variantName = x;
}

string Allele::getVariantName()
{

	return variantName;
}

void Allele::setVariantType(string x)
{

	variantType = x;
}

string Allele::getVariantType()
{

	return variantType;
}

bool Allele::RunUnitTests()
{

	setNucleotideSequence("");
	if (getNucleotideSequence() != "")
	{
		cout << "   FAILED set/get NucleotideSequence" << endl;
	}
}