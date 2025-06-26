class bank1
{
	int accno;
	char name[20];
	float amount;
	char password[20];
	public:bank1();
	       void deposit(void);
	       bool withdraw(void);
	       void balenq(void);
	       void menu(void);
	       friend bool bank :: transaction(bank1 &);
};
