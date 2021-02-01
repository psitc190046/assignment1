#include <iostream>

using namespace std;

int main()
{
    string customer_Name;
	int customer_Id;
	int quantity;
	float total_amount;
	float payment;
    float balance;
	string item;
	float vat;
	int phone= 500;
	int table= 150;
	int printer= 950;

    float insufficient;

    cout << ".........You are welcome To INF SUPERMARKET..........." << endl;

	//products
	cout << "Available Products" <<endl;
	cout << "Printer = GHC950.00" <<endl;
	cout << "Table = GHC150.00 " <<endl;
	cout << "Phone =  GHC500.00 " <<endl;
	cout << "" <<endl;

	//client details
	cout << "Client details " <<endl;
	cout << "please what is your name? "<<endl;
	cin >> customer_Name;
	cout << "" << endl;
	cout << "Please your ID number? "<<endl;
	cin >> customer_Id;
	cout << "" << endl;
	cout << "what quantity do you intend to purchase "<<endl;
	cin >> quantity;
	cout << "your amount " <<endl;
	cin >> payment;
	cout << "What do you want to buy please" << endl;
	cin >> item;
	cout << "" << endl;
	cout << "" << endl;

	//processes
    if (item == "phone"){
        vat= 0.12 * (quantity * phone);
        total_amount=(phone * quantity) + vat;
        cout << "Your total amount is " << total_amount << endl;
        }

    else if (item== "printer"){
        vat=0.12 * (quantity * printer);
        total_amount=(printer * quantity) + vat;
        cout << "Your total amount is" << total_amount << endl;
    }

    else if ( item == "table"){
        vat= 0.12 * (quantity * table);
        total_amount=(table * quantity) + vat;
        cout << "Your total amount is " << total_amount << endl;

    }


    if (payment==total_amount){
        cout << "Thank You" << endl;
    }

    else if (payment>total_amount){
    balance = (payment - total_amount);
        cout << "Your balance is " << balance << endl;
    }

    else if ( payment < total_amount){
        insufficient = (total_amount - payment);

    }

    cout << "NAME: " << customer_Name;
     cout << "" << endl;
    cout << "CUSTOMER ID: " << customer_Id;
     cout << "" << endl;
    cout << "ITEM: " << item;
     cout << "" << endl;
    cout << "QUANTITY: " << quantity;
     cout << "" << endl;
    cout << "VAT: " << vat;
     cout << "" << endl;
    cout << "TOTAL_AMOUNT: GHC" << total_amount << endl;
     cout << "" << endl;
    cout << "PAYMENT_MADE: GHC" << payment;
     cout << "" << endl;
    cout << "BALANCE: GHC" << balance;
     cout << "" << endl;
     if (total_amount > payment){
            insufficient = (total_amount - payment);
        cout << "Sorry! Your balance is insufficient." << endl;
        cout << "Your payment is short of GHC" << insufficient << endl;
        cout << "" << endl;
     }


    cout << "THANK YOU FOR TRANSACTING WITH US" << endl;




    return 0;
}
