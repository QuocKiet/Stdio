#include <stdio.h>	

class Interger
{
public:
	short a;
	short b;
	void Output();
	void SetData(int value);
	int GetData();
	Interger Add(Interger i);
	Interger Sub(Interger i);
	Interger operator+(Interger &i);
	Interger operator-(Interger &i);
	Interger(Interger &v)
	{
		this->SetData(v.GetData());
	}
	void operator=(Interger &v);
	Interger(int value);
	Interger();
	~Interger();
};

Interger Interger::operator+ (Interger &i)
{
	return this->Add(i);
}

Interger Interger::operator- (Interger &i)
{
	return this->Sub(i);
}

void Interger::operator=(Interger &v)
{
	this->SetData(v.GetData());
}

Interger::Interger(int value)
{
	this->SetData(value);
}

Interger::Interger()
{

}

Interger::~Interger()
{
}

void Interger::Output()
{
	printf("%d", this->GetData());
}

void Interger::SetData(int value)
{
	b = value;
	a = value >> 16;
}


int Interger::GetData()
{
	return (a | b);
}

Interger Interger::Add(Interger i)
{
	Interger temp;
	temp.SetData(this->GetData() + i.GetData());
	
	return temp;
}
Interger Interger::Sub(Interger i)
{
	/*int temp;
	temp = this->GetData() - i.GetData();
	Interger temp1;
	temp1.SetData(temp);
	return temp1;*/
	Interger temp;
	temp.SetData((this->GetData() - i.GetData()));
	
	return temp;
}

int main()
{
	Interger a(10), b(5), c;
	c = b;
	c.Output();

	//b.SetData(4);
	//c = a.Add(b);
	//c.Output();
	//printf("%d", c.GetData());
	while (true);
	return 0;
}