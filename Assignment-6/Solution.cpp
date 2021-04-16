#include <bits/stdc++.h>
#define N 8
int next_x[N] = {1,1,2,2,-1,-1,-2,-2};
int next_y[N] = {2,-2,1,-1,2,-2,1,-1};
using namespace std;
bool isValid(int x, int y)
{
	return ((x>=0 && y>=0) && (x<N && y<N));
}
bool isEmpty(int result[], int x, int y)
{
	return (isValid(x, y)) && (result[y*N+x] < 0);
}
int degree(int result[], int x, int y)
{
	int count = 0;
	for (int i = 0; i < N; ++i)
		if (isEmpty(result,(x + next_x[i]),(y + next_y[i])))
			count++;

	return count;
}
bool findNmove(int result[], int *x, int *y)
{
	int min_deg_index =-1,c,min_deg=(N+1),nx,ny;
	int start = rand()%N;
	for (int count = 0; count < N; ++count)
	{
		int i = (start + count)%N;
		nx = *x + next_x[i];
		ny = *y + next_y[i];
		if ((isEmpty(result, nx, ny)) &&
		(c = degree(result, nx, ny)) < min_deg)
		{
			min_deg_index = i;
			min_deg = c;
		}
	}

	if (min_deg_index == -1)
		return false;

	nx = *x + next_x[min_deg_index];
	ny = *y + next_y[min_deg_index];

	result[ny*N + nx] = result[(*y)*N + (*x)]+1;

	*x = nx;
	*y = ny;

	return true;
}
void printResult(int result[])
{
	for (int i=0;i<N;++i)
	{
		for (int j = 0; j < N; ++j)
			cout << result[j*N+i] <<" ";
		cout << endl;
	}
}
bool checkNeighbour(int x, int y, int xx, int yy)
{
	for (int i = 0; i < N; ++i)
		if (((x+next_x[i]) == xx)&&((y + next_y[i]) == yy))
			return true;

	return false;
}
bool knightTour()
{
	int result[N*N];
	for (int i = 0; i< N*N; ++i)
		result[i] = -1;

	int sx,sy;
	cin >> sx >> sy;
	
	int x = sx, y = sy;
	result[y*N+x] = 1; 

	for (int i=0;i<N*N-1;++i)
		if (findNmove(result,&x,&y) == 0)
			return false;

	if (!checkNeighbour(x,y,sx,sy))
		return false;

	printResult(result);
	return true;
}
int main()
{
	
	cout <<"Enter the initial cordinates" << endl;
	while (!knightTour())
	{
	;
	}
	return 0;
}
