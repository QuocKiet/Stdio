#include <stdio.h>

class Interger
{
private:
	unsigned	char* byte;
public:
	void Setdata(int v);
	int Getdata();
	void Out();
	Interger Add(Interger i);
	Interger Sub(Interger i);
	/*Interger(Interger &i);*/
	Interger();
	~Interger();
};
//Interger::Interger(Interger &i)
//{
//	this->Setdata(i.Getdata());
//}
Interger::Interger()
{
	this->byte = new unsigned char[4];
}

Interger::~Interger()
{
}

void Interger::Out()
{
	printf("%d", this->Getdata());
}

void Interger::Setdata(int v)
{
	byte[0] = (0xff000000 & v) >> 24;
	byte[1] = (0x00ff0000 & v) >> 16;
	byte[2] = (0x0000ff00 & v) >> 8;
	byte[3] = (0x000000ff & v);
}

int Interger::Getdata()
{
	unsigned int temp = 0;
	temp =(byte[0] << 24) | temp;
	temp = (byte[1] << 16) | temp;
	temp = (byte[2] << 8)| temp;
	temp = (byte[3]) | temp;
	int o = 0;
	return temp;
}

Interger Interger::Add(Interger i)
{
	Interger temp;
	temp.Setdata(this->Getdata() + i.Getdata());
	return temp;
}
Interger Interger::Sub(Interger i)
{
	Interger temp;
	temp.Setdata(this->Getdata() - i.Getdata());
	return temp;

}

class Interger1
{
public:
	void SetData(int i);
	int GetData(Interger1 i);
	Interger1();
	~Interger1();

private:
	unsigned char byte[2][4];
	bool is_hacker;

};

void Interger1::SetData(int v)
{
	byte[1][0] = byte[0][0] = (0xff000000 & v) >> 24;
	byte[1][1] = byte[0][1] = (0x00ff0000 & v) >> 16;
	byte[1][2] = byte[0][2] = (0x0000ff00 & v) >> 8;
	byte[1][3] = byte[0][3] = (0x000000ff & v);
}

Interger1::Interger1()
{
	

}

Interger1::~Interger1()
{
}



int main()
{
	Interger a, b, c;
	a.Setdata(15000);
	while (true);
	return 0;
}
