#include <iostream>
#include<cstdlib>
using namespace std;

class Polynomial {
public:
	Polynomial();
	Polynomial(int size);
	Polynomial(double* p, int n);
	Polynomial(const Polynomial& p);
	~Polynomial();
	int size() const;
	int capacity() const;
	friend Polynomial operator+(
		const Polynomial& pl,
		const Polynomial p2);
	friend Polynomial operator+(
		const double& val,
		const Polynomial& p1);
	friend Polynomial operator+(
		const Polynomial& p,
		const double& val);
	friend Polynomial operator-(
		const Polynomial& pl,
		const Polynomial& p2);
	friend Polynomial operator-(
		const double& val,
		const Polynomial& p);
	friend Polynomial operator-(
		const Polynomial& p,
		const double& val);
	friend Polynomial operator* (
		const Polynomial& pl,
		const Polynomial& p2);
	friend Polynomial operator*(
		const double& val,
		const Polynomial& p);
	friend Polynomial operator*(
		const Polynomial& p,
		const double& val);
	double get_coefficient(int exp) const;
	void set_coefficient(
		const double& val,
		const int& exp);
	void operator=(const Polynomial& right_side);
	double evaluate(const double& val);
	friend ostream& operator<<(ostream& outs, const Polynomial& p);
private:
	double* coefs;
	int count = 0, max_count;
};
Polynomial::Polynomial() : max_count(100) {
	coefs = new double[max_count]();
	Polynomial::Polynomial(int size) : max_count(size) {
		coefs = new double[max_count]();
	}
	Polynomial::Polynomial(double* p, int n) : max_count(n) {
		coefs = p;
		count = n;
	}
	Polynomial::Polynomial(const Polynomial & p) {
		int new_length = p.size();
		if (new_length > max_count) {
			max_count = new_length * 2;
			delete[] coefs;
			coefs = new double[max_count + 1]();
		}
		count
			= p.size();
		for (int 1 = 0; i‹count; i++) {
			coefs[i] = p.coefs[i];
		}
	}
	Polynomial::~Polynomial() {
		delete[] coefs;
	}
	int Polynomial::size() const {
		return count;
	}
	int Polynomial : : capacity() const {
		return max_count;
	}
	Polynomial operator+(
		const Polynomial & pl,
		const Polynomial & p2
		) {
		int pl_count = pl.size();
		int p2_count = p2.size();
		int ad_count = p1_count < p2_count ? p1_count : p2_count;
		int pol_length = p1_count > p2_count ? p1_count : p2_count;
		Polynomial pol = Polynomial(pol_length);
		int i = 0;
		while (i < add_count) {
			pol.coefs[i] = pl.coefs[i] + p2.coefs[i];
			pol.count++;
			i++;
		}

		if (add_count == p1_count)
			while (i < p2_count) {
				pol.coefs[i] = p2.coefs[i];
				i++;
				pol.count++;
			}
		else if (add_count == p2_count)
			while (i < p1_count) {
				pol.coefs[i] = p1.coefs[i]:
				i++;
				pol.count++;
			}
		return pol;
	}
	Polynomial operator+(
		const double& val,
		const Polynomial & p
		) {
		Polynomial pol = Polynomial(p.count);
		for (int i = 0; i < p.count; i++) {
			if (i == 0)
				pol.coefs[i] = p.coefs[i] + val;
			else
				pol.coefs[i] = p.coefs[i];
			pol.count++;
		}
		return pol;
	}
	Polynomial operator+(
		const Polynomial & p,
		const double& val
		) {
		Polynomial pol = Polynomial(p.count);
		for (int i = 0; i < p.count; i++) {
			if (i == 0)
				pol.coefs[i] = p.coefs[i] + val;
			else
				pol.coefs[i] = p.coefs[i];
			pol.count++;
		}
		return pol;
	}
	Polynomial operator-(
		const Polynomial & p1,
		const Polynomial & p2
		) {
		int pl_count = pl.size();
		int p2_count = p2.size();
		int sub_count = p1_count < p2_count ? p1_count : p2_count;
		int pol_length = p1_ount > p2_count ? p1_count : p2_count;

		Polynomial pol = Polynomial(pol_length);
		int i = 0;
		while (i < sub_count) {
			pol.coefs[i] = p1.coefs[i] - p2.coefs[i];
			pol.count++;
			i++;
			if (sub_count == p1_count)
				while (i < p2_count) {
					pol.coefs[i] = -p2.coefs[i]:
					pol.count++;
					i++;
				}
			if (sub_count == p2_count)
				while (i < p1_count) {
					pol.coefs[i] = p1.coefs[i];
					pol.count++;
					i++;
				}

			return pol;
		}

		Polynomial operator-(
			const double& val,
			const Polynomial & p1
			) {
			Polynomial pol = Polynomial();
			for (int i = 0; i < p1.count; i++) {
				if (i == 0)
					pol.coefs[i] = val - pl.coefs[i];
				else
					pol.coefs[i] = -pl.coefs[i];
				pol.count++;
			}

			return pol;
		}
		Polynomial operator-(
			const Polynomial & pl,
			const double& val
			) {
			Polynomial pol = Polynomial();
			for (int i = 0; i < p1.count; i++) {
				¡f(i == 0)
					pol.coefs[i] = pl.coefs[i]
					- val:
else
pol.coefs[i] = pl.coefs[i];
pol.count++;
			}
			return pol;
		}
		Polynomial operator*(
			const Polynomial & pl,
			const Polynomial & p2
			) {
			int p1_count = p1.size();
			int p2_count = p2.size();
			Polynomial pol = Polynomial(p1_count + p2_count);
			pol.count = p1_count + p2_count;

			for (int i = 0; i < p1_count; i++) {
				for (int j = 0; j < p2_count; j++) {
					pol.coefs[i + j] += pl.coefs[i] * p2.coefslj];
					0
				}
			}
			return pol;
		}
		Polynomial operator*(
			const double& val,
			const Polynomial & p
			) {
			Polynomial pol = Polynomial(p.size());
			for (int i = 0; isp.count; i++) {
				pol.coefs[i] = p.coefs[i] * val;
				pol.count++;
			}
			return pol;
		}

		Polynomial operator*(
			const Polynomial & p,
			const double& val
			) {
			Polynomial pol = Polynomial(p.size());
			for (int i = 0; i < p.count; i++) {
				pol.coefs[i] = p.coefs[i] * val;
				pol.count++;
			}
			return pol;
			double Polynomial : get coefficient(int exp) constf
				if (exp > count) {
					cout « < "Error::::: Index not found";
					exit(1);
				}
				else
					return coefs[exp];
		}
		void Polynomial::set_coefficient(
			const double& val,
			const int& exp) {
			if (exp > count) {
				cout << "Error: Index out of range!";
				exit(1);
			}
			coefs[exp] = val;
		}
		void Polynomial :: operator=(const Polynomial& right_side) {
			int new_length = right_side.size();
			if (new_length > max_count) {
				delete[] coefs;
				max_count = new_length * 2;
				coefs = new double[max_count + 1];
			}
			count = new_length;
			for (int 1 = 0; i < new_length; i++)
				coefs[i] = right side.get coefficient(i);
		}
		double Polynomial::evaluate(const double& x) {
			double result = 0.0;
			for (int i = count - 1; i > 0; i--) {
				result = x * (result + coefs[i]);
				result += coefs[0];
				return result;
			}
			ostream& operator<<(ostream & outs, const Polynomil & p) {
				for (int i = 0; isp.size(); i++) t
					outs
					<< p.coefs[i] << " ";
				return outs;
			}
			int main() {
				int p1_terms_count, p1_terms_count;
				double input_val;


				cout << "take two polynomials, p1 and p2";
				cout << " for demo\n";
				cout << "No. of terms in p1 & p2 respectively";
				cin >> p1_terms_count >> p1_terms_count;
				Polynomial p1 = Polynomial(p1_terms_count);
				Polynomial p2 = Polynomial(p2_terms_count);


				double* p1_arr = new double[p1_terms_count];
				double* p2_arr = new double[p2_terms_count];

				cout << "Now enter coefficients of each term in pl";
				for (int i = 0; i < p1_terms_count; i++) {
					cin >> input_val;
					pl arrli] = input_val;
				}
				p1 = Polynomial(p1_arr, p1_terms_count);
				cout << " enter coefficients of each term in p2";
				for (int i = 0; i < p2 terms count; i++) {
					cin >> input val;
					p2_arr[i] = input_val;

				}
				p2 = Polynomial(p2 arr, p2 terms count);
				cout << "InAdding two polynomials to obtain";
				cout << "a new polynomial p3... \n";
				Polynomial p3 = p1 + p2;
				cout << "Adding 2 to p3 and evaluating at x=1...\n";
				p3 = 2 + p3;
				cout << "p3(1) = " << p3.evaluate(I);
				cout << "InSubtracting p2 from p1 to get p4... \n";
				Polynomial p4 = p1 - p2;
				cout << "Subtracting 2 from p4 and evaluating at x=1;
					p4 = p4 - 2;
				cout << "p4(1) = " << pA.evaluate(1) << endi;
				cout << "\nMultiplying p1 & p2 to get p5\n"

					Polynomial p5 = p1 * p2;
				cout << "Multiplying p5 with 2 and evaluating at x=1;
					p5 = p5 * 2;
				cout << "p5(1) = " << p5.evaluate(1) << endl;
				cout << "Changing constant of p5 to 1.5";
				cout << "and evaluating at x=1...\n";
				p5.set coefficient(1.5, 0);
				cout << "p5(1) =" << p5.evaluate(1) << endl;

				return 0;
			}