#include<iostream>
#include<stdlib.h>
using namespace std;
class book{
    public:
    string name;
    int price;
    int pages;
    public:
    int count_books(int p){
        if(price<p)
        return 1;
       else
       return 0;
    }
    bool  book_name(string book){
        if(book==name)
        return true;
        else
        return false;
    }
};
int main(){
 book harrypotter;
 harrypotter.name="divyansh";
 harrypotter.price=100;
 harrypotter.pages=200;
cout<<harrypotter.count_books(20);
cout<<harrypotter.book_name('');

}