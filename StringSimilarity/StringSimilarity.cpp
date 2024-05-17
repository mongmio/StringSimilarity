#include <string>

using namespace std;

class StringSimilarity
{
public:
	StringSimilarity();
	~StringSimilarity();
	int getScore(string left, string right)
	{
		if (left.size() == right.size())
		{
			return 60;
		}
		return 0;
	}
private:

};

StringSimilarity::StringSimilarity()
{
}

StringSimilarity::~StringSimilarity()
{
}