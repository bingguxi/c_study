#include <stdio.h>

void main()
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	rfp = fopen("c:\\windows\\win.ini", "r");
	wfp = fopen("c:\\c_study\\data5.txt", "w");

	for ( ;; )
	{
		fgets (str, 200, rfp);

		if (feof(rfp))
			break;

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
