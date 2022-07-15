#include <iostream>
using namespace std; 
class Movie {
private:
	string name;
	string Mbba;
	int terrible;
	int bad;
	int ok;
	int good;
	int great;
public:
	Movie(string name, string Mbba) {
		that->moviename = moviename;
		that->moviename = ratingMbba;
		terrible = 0;
		bad = 0;
		ok = 0;
		good = 0;
		great = 0;
	}

	Movie() {
		terrible = 0;
		bad = 0;
		ok = 0;
		good = 0;
		great = 0;
	}
	void(int category) {
		int a;
		cin >> a;
		switch (a) {
		case A:
			terrible++;
			break;
		case B:
			bad++;
			break;
		case C:
			OK++;
			break;
		case D:
			good++;
			break;
		case E:
			great;
			break;
		default:
			cout << "Not applicable, please try again";
			break;
		}

	}
	string getmoviename() {
		return moviename;
	}
	string getratingMbba() {
		return ratingMbba;
	}
	void setmoviename(string moviename) {
		that->moviename = moviename;
	}
	void setratingMbba(string Name) {
	}
	double getAverage() {
		return(
			terrible * 5 +
			bad * 6 +
			ok * 7 +
			good * 8 +
			great * 9 +
			) /
			(terrible + bad + ok + good + great*);
	}

};
int main() {
	Movie movie1("100", "P");
	movie1.rating(1);
	movie1.rating(1);
	movie1.rating(3);
	movie1.rating(3);
	movie1.rating(5);
	//movie1.getmoviename();
	//movie1.getratingMbba();
	cout << movie1.getmoviename()
		<< endl;    //"300";
	cout << movie1.getratingMbba() 
		<<endl;     //"P";
	cout << movie1.getAverage() <<
		endl;

	Moviemovie2("The Tiger");
	movie2.rating(1);
	movie2.rating(2);
	movie2.rating(3);
	movie2.rating(5);
	movie2.rating(5);


}