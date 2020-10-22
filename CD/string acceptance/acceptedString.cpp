#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char string[20];
    int state = 0, count = 0;
    cout<<"NAME : Tarandeep Singh"<<endl;
    cout<<"Roll Number : 1816110219 "<<endl;
    cout << "the grammar is: S->aS, S->Sb, S->ab \n";
    cout << "enter the string to be checked \n";
    cin >> string;
    while (string[count] != '\0')
    {
        switch (state)
        {
        case 0:
            if (string[count] == 'a')
                state = 1;
            else
                state = 3;
            break;
        case 1:
            if (string[count] == 'a')
                state = 1;
            else if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        case 2:
            if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        default:
            break;
        }
        count++;
        if (state == 3)
            break;
    }
    if (state == 2)
        cout << "string is accepted";
    else
        cout << "string is not accepted";
    return 0;
}
