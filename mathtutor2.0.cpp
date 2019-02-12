#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

void question(double &t0, double &t1, char &op);
void anscheck (double &t0, double &t1, double &t2, double &t3, char &op);


main()
{
    int x=0;
    double r[2], correctans, ans;
    char choice; // user choice for what kind of problem they want to solve.

    cout << string(50, '\n'); // appearing to clear the screen.
do {
    cout << "\nPlease choose what kind of problem you would like to solve by typing \"+\", \"-\", \"/\" or \"*\". \nIf you want to exit the program type \"x\":" << endl;
    cin >> choice;
    cout << string(50, '\n');

    switch (choice){
        case 43:
            srand (time(NULL)); //seeding for random number generation
            for (x=0; x<2; x++){    // generating random numbers
            r[x]= 1 + rand() % 400;
            }
            question(r[0], r[1], choice);
            correctans=r[0]+r[1] ;
            correctans=round(correctans*100)/100; // rounding the correct answer to 2.d.p.
            cout << "=" ;
            cin >> ans;  // waiting for response from user.
            anscheck(r[0], r[1], correctans, ans, choice);
            break;
        case 45:
            srand (time(NULL)); //seeding for random number generation
            for (x=0; x<2; x++){    // generating random numbers
            r[x]= 1 + rand() % 400;
            }
            question(r[0], r[1], choice);
            correctans=r[0]-r[1] ;
            correctans=round(correctans*100)/100; // rounding the correct answer to 2.d.p.
            cout << "=" ;
            cin >> ans;  // waiting for response from user.
            anscheck(r[0], r[1], correctans, ans, choice);
            break;
        case 47:
            srand (time(NULL)); //seeding for random number generation
            for (x=0; x<2; x++){    // generating random numbers
            r[x]= 1 + rand() % 400;
            }
            question(r[0], r[1], choice);
            correctans=r[0]/r[1] ;
            correctans=round(correctans*100)/100; // rounding the correct answer to 2.d.p.
            cout << "=" ;
            cin >> ans;  // waiting for response from user.
            anscheck(r[0], r[1], correctans, ans, choice);
            break;
        case 42:
            srand (time(NULL)); //seeding for random number generation
            for (x=0; x<2; x++){    // generating random numbers
            r[x]= 1 + rand() % 400;
            }
            question(r[0], r[1], choice);
            correctans=r[0]*r[1] ;
            correctans=round(correctans*100)/100; // rounding the correct answer to 2.d.p.
            cout << "=" ;
            cin >> ans;  // waiting for response from user.
            anscheck(r[0], r[1], correctans, ans, choice);
            break;
        case 120:
            break; // user has chosen to exit the program
        default:
            cout << "You have not typed a valid selection please try again.";
    }
} while (choice!=120);
    return 0;
}

void question(double &t0, double &t1, char &op){
    // Waffle to print randomly generated numbers AND align them in the console.
    cout << "Complete the following problem (give your answer to 2dp):" << endl ;
    if (t0>=1 && t0<10){
        cout << "   " << t0 << endl;
    }
    else if (t0>=10 && t0<100){
        cout << "  " << t0 << endl;
    }
    else {cout << " " << t0 << endl;}

    if (t1>=1 && t1<10){
        cout << op << "  " << t1 << endl << "-----" << endl ;
    }
     else if (t1>=10 && t1<100){
        cout << op << " " << t1 << endl << "-----" << endl ;
    }
    else {cout << op << t1 << endl << "-----" << endl ;}
}

void anscheck(double &t0, double &t1, double &t2, double &t3, char &op){

    if (t3==t2){
        cout << string(50, '\n'); // appearing to clear the screen.

        question(t0, t1, op);

        cout << "=" << t3 << endl;
        cout << "Congratulations! Your answer was correct!";
    }
    else {

        cout << string(50, '\n'); // appearing to clear the screen.

        question(t0, t1, op);
        cout << "=" << t3 << "X" << endl;
        cout << "Try again! That was not the correct answer. The correct answer was " << t2;
    }
}
