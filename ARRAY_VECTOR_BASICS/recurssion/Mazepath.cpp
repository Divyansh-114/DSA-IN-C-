#include<iostream>
using namespace std;
// in this we have 4 pointers 2 for source and 2 for end
int mazepath(int sr,int sc,int er,int ec){
    if(sr==er && sc==ec){
        return 1;
    }
    if(sr>er || sc>ec){
        return 0;
    }
    int right=mazepath(sr,sc+1,er,ec);
    int down=mazepath(sr+1,sc,er,ec);
    return right+down;
}
// in this we have only 2 pointers for row and column 
int maze2(int row ,int col){
    if(row<1 || col<1){
        return 0;
    }
    if(row==1 && col==1)
    return 1;
    int right=maze2(row,col-1);
    int down=maze2(row-1,col);
    return right+down;
}
void printpath(int sr,int sc,int er,int ec,string ans){
    if(sr==er && sc==ec){
        cout<<ans<<endl;
        return;
    }
    if(sr>er || sc>ec){
        return;
    }
    printpath(sr,sc+1,er,ec,ans+'R');
    printpath(sr+1,sc,er,ec,ans+'D');
    return;
}
void printpath2(int row ,int col,string ans){
    if(row<1 || col<1){
        return;
    }
    if(row==1 && col==1){
        cout<<ans<<endl;
        return;
    }
    printpath2(row,col-1,ans+"R");
    printpath2(row-1,col,ans+"D");
    return;
}
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n>>m;
    cout<<mazepath(1,1,n,m);
    cout<<endl;
    printpath(1,1,n,m," ");
    cout<<endl;
    cout<<maze2(n,m);
    cout<<endl;
    printpath2(n,m," ");
    return 0;  
}