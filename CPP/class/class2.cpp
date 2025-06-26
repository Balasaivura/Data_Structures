#include<iostream>
using namespace std;
class box
{
	public:
		double len;
		double ber;
		double hei;
};
int main()
{
	box box1,box2;
	double volume =0.0;
	box1.hei=5.0;
	box1.len=6.0;
	box1.ber=7.0;
	box2.hei=10.0;
	box2.len=12.0;
	box2.ber=14.0;
	volume=box1.hei*box1.ber*box1.len;
	cout<<"Volume of box1: "<<volume<<endl;
	volume=box2.hei*box2.ber*box2.len;
	cout<<"Volume of box2: "<<volume<<endl;
}
