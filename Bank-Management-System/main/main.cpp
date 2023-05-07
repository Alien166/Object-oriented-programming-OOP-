int main()
{
	Withdraw w;
	int options = 7, n = 0, AccNum = 0;
 
	intro();
	while (n != options)
	{
		cout << "1. New Bank Account." << endl;
		cout << "2. Deposit Money." << endl;
		cout << "3. Withdraw Money." << endl;
		cout << "4. Balance Enquiry. " << endl;
		cout << "5. Modify Account. " << endl;
		cout << "6. Delete Account. " << endl;
		cout << "7. Exit. " << endl;
		cout << "Please choose your Option from 1 to 7 : ";
		cin >> n;
 
		while (n > options || n == 0)
		{
			cout << endl << "Invalid Number Please try again: ";
			cin >> n;
		}
 
		switch (n)
		{
		case 1:
			system("cls");
			w.set_data();
 
			break;
		case 2:
			system("cls");
			cout << "\nPlease enter your Account Number : ";
			cin >> AccNum;
			while (AccNum != w.num)
			{
				cout << "\nThe Account number that you have put it is wrong. Please try again : "; cin >> AccNum;
			}
			w.set_deposit();
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			break;
		case 3:
			system("cls");
			cout << "\nPlease enter your Account Number : ";	cin >> AccNum;
			while (AccNum != w.num)
			{
				cout << "\nThe Account number that you have put it is wrong. Please try again : "; cin >> AccNum;
			}
			w.set_withdraw();
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			break;
		case 4:
			system("cls");
			cout << "\nPlease enter your Account Number : ";	cin >> AccNum;
			while (AccNum != w.num)
			{
				cout << "\nThe Account number that you have put it is wrong. Please try again : "; cin >> AccNum;
			}
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			break;
		case 5:
			system("cls");
			cout << "\nPlease enter your Account Number : ";	cin >> AccNum;
			while (AccNum != w.num)
			{
				cout << "\nThe Account number that you have put it is wrong. Please try again : "; cin >> AccNum;
			}
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			w.modify_Account();
			cout << "\n\n---------------------- Your Modified Account Data ---------------------\n\n";
			w.show_data();
			break;
		case 6:
			system("cls");
			cout << "\n\nEnter your Account Number : ";
			cin >> AccNum;
			while (AccNum != w.num)
			{
				cout << "\nThe Account number that you have put it is wrong. Please try again : "; cin >> AccNum;
			}
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			w.delete_Account();
			cout << "\nPlease Withdraw Your Total Balance to delete your Account :  " << w.withdraw << endl;
			cout << "\n\n---------------------- Your Account Data ---------------------\n\n";
			w.show_data();
			cout << "\t\tYour account deleted sucessfully........\n\n";
			intro();
			break;
		case 7:
			cout << "\n\t********************************************";
			cout << "\n\t*Thank you for choosing our Banking System.*";
			cout << "\n\t********************************************";
			break;
 
		}
	}
 
	return 0;
}
