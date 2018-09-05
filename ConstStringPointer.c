/* 错误代码 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char**p, *m;
	int i, j;
	char* name[] = { "Asia","America","Europe","Africa" };
	p = name;
	for (i = 0; i<3; i++)
		for (j = 0; j<4 - i; j++)
			if (strcmp(*(p + j), *(p + j + 1)) > 0)
			{
				m = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = m;
			}
	for (i = 0; i < 4; i++)
		cout << name[i] << "   ";
	cout << endl;

	return 0;
}

/* 可运行代码 */
int main()
{
	//char**p, *m;
	const char**p,*m;
	int i, j;
	//char* name[] = { "Asia","America","Europe","Africa" };
	const char* name[] = { "Asia","America","Europe","Africa" };
	p = name;
	for(i=0;i<3;i++)
		for(j=0;j<3/*4*/-i;j++)
			if (strcmp(*(p + j), *(p + j + 1)) > 0)
			{
				m = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = m;
			}
	for (i = 0; i < 4; i++)
		cout << name[i] << "   ";
	cout << endl;

    return 0;
}