#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	if (argc != 3)
	{
		printf("\n -- �Ű������� 2�� ����ϼ��� --\n");
		return;
	}

	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2], "w");

	for ( ; ; )
	{
		fgets(str, 199, rfp);

		if (feof(rfp))
		{	
			break;
		}
		else
		{
			fputs(str,wfp);
		}


	}

	fclose(rfp);
	fclose(wfp);
}