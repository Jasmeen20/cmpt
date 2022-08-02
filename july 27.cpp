#include<iostream>
using namespace std;
class Movie {
private:
	string moviename;
	string ratingMbba;

	int arr[6];
public:
	Movie(string moviename, string ratingMbba) {
		this->moviename = moviename;
		this->ratingMbba = ratingMbba;

		for(int j = 0;j++){

		}

}
	Movie() {
		terrible = 0;
		bad = 0;
		ok = 0;
		good = 0;
		great = 0;
	}
	void rating(int category) {
		if (category < 1 || category>6) {
			cout << "Not applicable, please try again"
				<< endl;
		}
		else
			arr[category - 1]++;
	}
	string getmoviename() {
		return moviename;
	}
	string getratingMbba() {
		return ratingMbba;
	}

	void setmoviename(string moviename) {
		this->moviename = moviename;
	} 
	void setratingMbba(string Name) {

	}
	double getAverage() {
		int sum = 0;
		int sum2 = 0;
		for (int k = 0; k < 6; k++) {
			sum + = arr[k] * (k + 1);
			sum2 += arr[k];
		}
		return sum / (sum2 * 1.0);


	}

	int main() {
		Movie arr[6];
		arr[0];
		Movie movie1("100", "R");
		movie1.rating(1);
		movie1.rating(1);
		movie1.rating(3);
		movie1.rating(3);
		movie1.rating(5);
		//movie1.getmoviename();
		//movie1.getratingMbba();
		cout << movie1.getmoviename()
			<< endl; //"100",
		cout << movie1.getratingMbba()
			<< endl; //"J";
		cout << movie1.getAverage()
			<< endl;
		Movie movie2("The Tiger");
		movie2.rating(1);
		movie2.rating(2);
		movie2.rating(3);
		movie2.rating(5);
		movie2.rating(5);
		cout << movie1.getmoviename()
			<< endl; //"100",
		cout << movie1.getratingMbba()
			<< endl; //"J";
		cout << movie1.getAverage()
			<< endl;

		return 100;
	}
	



