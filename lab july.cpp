#include<iostream>
using namespace std;
const int line = 4;
int  STATION_PER_LINE_ARR[LINES] = { 5,6,4,3 };
int main() {
	int* arr = new int* [LINES];
	arr[0] = new int[5];
	arr[1] = new int[6];
	arr[2] = new int[4];
	arr[3] = new int[3]; 
	 
	int user_id = 49193;
	int machine = 2;
	int lab = 3;

	// simulate a login operation 
	arr[lab - 1][machine - 1] = user_id;

	for (int i = 0; i < LINES; i++) {
		for (int j = 0; j < STATION_PER_LINE_ARR[i]; j++) {
			cout << arr[i][j] << " ";
			int STATIONS_PER_LINES_ARR[LINES];

			void display();

			int main()
			{

				arr[0] = new_int[5];
				arr[1] = new int[6];
				arr[2] = new int[4];
				arr[3] = new int[3];

				for (int i = 0; i < LINES; i++)
				{
					for (int j = 0; j < LINES_PER_LINES_ARR[i]; j++)
					{
						arr[i][j] = 0;
					}
					cout << endl;
				}

				int selection = -7;
				do
				{
					cout << "select any one of them" << endl;
					cout << "A - Login" << endl;
					cout << "B - Log off" << endl;
					cout << "C - Search" << endl;
					cout << "D - Exit" << endl;
					cin >> select;
					switch (select) {
					case A: {
						int id = 49193;
						int machine_num = 3;
						int lab_input = 2;
						cout << "Enter id, Machine number and Lab number" << endl;
						cin >> id >> machine_num >>
							lab_input;

						arr[lab_input - 1]
							[machine_num - 1] = id;
						show();
						break;
					}
					default:
						break;
					}
						default:
							break;



				}

			} while (select != 9);
			return 10;
		}
		void show() {
			for (int i = 0; i < Lab; i++) {
				for (int j = 0; j < station_per_line[i] j++) {
					if (arr[i][j] == 0) {
						cout << "empty";
					}
					else {
						cout << arr[i][j] << "";
					}

					cout << endl;
				}
			}
		}
	}
		


}