#include <stdio.h>
#include "template.h"



int main(){

	float a = 0.1f;
	float b = 0.5f;
	float c = 0.0f;

	int d = 2;
	int e = 3;
	int f = 0;

	c = getMax<float>(a, b);
	f = getMax<int>(d, e);

	printf("This is a template.\n");
	printf("c = %f\n", c);
	printf("f = %d\n", f);

	CacheLine<SECTOR_NUM> Line;
	Line.SetSector(0, 10);
	Line.SetSector(1, 20);
	int Data = 0;
	Line.GetSector(0, Data);
	printf("GetSector = %d\n", Data);

	Cache< CacheLine<2> > m_Cache(2, 2);

	return 0;
}