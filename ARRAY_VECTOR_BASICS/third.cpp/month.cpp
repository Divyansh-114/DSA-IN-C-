#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;
    switch(month) {
        case 1:
        cout<<"january";
        cout<<"31 days";
        break;      

        case 2:     
        cout<<"february";
        cout<<"28 days (29 in leap years)"; 
        break;  
        case 3:                     


        cout<<"march";      



        cout<<"31 days";        

        break;
        case 4:     
        cout<<"april";      
        cout<<"30 days";        
        break;      
        case 5:     
        cout<<"may";      
        cout<<"31 days";        
        break;      
        case 6:     
        cout<<"june";      
        cout<<"30 days";        
        break;
        case 7:     
        cout<<"july";      
        cout<<"31 days";        
        break;  
        case 8:     
        cout<<"august";      
        cout<<"31 days";        
        break;
        case 9:
        cout<<"september";
        cout<<"30 days";
        break;
        case 10:
        cout<<"october";
        cout<<"31 days";
        break;

        case 11:
        cout<<"november";
        cout<<"30 days";
        break;  
        case 12:
        cout<<"december";
        cout<<"31 days";
        break;  
        default:
        cout<<"Invalid month number";
        break;

}
}