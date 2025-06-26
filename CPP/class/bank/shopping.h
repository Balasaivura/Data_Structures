class shopping
{
	typedef struct product
	{
		char name[20];
		int quantity;
		int cost;
	}product;
	product cart[5];
	int amount;
//	int cnt;
	public:
		void addtocart(void);
		void print(void);
		void totalamount(void);
		void paybill(bank &);
};
