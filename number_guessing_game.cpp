#include <bits/stdc++.h>
#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int option, range, realnumber, guessed_num, count = 0;
    start:
    cout<<"------------ NUMBER GUESSING GAME ------------"<<endl;
    cout<<"Choose one option : "<<endl;
    cout<<"1. Play the Game "<<endl;
    cout<<"2. See the last Game Score "<<endl;
    cout<<"3. Exit Game "<<endl;
    cout<<"\nEnter Your Option : ";
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"\nLet's Start the Game..."<<endl;
            goto play;
            break;
        case 2:
            if(count == 0)
            {
                cout<<"\nYou haven't played the game yet..."<<endl;
            }
            else if(count == 1)
            {
                cout<<"\nYou won the last game in "<<count<<"st Try!"<<endl;
            }
            else
            {
                cout<<"\nYou won the last game in "<<count<<" Tries..."<<endl;
            }
            goto start;
            break;
        case 3:
            cout<<"\nThanks for Playing !!"<<endl;
            exit(0);
            break;
        default:
            cout<<"\nInvalid Option!! Please Try Again..."<<endl;
            goto start;
    }
    play:
    count = 1;
    cout<<"---------- NUMBER GUESSING GAME ----------"<<endl;
    cout<<"\nEnter the range of the numbers : ";
    cin>>range;
    srand(time(0));
    realnumber = rand() % (range+1);
    do
    {
        cout<<"\nEnter your guess number : ";
        cin>>guessed_num;
        if(guessed_num > realnumber)
        {
            count += 1;
            cout<<"The number is lower than your guess";
        }
        else if(guessed_num < realnumber)
        {
            count += 1;
            cout<<"The number is higher than your guess";
        }
        else
        {
            cout<<"\nGreat!! You guessed the correct number!!!";
            if(count == 1)
            {
                cout<<"\nYou guessed the number in "<< count <<"st Try!!!"<<endl;
            }
            else
            {
                cout<<"\nYou guessed the number in "<< count <<" Tries!!"<<endl;
            }
            goto start;
        }
    }
    while(guessed_num != realnumber);
    

    return 0;
}