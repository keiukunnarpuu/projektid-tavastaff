#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cctype>

using namespace std;

void Log_in_panel();
void Bank_page();
void Commands_panel();
void Account_info();
void Deposit();
void Balance();
void Withdrawal();

string choice, username, password, check_username, check_password, lastname;
int bank_card_id, date, month, year, bank_choice, money;
int bank_balance = 0;

int main(){
    system("clear");
    sleep(1);
    Log_in_panel();

    return 0;
}

void Log_in_panel(){
    cout << "\tWelcome to the Central-Bank\n"<<endl;
    cout << "Enter «Log» to log in to your account"<<endl;
    cout << "Enter «Reg» For registreation \n"<<endl;
    cout << "Enter your choice -> ";
    cin >> choice;
}
