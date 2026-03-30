//typedef struct Complex
//{
//	int real;
//	int img ;
//}Complex;
//
//void main()
//{
//	Complex c1,c2;
//	c1.real=10;
//	c1.img=20;
//	
//	c2.real=100;
//	c2.img=200;
//	
//	Complex c3;
//	c3.real=c1.real+c2.real;
//	c3.img=c1.img+c2.img;
//	
//	printf("%d - %d i",c3.real,c3.img);
//}



typedef struct Complex
{
	int real;
	int img ;
}Complex;

Complex store();
void display(Complex c3);
void main()
{
	Complex c1,c2,c3;
	c3=	store();
	display(c3);	
	}

Complex store()
{
	Complex c1,c2,c3;
	c1.real=10;
	c1.img=20;
	c2.real=100;
	c2.img=200;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	return c3;
}
void display(Complex c3)
{
	printf("%d - %d i",c3.real,c3.img);
}


