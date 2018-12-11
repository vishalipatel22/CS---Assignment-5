/*	Project:    ASSIGNMENT #5
	Name:       VISHAL PATEL
    Partner:    NONE
    Class:      CSC 1810 - Section 2
*/

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
#include "Allele.h"

int choice = 0;
int count = 0;
string chromosomeName;
Allele Allele1;
Allele Allele2;

void choiceOneData()
{
	string geneName;
	string geneTrait;
	string allele1Variant;
	string allele1Type;
	string allele1Nucleotide;
	string allele2Variant;
	string allele2Type;
	string allele2Nucleotide;
	string addGene;

	if (choice == 1)
	{

		cout << "Please enter the following data: " << endl;
		cout << endl;

		cout << "What is the name of the new gene? (e.g. TZ458): ";
		cin.ignore();
		getline(cin, geneName);

		cout << "What is the gene trait? (e.g. eye color): ";
		getline(cin, geneTrait);

		cout << "What is the allele 1 variant? (e.g. brown/blue/etc.): ";
		getline(cin, allele1Variant);
		Allele1.setVariantName(allele1Variant);

		cout << "What is allele 1 type? (e.g. dominant or recessive): ";
		getline(cin, allele1Type);
		Allele1.setVariantType(allele1Type);

		cout << "What is allele 1 nucleotide sequence? (e.g. AGTC): ";
		getline(cin, allele1Nucleotide);
		Allele1.setNucleotideSequence(allele1Nucleotide);

		cout << "What is the allele 2 variant? (e.g. brown/blue/etc.): ";
		getline(cin, allele2Variant);
		Allele2.setVariantName(allele1Variant);

		cout << "What is allele 2 type? (e.g. dominant or recessive): ";
		getline(cin, allele2Type);
		Allele2.setVariantType(allele1Type);

		cout << "What is allele 2 nucleotide sequence? (e.g. AGTC): ";
		getline(cin, allele2Nucleotide);
		Allele2.setNucleotideSequence(allele1Nucleotide);

		cout << "Would you like to add a new gene? (y/n): ";
		getline(cin, addGene);

		while (addGene != "n")
		{
			choiceOneData();
		}
	}
};

void menu()
{

	//Returns the user a choice
	while (choice != 6)
	{
		cout << "==============================" << endl;
		cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
		cout << "<	{Menu Display}	     >" << endl;
		cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
		cout << "==============================" << endl;
		cout << "| 1 – Create chromosome" << endl;
		cout << "| 2 – Analyze chromosome" << endl;
		cout << "| 3 – Output chromosome to file" << endl;
		cout << "| 4 – Input chromosome from file" << endl;
		cout << "| 5 – Combine chromosomes" << endl;
		cout << "| 6 – Quit" << endl;

		cout << endl;

		//Tells user to create a chromosome to avoid error
		if (chromosomeName == "")
		{
			cout << "----------------------------------------------------" << endl;
			cout << "|  Please input chromosome data first! (Choice #1) |" << endl;
			cout << "----------------------------------------------------" << endl;
			cout << endl;
		}

		cout << "Please enter your choice (1-6): ";
		cin >> choice;
		cout << endl;

		cout << "-------------------------------" << endl;
		cout << endl;

		choiceOneData();
	}
}

int main()
{
	menu();

	/*Allele a;
	string y = a.getVariantName();
	cout << y;
	Allele b;
	b.setVariantName("Bye");
	cout << b.getVariantName();*/

	return 1;
}

/*Each class needs a header and .cpp files*/