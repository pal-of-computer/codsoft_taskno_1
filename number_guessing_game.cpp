#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int n;
    int max = 100;
    int min = 1;
    int to_guess = min + rand()%(max-min+1);
    while(1) {
        cout << "enter a number :";
        cin >> n;
        if(n > to_guess) cout << "too high" << endl;
        else if(n < to_guess) cout << "too low" << endl;
        else {
            cout << "you guessed it correct";
            break;
        }
    }

    return 0;
}