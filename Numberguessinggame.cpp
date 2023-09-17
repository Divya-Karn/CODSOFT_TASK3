#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
    cout<<"WELCOME TO NUMBER GUESSING GAME!"<<endl;
    cout<<"You have to guess a number between 1 and 100"<<endl;
    cout<<"You will need to choose the level and based on that level,you will have choices . " "Good Luck!";
    cout<<endl;

    while(true)
    {
         cout<<"Enter difficulty level: \n";
         cout<<"1 for easy!\t";
         cout<<"2 for moderate!\t";
         cout<<"3 for difficult! \t";
         cout<<"0 for ending the game! \n"<<endl;

    
    int difficultylevel;
    cout<<"ENTER THE DIFFICULTY LEVEL : \n";
    cin>>difficultylevel;
    srand(time(0));
    int secretNumber=1+(rand() % 100);
    int userchoice;
    if(difficultylevel==1)
    {
        cout<<"You have 10 choices for finding the secret number between 1 and 100 ";
        int choiceleft=10;
        for(int i=1;i<=10;i++)
        {
            cout<<"ENTER THE NUMBER";
            cin>>userchoice;
            if(userchoice== secretNumber)
            {
                cout<<"Well Played! You won, "<<userchoice <<"is the secret Number0"<<endl;
            
            cout<<"\t \t\t Thanks for Playing....... "<<endl;
            cout<<"Play again with us!\n"<<endl;
            break;
            }
            else{
                cout<<"OOPS!, "<<userchoice<<"is not the right number\n";
                if(userchoice>secretNumber)
                {
                    cout<<"The secret number is smaller number than "<<userchoice;
                }
                else {
                        cout << "The secret number is "
                                "greater than the number "<<userchoice<<endl;
                        
                            
            }
            choiceleft--;
                    cout << choiceleft << " choices left. "
                         << endl;
                    if (choiceleft == 0) {
                        cout << "Sorry! You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
            }


        }
    }
        else if (difficultylevel == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int choiceleft = 7;
            for (int i = 1; i <= 7; i++) {
 
                cout << "\n\nEnter the number: ";
                cin >> userchoice;
                if (userchoice == secretNumber) {
                    cout << "Well played! You won, "
                         << userchoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "OOPS!, " << userchoice
                         << " is not the right number\n";
                    if (userchoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choiceleft--;
                    cout << choiceleft << " choices left. ";
                    if (choiceleft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
    }
    else if (difficultylevel == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int choiceleft = 5;
            for (int i = 1; i <= 5; i++) {
 
                cout << "\n\nEnter the number: ";
                cin >> userchoice;
                if (userchoice == secretNumber) {
                    cout << "Well played! You won, "
                         << userchoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "OOPS! " << userchoice
                         << " is not the right number\n";
                    if (userchoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choiceleft--;
                    cout << choiceleft << " choices left. "
                         << endl;
                    if (choiceleft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
    }
            else if (difficultylevel == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
 
    
    


}