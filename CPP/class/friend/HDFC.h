class HDFC
{
	int accno;
	char name[20];
	float bal;
	public:HDFC();
	       void Deposit(float);
	       bool withDrawal(float);
	       bool Transaction(SBI &);
	       void Balenq();
	       void Menu();
	friend class SBI;
};
