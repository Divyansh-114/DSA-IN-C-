#include <iostream>
using namespace std;
class crickter
{
private:
    string name;
    int age;
    int matches;
    int average;

public:
    void setname(string name)
    {
        this->name = name;
    }
    void setage(int age){
        this->age=age;
    }
    void setmatches(int matches){
        this->matches=matches;
    }
    void setaverage(int average){
        this->average=average;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int getmatches(){
        return matches;
    }
    int getaverage(){
        return average;
    }
};
 int main() {
    crickter player1;
    crickter player2;

    // Set data first
    player1.setname("MS DHONI");
    player1.setage(45);
    player1.setmatches(300);
    player1.setaverage(50);

    player2.setname("virat");
    player2.setage(37);
    player2.setmatches(600);
    player2.setaverage(40);

    // Then assign to array
    crickter crickters[2] = {player1, player2};

    // Now this will print 45
    cout << crickters[0].getage();
}


