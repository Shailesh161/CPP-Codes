// Write a c++ program to remove vowels from a given string.
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// initializing variable
	char str[100];

	// accepting input
	cout << "Enter a string : "; cin >> str;
	
	int len = strlen(str);

	// iterating the string
	for(int i=0; i<len; i++)
	{   
	    // checking vowels.
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{

		    // deleting vowels by shifting left all upcoming characters left 
			for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		i--;
		len--;
		}
	}
	// can directly print str
	// as '\0' also shifted left as many times as vowels were found
	cout << "After removing Vowels: " << str;

    return 0;	
}
