#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
    srand(time(NULL));
    int a,b,c;
    int mapArr[33][24];
    a=rand()%2 + (0) ;
    b=rand()%2 + (0) ;
    c=rand()%2 + (0) ;
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<33;j++)
        {
            mapArr[i][j]= rand()% 3 + a ;
            cout<<setw(2);
            if(i==0 || j==0 || i==23 || j==32)
            {
                mapArr[i][j]=2;
            }
            /*if(mapArr[i][j]==3)
            {
                mapArr[i][j]=1;
            }*/
            if(i==23 && (j==15 || j==16 || j==30 || j==31))
            {
                mapArr[i][j]=3;
            }
           if(mapArr[i][j]==1 || mapArr[i][j] == 0)
            {
                cout<<" ";
            }
            else if(mapArr[i][j]==2)
            {
                cout<<char(127);
            }
            else if(mapArr[i][j]==3)
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}



//srand(time(NULL));
//cout<<mapArr[i][j]<<",";
