
class Result:public ECE,public Sport
{
	float totmarks,percentage;
	char grade[3];
	public:Result()
	       {
		       cout<<"Result Constructor:"<<endl;
		       totmarks=percentage=0;
	       }	
	       void CalTotMarks()
	       {
		       totmarks=0;
		       for(int i=0;i<6;i++)
		       {
			       totmarks+=marks[i];
		       }
	       }
	       void  CalPer()
	       {
		       percentage=totmarks/6;
	       }
	       void CalGrade()
	       {
		       if(percentage<40)
			      strcpy(grade,"C");
		       else if(percentage>=40 && percentage<50)
			      strcpy(grade,"B");
		       else if(percentage>=50 && percentage<60)
			      strcpy(grade,"B+");
		       else if(percentage>=60 && percentage<70)
			      strcpy(grade,"A");
		       else
			      strcpy(grade,"A+");
	       }
	       void Rprint()
               {
		       print();
		       Eprint();
		       Sprint();
                       cout<<"Total marks:"<<totmarks<<endl;
                       cout<<"Percentage:"<<percentage<<endl;
                       cout<<"Grade:"<<grade<<endl;
               }
	       ~Result()
	       {
		       cout<<"Result Destructor:"<<endl;
	       }
};

