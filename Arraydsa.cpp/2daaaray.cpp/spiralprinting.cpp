#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows and column";
    cin>>m>>n;
   int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>matrix[i][j];
        }
    }
    cout<<endl;
    int minrow=0,mincol=0;
    int maxrow=m-1,maxcol=n-1;
    while((minrow<=maxrow) && (mincol<=maxcol)){
        for(int j=mincol;j<=maxcol;j++){
            cout<<matrix[minrow][j];
        }
        minrow++;
          if(minrow>maxrow || mincol>maxcol)
        break;
        for(int i=minrow;i<=maxrow;i++){
            cout<<matrix[i][maxcol];
        }
        maxcol--;
          if(minrow>maxrow || mincol>maxcol)
        break;
        for(int j=maxcol;j>=mincol;j--){
            cout<<matrix[maxrow][j];
        }
        maxrow--;
          if(minrow>maxrow || mincol>maxcol)
        break;
        for(int i=maxrow;i>=minrow;i--){
            cout<<matrix[i][mincol];
        }
        mincol++;
          if(minrow>maxrow || mincol>maxcol)
        break;
    }

}

