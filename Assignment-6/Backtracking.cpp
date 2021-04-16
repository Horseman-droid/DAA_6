#include <bits/stdc++.h>
using namespace std;
#define n 8
int x_Index[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int y_Index[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int isValid(int x,int y,int result[10][10])
{
    return (x>=0 && x<n && y>=0 && y<n && result[x][y] == -1);
}
int knightTour(int x,int y,int num,int result[8][8])
{
    int k, next_x, next_y;
    if (num == n*n)
        return 1;
    for (k=0;k<8;k++) {
        next_x = x + x_Index[k];
        next_y = y + y_Index[k];
        if (isValid(next_x,next_y,result)) {
            result[next_x][next_y] = num;
            if (knightTour(next_x,next_y,num+1,result)== 1)
                return 1;
            else
                result[next_x][next_y] = -1;
        }
    }
    return 0;
}
int main()
{
   int sx,sy;
   cout << "Enter the initial coordinates" << endl;
   cin >> sx >> sy;
    int result[10][10];

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        result[i][j] = -1;

    result[sx][sy] =1;

    if (knightTour(sx,sy,1,result) == 0)
    {
        cout << "No Solution exists" << endl;
    }
    else
     {
          for(int i=0;i<n;i++)
          {
          for(int j=0;j<n;j++)
          {
            cout << " " << setw(2) << result[i][j] << " ";
          }
          cout << endl;
          }
     }

    return 0;
}
