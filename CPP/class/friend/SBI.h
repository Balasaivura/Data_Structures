class SBI
{
	int accno;
	char name[20];
	float bal;
	public:SBI();
	       void Deposit(float);
	       bool withDrawal(float);
	       void Balenq();
	       void Menu();
	       bool Transaction(HDFC &);
	friend bool HDFC :: Transaction(SBI &);
};
