
#include <iostream>
using namespace std;


class Thermostat
{
private:
	int temperature;

public:
	Thermostat()
	{
		temperature = 24;
	}


	void set_temperature(int temp)
	{		

		if (temp >= 16 && temp <= 30 )
		{

		}
		else
		{
			cout << "Invalid temperature!!" << endl;
		}
	}

	int get_temperature()
	{
		return temperature;
	}


};





int main()
{
	Thermostat room;

	int new_temp;
	cout << "Enter temp: ";
	cin >> new_temp;


	room.set_temperature(new_temp);

	cout << "Current temperature: " << room.get_temperature() << endl;



	return 0;
}

