#include "question1.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string;

bool test_config()
{
    return true;
}

void transcribe_dna_into_rna(std::string& dna)
{
    string rna = dna;
    for(auto& ch: rna)
    {
     if (ch == 'T') {
            ch = 'U';
        }
    }
    cout<<rna<<"\n";
    //return rna; 
}

string transcribe_dna_into_rna_1(std::string& dna)
{
   string rna = dna;
    for(auto& ch: rna)
    {
     if (ch == 'T') {
            ch = 'U';
        }
    }
    return rna;
}
     