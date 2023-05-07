class Bank
{
public:
	int num , age , count, Tele ;
	string first, second;
	string TypeOfCurrency , TypeOfAccount;
	ll TotalBalance = 0, intial = 0, depoist = 0, withdraw = 0;
	Bank() { num = 149876, age = 0, count = 0, Tele = 0; }
 
	void set_totalBalance(ll a)
	{
		TotalBalance += a ;
	}
 
	void set_totalBalance()
	{
		TotalBalance += depoist - withdraw;
	}
	void show_data()const
	{
		cout << "Account Number : " << num
			<< "\t\tAccount Holder : " << first << " " << second
			<< "\t\tAccount Age : " << age
			<< "\n\n\tHolder Telefon Number : " << Tele
			<< "\t\tType of account : " << TypeOfAccount
			<< "\n\n\nType of Currency : " << TypeOfCurrency
			<< "\t\t          Total Balance : " << TotalBalance << "\n\n";
		cout << "\n---------------------------------------------------------------\n\n";
	}
	void modify_Account()
	{
		char OldType = TypeOfCurrency[0];
		int OldAge = age;
		cout << "\n\n------------------- Modify Account Process -------------------";
		cout << "\n\nEnter The New First Name Of holder : ";
		cin >> this->first;
		cout << "\nEnter The New second Name Of holder : ";
		cin >> this->second;
		cout << "\nEnter The New Holder Telefon Number : ";
		cin >> this->Tele;
		cout << "\nEnter The New Holder Age : ";
		cin >> this->age;
		while (OldAge > age)
		{
			cout << "Invalid Number. Please try again :"; cin >> age;
		}
		cout << "\nEnter The New Type Of Account (Silver | Gold | Platinium) : ";
		cin >> this->TypeOfAccount;
		cout << "\nEnter The New Type Of Currency [P/$] : ";
		cin >> this->TypeOfCurrency;
		while (TypeOfCurrency != "P" && TypeOfCurrency != "p" && TypeOfCurrency != "$")
		{
			cout << "\nInvalid character. Please try again: "; cin >> this->TypeOfCurrency;
		}
		cout << TypeOfCurrency[0];
		if (TypeOfCurrency[0] != OldType && TypeOfCurrency[0] != tolower(OldType) && TypeOfCurrency[0] != toupper(OldType))
		{
			if (TypeOfCurrency == "p" || TypeOfCurrency == "P")
				TotalBalance *= 25;
			else
				TotalBalance /= 25;
		}
		cout << "\n\t\tThe Account is modified Sucessfully..... ";
		cout << "\n---------------------------------------------------------------\n\n";
 
	}
	void delete_Account()
	{
		withdraw = TotalBalance;
		TotalBalance = 0;
	}
	~Bank() { num = 0, count = 0, Tele = 0; }
 
};
class New_Account :public Bank
{
public:
	void set_data()
	{
		cout << "\n\n------------------- New Bank Account Process -------------------";
		cout << "\n\nEnter First Name Of holder : ";
		cin >> first;
		cout << "\nEnter second Name Of holder : ";
		cin >> second;
		cout << "\nEnter the Age Of holder : ";
		cin >> age;
		if (age < 18)
		{
			cout << "\nInvaild Number. It's not allowed at this age to create new Account.\n\n";
		}
		else
		{
			cout << "\nEnter Holder Telefon Number : ";
			cin >> Tele;
			cout << "\nEnter type of Account (Silver | Gold | Platinium) : ";
			cin >> TypeOfAccount;
 
			while (TypeOfAccount != "Silver" && TypeOfAccount != "silver" && TypeOfAccount != "Gold" && TypeOfAccount != "gold" && TypeOfAccount != "Platinium" && TypeOfAccount != "platinium")
			{
				cout << "\nInvalid Type. Please try again: "; cin >> TypeOfAccount;
			}
			cout << "\nEnter Type Of Currency [P/$] : ";
			cin >> TypeOfCurrency;
 
			while (TypeOfCurrency != "P" && TypeOfCurrency != "p" && TypeOfCurrency != "$")
			{
				cout << "\nInvalid Currency . Please try again: "; cin >> TypeOfCurrency;
			}
 
			if (TypeOfAccount == "Silver" || TypeOfAccount == "silver")
			{
 
				cout << "\nPlease enter the intial value you put it to create the Account : ";
				cin >> intial;
				while ((intial < 500 && TypeOfCurrency == "$") || (intial < 1000 && TypeOfCurrency == "P") || (intial < 1000 && TypeOfCurrency == "p"))
				{
					if (TypeOfCurrency == "$") { cout << "\nThe intial amount is less than 500 Dollars. PLease try again : "; cin >> intial; }
					if (TypeOfCurrency == "p" || TypeOfCurrency == "P") { cout << "\nThe intial amount is less than 1000 Pounds. PLease try again : "; cin >> intial; }
				}
 
				set_totalBalance(intial);
				intial = 0;
				cout << "\n\t\tThe Account is created Sucessfully..... ";
				cout << "\n\n\t\t    Your Account Number Is : " << num << endl;
				cout << "\n---------------------------------------------------------------\n\n";
			}
			else if (TypeOfAccount == "Gold" || TypeOfAccount == "gold")
			{
				cout << "\nPlease enter the intial value you put it to create the Account : ";
				cin >> intial;
				while ((intial < 1000 && TypeOfCurrency == "$") || (intial < 2000 && TypeOfCurrency == "P") || (intial < 2000 && TypeOfCurrency == "p"))
				{
					if (TypeOfCurrency == "$") { cout << "\nThe intial amount is less than 1000 Dollars. PLease try again : "; cin >> intial; }
					if (TypeOfCurrency == "p" || TypeOfCurrency == "P") { cout << "\nThe intial amount is less than 2000 Pounds. PLease try again : "; cin >> intial; }
				}
 
				set_totalBalance(intial);
				intial = 0;
				cout << "\n\t\tThe Account is created Sucessfully..... ";
				cout << "\n\n\t\t    Your Account Number Is : " << num << endl;
				cout << "\n---------------------------------------------------------------\n\n";
			}
			else if(TypeOfAccount == "Platinium" || TypeOfAccount == "platinium")
			{
				cout << "\nPlease enter the intial value you put it to create the Account : ";
				cin >> intial;
				while ((intial < 2000 && TypeOfCurrency == "$") || (intial < 4000 && TypeOfCurrency == "P") || (intial < 4000 && TypeOfCurrency == "p"))
				{
					if (TypeOfCurrency == "$") { cout << "\nThe intial amount is less than 2000 Dollars. PLease try again : "; cin >> intial; }
					if (TypeOfCurrency == "p" || TypeOfCurrency == "P") { cout << "\nThe intial amount is less than 4000 Pounds. PLease try again : "; cin >> intial; }
				}
 
				set_totalBalance(intial);
				intial = 0;
				cout << "\n\t\tThe Account is created Sucessfully..... ";
				cout << "\n\n\t\t    Your Account Number Is : " << num << endl;
				cout << "\n---------------------------------------------------------------\n\n";
 
			}
		}
	}
};
class Deposit : public New_Account
{
public: double D_amount = 0;
	  void set_deposit()
	  {
		  cout << "\n\n----------------------- Deposit Process -----------------------";
		  cout << "\n\nPlease Enter the amount of Money you will deposit it : ";
		  cin >> D_amount;
		  if (TypeOfAccount == "Silver" || TypeOfAccount == "silver")
		  {
			  if (D_amount >= 1000 && D_amount < 2000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.15 % at the end of the year";
			  }
			  else if(D_amount >= 2000 && D_amount <3000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.3 % at the end of the year";
			  }
			  else if (D_amount >= 3000 && D_amount < 4000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.35 % at the end of the year";
			  }
 
		  }
		  if (TypeOfAccount == "Gold" || TypeOfAccount == "gold")
		  {
			  if (D_amount >= 1000 && D_amount < 2000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.3 % at the end of the year";
			  }
			  else if (D_amount >= 2000 && D_amount < 3000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.5 % at the end of the year";
			  }
			  else if (D_amount >= 3000 && D_amount < 4000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.75 % at the end of the year";
			  }
 
		  }
		  if (TypeOfAccount == "Platinium" || TypeOfAccount == "platinium")
		  {
			  if (D_amount >= 1000 && D_amount < 2000)
			  {
				  cout << "\nNow!! you have a commission in your account 0.75 % at the end of the year";
			  }
			  else if (D_amount >= 2000 && D_amount < 3000)
			  {
				  cout << "\nNow!! you have a commission in your account 1 % at the end of the year";
			  }
			  else if (D_amount >= 3000 && D_amount < 4000)
			  {
				  cout << "\nNow!! you have a commission in your account 1.75 % at the end of the year";
			  }
 
		  }
 
		  depoist = D_amount;
		  set_totalBalance();
		  depoist = 0;
		  cout << "\nThe Process is done Sucessfully.........\n";
		  cout << "\nYour Total Balance Now : " << TotalBalance;
		  cout << "\n\n---------------------------------------------------------------\n\n";
	  }
};
class Withdraw : public Deposit
{
public: double W_amount = 0;
	  void set_withdraw()
	  {
		  cout << "\n\n---------------------- Withdraw Process ----------------------";
		  cout << "\n\n\nPlease Enter the amount of Money you will withdraw it:";
		  cin >> W_amount;
		  while (W_amount > TotalBalance || (TotalBalance - W_amount) < 1000)
		  {
			  cout << "!!!!!!!!!!!!!!!!!!!!! Alert !!!!!!!!!!!!!!!!!!!!!\nThe amount of the withdraw mustn't exceed the Total Balance while the minimum value for Total Balance is 1000.\n\nPlease Try Again : ";
			  cin >> W_amount;
		  }
		  withdraw = W_amount;
		  cout << "\nThe Process is done Sucessfully...........\n";
		  set_totalBalance();
		  withdraw = 0;
		  cout << "\nYour Total Balance Now : " << TotalBalance << endl << endl;
	  }
};
 
void intro()
{
	cout << "****************************************************************************" << endl << endl;
	cout << "****************************************************************************" << endl;
	cout << "                            BANK MANAGEMENT SYSTEM                          " << endl << endl;
	cout << "                  Made By : Adeltawab wagieh <Team Leader>                  " << endl << endl;
	cout << "	  Made By : Omar Heshem - Ziad Wessam- Mohamed Hussin- Omar abdeltawab                            " << endl << endl;
	cout << "                   UNDER SUPERVISION : Eng. ESLAM SAEED                     " << endl << endl;
	cout << "                    Faculty of Computer Science and AI                      " << endl << endl;
	cout << "****************************************************************************" << endl;
	cout << "                               ::Main  Menu::                               " << endl;
	cout << "****************************************************************************" << endl << endl << endl;
	cout << "-Welcome To Our Banking System. \n\n";
}
