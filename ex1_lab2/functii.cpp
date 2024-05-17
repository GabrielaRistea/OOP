#include "functii.h"

void read(char str[256])
{
	cin.getline(str, 256);
}

bool compare_sequences(char s1[], char s2[])
{
	bool flag = false;
	bool aux = true;
	int length_s2 = strlen(s2);
	int length_s1 = strlen(s1);
	if(length_s1 > length_s2) {
		return flag; // Dacă subsirul este mai lung decât șirul în care căutați, nu poate fi găsit.
	}

	for (int index1 = 0; index1 <= length_s2 - length_s1; index1++) // Parcurgem șirul în care căutăm pentru a găsi subsirul.
	{
		bool aux = true;
		for (int index2 = 0; index2 < length_s1; index2++) // Comparam subsirul cu porțiuni de aceeași lungime din șirul principal.
		{
			if (s1[index2] != s2[index1 + index2]) // Dacă găsim o diferență în caractere, setăm "aux" la "false" și ieșim din buclă.
			{
				aux = false;
				break;
			}
		}
		if (aux)
		{
			flag = true;
		}
	}
	return flag;
}


int search(char search_sequence[], char str_sequence[], int nr_sequence)
{
	int iterator;
	int freq = 0;
	for (iterator = 0; iterator < nr_sequence; iterator++) //se parcurge tabloul de siruri
	{
		read(str_sequence); // se citeste fiecare sir
		if (compare_sequences(search_sequence, str_sequence)) // se cauta secvnta data in sir
		{
			freq++; //se numara aparitiile secventei
		}
	}
	return freq;
}