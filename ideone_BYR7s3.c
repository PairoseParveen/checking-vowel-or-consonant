#include <stdio.h>

int main() {
	char c;
	printf("Enter character");
	scanf("%c",&c);
	if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
	{
		printf("the char is vowel");
	}
	else
	{
		printf("the char is consonants");
	}
	return 0;
}
