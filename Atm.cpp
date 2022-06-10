#include <iostream>

using namespace std;

void showMainu(){
    cout<<" **********MENUE**********"<< endl;
    cout<<"1. check balence"<< endl;
    cout<<"2. deposite"<< endl;
    cout<<"3. withdraw"<< endl;
    cout<<"4. exit"<< endl;
    cout<<" *************************"<< endl;
}

int main()
{
   int option;
    double balance = 500;

   do{
   showMainu();
   cout<< "option: ";
   cin >> option;

   system("cls");
   switch (option) {
    case 1: cout << "Balence is: " << balance << "$"<< endl; break;
    case 2: cout << "deposit amount : ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
    case 3: cout << "withdraw amount : ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if ( withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout <<"insufficient balance" << endl;
            break;
   }
   } while (option!= 4);

   system("pause>0");
}