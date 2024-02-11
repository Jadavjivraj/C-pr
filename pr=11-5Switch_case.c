#include<stdio.h>

int main()
{
	char a;
	
	printf("Enter any Vowel: ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a' :case 'A':
			printf("%c is Vowel");
			break;
			
		
		case 'e' :case 'E':
			printf("%c is Vowel");
			break;
			
		case 'i' :case 'I':
			printf("%c is Vowel",a);
			break;
			
			
		case 'o':case 'O':
			printf("%c is Vowel",a);
			break;
			
		case 'u':case 'U':
			printf("%c is Vowel",a);
			break;
			
		default:   
        printf("\nthe number is constant\n");
			
	}
	return 0;
}