#include<stdio.h>
#include<string.h>
#include<ctype.h>
void string_upper(char string[]) // self made function to convert to uppercase
{
	int k=0;
	while(string[k] !='\0')
	{
			if(string[k]>='a' && string[k]<='z'){
				string[k] =  string[k] - 32;
			}
			k++;
	}
}

int main(){
	int i,j;//,c=0;// c will take garbage value if not initialized with zero

	
	char a[100], b[100], c[100];
	printf("enter string: ");
	gets(a);
	printf("enter string: ");
	gets(b);



	/*for(i=0; i<=strlen(a); i++  ) // i is zero and will run less than or equal to the string
	{
		if(a[i]==' ' || a[i]=='\0') // a takes value of like a[o] a[1] a[2]
		{
			c++;
		}
	}*/
	for(i=0; i<=strlen(a); i++)
	{
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){ // 
			printf("\n %c %d - > (vowel) ", a[i], i);
		}
		else if(a[i] == ' ' || a[i] == '\0')
		{
			printf("\n  %c %d", a[i], i);
		}

		
		else if(a[i] == ' ' || a[i] == '\0'){
			printf("\n  %c %d, a[i], i);
		}
		
		else{
			printf("\n %c %d - > consonant", a[i], i);// strcmp inside printf works
			//printf("\n %c %d", b[i], i);

		}
		

	}

	for(i=0; i<=strlen(b); i++)
	{
		if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){ // 
		printf("\n %c %d - > (vowel) ", b[i], i);

		}
		else{
			printf("\n %c %d - > consonant", b[i], i);// strcmp inside printf works
			//printf("\n %c %d", b[i], i);

		}
		

	}
	printf("\n difference is: %d \n",strcmp(a,b));// strcmp inside printf works
	printf("\n concatenated: %s \n", strcat(a,b));
	strcpy(c,strcat(a,b));
	printf("copy of it stored in c: %s ",c );
	string_upper(c);
	printf("\n uppercase of the string: %s", c);
	//printf("%s",strupr(c));

	//printf("\nnumber of words: %d", c);
	//printf("\n");
	//printf("\n %c", a[2]);
	//printf("\n");
	//printf("")
	return 0;
}

