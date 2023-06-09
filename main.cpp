#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    
    char Option;
    
    do{
        
        //Get users choice
        cout << "Please select an option:" << endl;
        
        cout << "A: Output sequence" << endl
            << "B: Create sequence" << endl
            << "C: Count number of letters in a word" << endl
            << "X Exit program" << endl;
            
        cin >> Option;
        
        switch (Option)
        {
            
            case 'a':
            case 'A': 
            
            {
                
                int n = 0;
                
                cout << "Enter the number of terms in the sequence" << endl;
                cin >> n;
                
                //Validate integer (while loop - until user inputs an integer)
                while (cin.fail()) 
                {
                    cout << "Invalid user input!!" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Try again." << endl;
                    cin >> n;
                }
                
                //Odd
                if (n % 2 == 1)
                {
                    //For Loop - Display sequence
                    for (int i=1; i<=(n-1)/2; i++) {
                        cout << 2*(i) << ", " << 4*(i) << ", ";
                    }
                    //Last term
                    cout << n+1;
                }
                
                //Even
                if (n % 2 == 0)
                {
                    //For Loop - Display sequence
                    for (int i=1; i<=(n/2)-1; i++) {
                        cout << 2*(i) << ", " << 4*(i) << ", ";
                    }
                    //Last 2 terms
                    cout << n << ", " << 2*n;
                }
                
                cout << endl;
                
                break;
                
            }
            
            case 'b':
            case 'B':
            
            {
                
                int intStart = 0;
                int intStop = 0;
                int intStep = 0;
                
                cout << "Please enter a starting value for the sequence" << endl;
                cin >> intStart;
                
                //Validate integer (while loop - until user inputs an integer)
                while (cin.fail()) 
                {
                    cout << "Invalid user input!!" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Try again." << endl;
                    cin >> intStart;
                }
                
                cout << "Enter a stopping value of the sequence" << endl;
                cin >> intStop;
                
                //Validate integer (while loop - until user inputs an integer)
                while (cin.fail()) 
                {
                    cout << "Invalid user input!!" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Try again." << endl;
                    cin >> intStop;
                }
                
                cout<< "Enter a step value of the sequence" << endl;
                cin >> intStep;
                            
                //Validate integer (while loop - until user inputs an integer)   
                while (cin.fail()) 
                {
                    cout << "Invalid user input!!" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Try again." << endl;
                    cin >> intStep;
                }
                
                //While loop - Displays sequence
                while (intStart < intStop)
                {
                    cout << intStart << ", ";
                    //increace start value by the step
                    intStart += intStep;
                }
                
                //Display last term
                cout << intStop << endl;
                
                break;
                
            }
            
            case 'c':
            case 'C':
            {
                
                string strWord; 
                cout << "Enter the word you would like to count" << endl;
                cin >> strWord;
                
                //Counts every chracter the user input
                int intNumChar = 0;
                for (int i : strWord)
                {
                    intNumChar += 1;
                }
                cout << "There are " << intNumChar << " characters in the word "
                << strWord << endl;
                
                break;
                
            }
            
            case 'x':
            case 'X':
            {
                //Exits the program
                cout << "Exiting the program..." << endl;
                break;
                
            }
            
            default:
            {
                //Validates users choce
                cout << "Invalid user input" << endl;
                break;
                
            }
        }
    
    //Runs until user exits program    
    } while (Option != 'X');
    
    return 0;
}