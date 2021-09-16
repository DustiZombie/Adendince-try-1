#include <istream>
#include <iostream>


	using namespace std;

	int main()
	{
		// Output schedule to screen
		const string m = "Monday";
		const string T = "tusday";
		const string w = "Wednesday";
		const string t = "thursday";
		const string f = "friday";
		const string N = "Dustin Dawson";
		const string fcT = "8:00 -9:50";
		const string fct = "10:00-11:00";	// fct = first class time
		const string fcn = "C++ 101"; // fcn = first class name
		const string fcl = "python 101";
		const string fcr = "Macro 106";
		cout << N << endl;
		cout << m << "\t\t" << fcT<< "\t" << fcr << endl;
		cout << m << "\t\t" << fct << "\t" << fcn << endl;
		cout << endl;
		cout << T << "\t\t" << fcT << "\t" << fcl << endl;
		cout << T << "\t\t" << fct << "\t" << fcn << endl;
		cout << endl;
		cout << w << "\t" << fcT << "\t" << fcr << endl;
		cout << w << "\t" << fct << "\t" << fcn << endl;
		cout << endl;
		cout << t << "\t" << fcT << "\t" << fcl << endl;
		cout << t << "\t" << fct << "\t" << fcn << endl;
		cout << endl;
		cout << f << "\t\t" << fcT << "\t" << fcr << endl;
		cout << f << "\t\t" << fct << "\t" << fcn << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout <<"*   *   *   * " <<endl;  
		cout <<"*   *   *   * " <<endl;  
		cout <<"  *   *   *   * " << endl;
		cout <<"*   *   *   * " << endl;  
		cout <<"  *   *   *   * " << endl;
		cout <<"*   *   *   * " << endl;
		cout <<"  *   *   *   * " << endl;
		cout <<"*   *   *   * " << endl;
		cout <<"  *   *   *   * " << endl;

		
		
		return 0;
	}