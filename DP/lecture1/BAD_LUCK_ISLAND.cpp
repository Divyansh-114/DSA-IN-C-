#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int frocks(int r,int p,int s){
    if(r==0 || s==0)
    return 0.0;
    if(p==0)
    return 1.0;
    return frocks(r-1,p,s)+frocks(r,p-1,s)+frocks(r,p,s-1);

}
int fscissor(int r,int p,int s){
    if(s==0 || p==0)
    return 0.0;
    if(r==0)
    return 1.0;
    int total
    return frocks(r-1,p,s) * ( )+frocks(r,p-1,s)+frocks(r,p,s-1);

}
int fpaper(int r,int p,int s){
    if(p==0 || r==0)
    return 0.0;
    if(s==0)
    return 1.0;
    return frocks(r-1,p,s)+frocks(r,p-1,s)+frocks(r,p,s-1);
}