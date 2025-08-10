#include <iostream>

using namespace std;
int main()
{
    /* Loops in C++
    There are three type of loops in C++
    1. For Loop
    2> While Loop
    3. do-While loop
    */

    /* For Loop in C++ */
    //    int i=1;
    //    cout<<i;
    //    i++;

    // for(initialization; condition; updation)
    // {
    //     loop body(C++ Code);
    // }

    // for (int i = 0; i < 21; i++)
    // {
    //     /* code */
    //     cout << i <<endl;  
    // }

    // Example of infinite for loop  
    // for (int i = 1; 14 <= 21; i++)
    // {
    //     /* code */
    //     cout << i <<endl;  
    // }

    /* While Loop in C++ */
    /* Syntax */
    // while (condition)
    // {
    //     /* code */
    //     C++ Statements;
    // }

    // Printing 1 to 40 Using While Loop 
    // int i = 1;
    // while (i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop  
    //  int i = 1;
    //  while(true){
    //     cout<<i<<endl;
    //     i++;
    //  }

    /* Do While Loop in C++ */
    /* Syntax */
    // do 
    // {
    //     /* code */
    //     C++ Statements;
    // }while (condition);

    // Printing 1 to 40 Using do While Loop 
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (false);

    // Printing a table of 6 using do while loop
    int i = 6;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=30);


    return 0;
}