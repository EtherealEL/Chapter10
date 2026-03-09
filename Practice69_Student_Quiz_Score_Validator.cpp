
#include <iostream>
using namespace std;

class QuizResult
{
private:
	int score;

public: 

	void set_score(int new_score)
	{
		if (new_score >= 0 && new_score <= 100)
		{
			score = new_score;
		}
		else
		{
			cout << "Invalid score!!" << endl;
		}
	}

	int get_score()
	{

		return 0;
	}
};




int main()
{
	QuizResult result;

	int input_score;
	cin >> input_score;

	result.set_score(input_score);

	cout << "Final score: " << result.get_score() << endl;

	return 0;

}

