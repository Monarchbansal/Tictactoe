#include <iostream>
using namespace std;

int main()
{
    char playingboard[3][3]{
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    printplayingboard();
    int Xchoice;
        
    cout <<"Player X chose the placing between 1-9:";
    cin >> Xchoice;

    int row= (Xchoice-1)/3;
    int column= (Xchoice-1)%3;

    playingboard[row][column] = 'X';

    printplayingboard();

    return 0;
}

 


    
