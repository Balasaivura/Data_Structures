class bank
{
	int accno;
	char name[20];
	int balance;
	string pass;
	public: bank();
		bool withdraw(void);
		void deposit(void);
		void balenq(void);
		void menu(void);
		bool transaction(bank1 &);
		friend class shopping;
};
