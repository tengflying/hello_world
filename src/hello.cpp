#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int main() {
    srand (time(NULL));  
    while (1) {
        cout<<"new game and a new num between 0-9999 us generated\n"; 
        int m = rand()%10000; 
        cout<<"play the game [y/n]\n";
        char a; cin>>a; 
        if (a == 'n') {
            break; 
        } else if (a == 'y') { 
            int num = -1;
            int low = 0; 
            int up  = 10000;
            int round = 0;
            while (num != m && round < 20) {
                cout<<"enter a num please\n";
                cin>>num; 
                if (num >  m) {
                   up = (up > num) ? num : up; 
                   cout<<"from "<<low<<" "<<up<<"\n"; 
                } else if (num == m) {
                   break; 
                } else { //num < m
                   low = (num > low)?num: low; 
                   cout<<"from "<<low << " " <<up<<"\n"; 
                }
                round ++;
            }
        } else {
           cout<<"[y/n]\n\n"; 
        }
    }
    return 1; 
}
