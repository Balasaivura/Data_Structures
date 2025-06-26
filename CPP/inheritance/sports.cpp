class Sport:virtual public Student
{
	protected:char sgrade[3];
	public:Sport()
	       {
		       cout<<"Sport Constructor:"<<endl;
		       cout<<"Enter the sgrade:"<<endl;
		       cin>>sgrade;
	       }
	       void Sprint()
	       {
		       //print();
		       cout<<"sgrade:"<<sgrade<<endl;
	       }
	       ~Sport()
	       {
		       cout<<"Sports Desturctor:"<<endl;
	       }
};
