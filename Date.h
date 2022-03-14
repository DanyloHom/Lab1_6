#pragma once
#include <string>

class Date
{
private:
	class Triad
	{
	private:
		int first;
		int second;
		int third;
	public:
		int getFirst()const { return first; }
		int getSecond()const { return second; }
		int getThird()const { return third; }
		void setFirst(int value);
		void setSecond(int value);
		void setThird(int value);
		void Init(int f, int s, int t);
		void Read();
		void Display()const;
		void PlusFirst();
		void PlusSecond();
		void PlusThird();
	};
	Triad triad;
	
public:
	Triad getTriad()const { return triad; }

	int getDay()const { return triad.getFirst(); }
	int getMounth()const { return triad.getSecond(); }
	int getYear()const { return triad.getThird(); }

	void setTriad(Triad triad) { this->triad = triad; }

	void setDay(int value) { triad.setFirst(value); }
	void setMounth(int value) { triad.setSecond(value); }
	void setYear(int value) { triad.setThird(value); }

	bool Init(int d, int m, int y);
	void Read();
	void Display();

	void PlusDay();
	void PlusMounth();
	void PlusYear();

	void ChangeDays(int value);
	void Check();
	void MounthChanger(int value);
	void YearCheck();
	std::string toString()const;
};

