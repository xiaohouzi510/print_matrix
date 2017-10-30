#include <stdio.h>

int szArray[] = 
{
	1,2,3,4,
	5,6,7,8,
	9,10,11,12,
	13,14,15,16,
	17,18,19,20,
};

int main(int argc,char *argv[])
{
	int x = 5;
	int y = 4;
	int n = x;
	int m = y;
	//行列
	int x1R = 0;
	int y1C = m -1;
	int x2R = n - 1;
	int y2C = 0;
	int iIndex = 0;	
	int iCount = n;
	while(true)
	{
		iIndex = y2C; 
		iCount = m;
		while(--iCount >= 0)	
		{
			printf("x1 %d \n",szArray[iIndex + x1R * y]);
			++iIndex;
		}
		++x1R;
		--n;
		iIndex = x1R;
		iCount = n;

		while(--iCount >= 0)
		{
			printf("y1 %d \n",szArray[iIndex * y + y1C]);
			++iIndex;
		}

		--y1C;
		--m;	

		iIndex = y1C; 
		iCount = m;
		while(--iCount >= 0)
		{
			printf("x2 %d \n",szArray[iIndex + x2R * y]);
			--iIndex;
		}
		--x2R;
		--n;

		iIndex = x2R; 
		iCount = n;
		while(--iCount >= 0)
		{
			printf("y2 %d \n",szArray[iIndex * y + y2C]);
			--iIndex;
		}
		if(n <= 0 || m <= 0)
		{
			break;
		}

		++y2C;
		--m;
	}
	return 0;
}