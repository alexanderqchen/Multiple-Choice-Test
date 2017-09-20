#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

class Question
{
public:
	Question() : a(false), b(false), c(false), d(false), e(false)
	{
		int i = rand() % 5;
		switch (i)
		{
		case 0:
			a = true;
			break;
		case 1:
			b = true;
			break;
		case 2:
			c = true;
			break;
		case 3:
			d = true;
			break;
		case 4:
			e = true;
			break;
		}
	}
	bool check(int i)
	{
		switch (i)
		{
		case 0:
			return a;
		case 1:
			return b;
		case 2:
			return c;
		case 3:
			return d;
		case 4:
			return e;
		}
	}
private:
	bool a;
	bool b;
	bool c;
	bool d;
	bool e;
};

int main()
{
	int numQs = 1000000;

	srand((int)time(NULL));
	vector<Question> test(numQs);
	int correct1 = 0;
	int correct2 = 0;
	int answer = rand() % 5;
	for (int i = 0; i < numQs; i++)
	{
		if (test[i].check(rand() % 5))
			correct1++;
		if (test[i].check(answer))
			correct2++;
	}

	cout << "Random answers gave: " << (double)correct1 / numQs << endl;
	cout << "Same answer gave: " << (double)correct2 / numQs << endl;


	
}