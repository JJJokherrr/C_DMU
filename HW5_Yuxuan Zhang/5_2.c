#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void main()
{
	FILE* fp_w = fopen("words.txt", "w");
	FILE* fp_r = fopen("words.txt", "r");
	char ch[1000];
	char c=' ',temp[1];
	int n_a=0, n_e=0, n_i=0, n_o=0, n_u=0, i=0;
	printf("Please enter some words to text document: ");
	int s = scanf("%s", ch);
	fprintf(fp_w, "%s",ch);
	fclose(fp_w);
	rewind(fp_r);
	while ((c = fgetc(fp_r)) != EOF)
	{

		switch (c)
		{
		case 'a':
			n_a++;
			i++;
			break;
		case 'e':
			n_e++;
			i++;
			break;
		case 'i':
			n_i++;
			i++;
			break;
		case 'o':
			n_o++;
			i++;
			break;
		case 'u':
			n_u++;
			i++;
			break;
		}
		
	}
	fclose(fp_r);
	printf("a:%d\te:%d\ti:%d\to:%d\tu:%d\n", n_a, n_e, n_i, n_o, n_u);
	printf("a:%d\te:%d\ti:%d\to:%d\tu:%d\n", 100 * n_a / i, 100 * n_e / i, 100 * n_i / i, 100 * n_o / i, 100 * n_u / i);
}
