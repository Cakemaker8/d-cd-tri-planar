#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <conio.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
using std::list;
using std::to_string;
using std::string;
using std::ofstream;

void triangulations6(int yorn, int z);
void triangulations7(int yorn, int z);
void triangulations8(int yorn, int z);
void triangulations9(int yorn, int z);
void triangulations10(int yorn, int z);
void triangulations11(int yorn, int z);
void triangulations12(int yorn, int z);
void triangulations13(int yorn, int z);
void triangulations14(int yorn, int z);
void triangulations15(int yorn, int z);
void triangulations16(int yorn, int z);
void triangulations17(int yorn, int z);
void triangulations18(int yorn, int z);

void forTheGUI();
vector<string> maker(int size);
string listMaker(int size, string& vertex, int num, vector<string> actual, vector<string> combinationer);
string lengthOfLetter(string letter);
string sortingString(string str);
string removeDuplicates(string str);
string compare1(string str, int size);
string forConnected(vector<string> str, string compStr, string retStr);
string forCompare(string test, string str);
vector<string> forConnected5(string test, string letters, string actualletter);
string forTriangles(string tester1, string tester2, string tester3);
string connectedChecker2(vector<string> str, string letters);
string connectedChecker3(vector<string> str, string letters);
string connectedChecker4(vector<string> str, string letters);
string connectedChecker5(vector<string> str, string letters);
string connectedChecker6(vector<string> str, string letters);

int main()
{
	bool ending = 0;
	while (ending == false) {
		cout << "What would you like to do? " << endl << "\t1:\t6 vertices\n\t2:\t7 vertices\n\t3:\t8 vertices\n\t4:\t9 vertices\n\t5:\t10 vertices\n\t6:\t11 vertices\n\t7:\t12 vertices\n\t"
			<< "8:\t13 vertices\n\t9:\t14 vertices\n\t10:\t15 vertices\n\t11:\t16 vertices\n\t12:\t17 vertices\n\t13:\t18 vertices\n\t14:\tExit" << endl << "Enter a number: ";
		int num;
		cin >> num;
		if (num == 14) {
			goto ENDPROGRAM;
		}
		cout << "Domination (d) or connected domination (c)?\nEnter a letter: ";
		char val;
		cin >> val;
		cout << endl;
		if (num == 1) {
			if (val == 'd') {
				cout << "6 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations6(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "6 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations6(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 2) {
			if (val == 'd') {
				cout << "7 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations7(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "7 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations7(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 3) {
			if (val == 'd') {
				cout << "8 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations8(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "8 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations8(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 4) {
			if (val == 'd') {
				cout << "9 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations9(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "9 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations9(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 5) {
			if (val == 'd') {
				cout << "10 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations10(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "10 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations10(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 6) {
			if (val == 'd') {
				cout << "11 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations11(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "11 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations11(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 7) {
			if (val == 'd') {
				cout << "12 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations12(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "12 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations12(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 8) {
			if (val == 'd') {
				cout << "13 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations13(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "13 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations13(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 9) {
			if (val == 'd') {
				cout << "14 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations14(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "14 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations14(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 10) {
			if (val == 'd') {
				cout << "15 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations15(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "15 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations15(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 11) {
			if (val == 'd') {
				cout << "16 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations16(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "16 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations16(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 12) {
			if (val == 'd') {
				cout << "17 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations17(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "17 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations17(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
		else if (num == 13) {
			if (val == 'd') {
				cout << "18 vertices, domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations18(0, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			else {
				cout << "18 vertices, connected domination" << endl << endl;
				clock_t startTime, endTime;
				startTime = clock();
				triangulations18(1, 0);
				endTime = clock();
				cout << endl << "Time: " << (double(endTime) - double(startTime)) / 1000 << " seconds" << endl;
			}
			forTheGUI();
		}
	}
	ENDPROGRAM: {
	cout << "\nEnding program\n";
	ending = true;
	}
}

// Graph with 6 vertices
void triangulations6(int yorn, int z) {
	string zero, one, two, three, four, five;

	int domof1 = 0;
	int domof2 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("6triang.txt");
	char i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while ((i != ',') && (i != '6') && (!readfile.eof())) {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '6') || (readfile.eof())) {
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five };
			if (yorn == 0) {
				// Domination
				string test = listMaker(6, vertex, 0, graph, maker(6));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(6, vertex, 1, graph, maker(6));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 7 vertices
void triangulations7(int yorn, int z) {
	string zero, one, two, three, four, five, six;

	int domof1 = 0;
	int domof2 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("7triang.txt");
	char i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while ((i != ',') && (i != '7') && (!readfile.eof())) {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '7') || (readfile.eof())) {
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six };
			if (yorn == 0) {
				// Domination
				string test = listMaker(7, vertex, 0, graph, maker(7));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(7, vertex, 1, graph, maker(7));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 8 vertices
void triangulations8(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven;

	int domof1 = 0;
	int domof2 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("8triang.txt");
	char i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while ((i != ',') && (i != '8') && (!readfile.eof())) {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '8') || (readfile.eof())) {
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven };
			if (yorn == 0) {
				// Domination
				string test = listMaker(8, vertex, 0, graph, maker(8));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(8, vertex, 1, graph, maker(8));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 9 vertices
void triangulations9(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("9triang.txt");
	char i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while ((i != ',') && (i != '9') && (!readfile.eof())) {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '9') || (readfile.eof())) {
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight };
			if (yorn == 0) {
				// Domination
				string test = listMaker(9, vertex, 0, graph, maker(9));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(9, vertex, 1, graph, maker(9));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 10 vertices
void triangulations10(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("10triang.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine };
			if (yorn == 0) {
				// Domination
				string test = listMaker(10, vertex, 0, graph, maker(10));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(10, vertex, 1, graph, maker(10));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 11 vertices
void triangulations11(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;

	int graphCounter = 1;
	
	vector<int> overall;

	// Creating the buckets
	ifstream readfile("11triang.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten };
			if (yorn == 0) {
				// Domination
				string test = listMaker(11, vertex, 0, graph, maker(11));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(11, vertex, 1, graph, maker(11));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 12 vertices
void triangulations12(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("12triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven };
			if (yorn == 0) {
				// Domination
				string test = listMaker(12, vertex, 0, graph, maker(12));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(12, vertex, 1, graph, maker(12));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 13 vertices
void triangulations13(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("13triang_4.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve };
			if (yorn == 0) {
				// Domination
				string test = listMaker(13, vertex, 0, graph, maker(13));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(13, vertex, 1, graph, maker(13));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 14 vertices
void triangulations14(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("14triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while (i != ',') {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 13) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				thirteen += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			thirteen += "n";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen };
			if (yorn == 0) {
				// Domination
				string test = listMaker(14, vertex, 0, graph, maker(14));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			if (yorn == 1) {
				// Connected domination

				string test = listMaker(14, vertex, 1, graph, maker(14));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			thirteen = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 15 vertices
void triangulations15(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;
	int domof5 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("15triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while (i != ',') {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 13) {
			while (i != ',') {
				thirteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 14) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				fourteen += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			thirteen += "n";
			fourteen += "o";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen };
			if (yorn == 0) {
				// Domination
				string test = listMaker(15, vertex, 0, graph, maker(15));
				if (test == "1") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Domination of 1" << endl;
					cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Domination of 2" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Domination of 3" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Domination of 4" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Domination of 5" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(15, vertex, 1, graph, maker(15));
				if (test == "1") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Connected domination of 1" << endl;
					cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Connected domination of 2" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Connected domination of 3" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Connected domination of 4" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					cout << "Graph #" << graphCounter << ":" << endl;
					cout << "Connected domination of 5" << endl;
					cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			thirteen = "";
			fourteen = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "Number of domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "Number of connected domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 16 vertices
void triangulations16(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;
	int domof5 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("16triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while (i != ',') {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 13) {
			while (i != ',') {
				thirteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 14) {
			while (i != ',') {
				fourteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 15) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				fifteen += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			thirteen += "n";
			fourteen += "o";
			fifteen += "p";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen };
			if (yorn == 0) {
				// Domination
				string test = listMaker(16, vertex, 0, graph, maker(16));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(16, vertex, 1, graph, maker(16));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			thirteen = "";
			fourteen = "";
			fifteen = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "Number of domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "Number of connected domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 17 vertices
void triangulations17(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;
	int domof5 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("17triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while (i != ',') {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 13) {
			while (i != ',') {
				thirteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 14) {
			while (i != ',') {
				fourteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 15) {
			while (i != ',') {
				fifteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 16) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				sixteen += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			thirteen += "n";
			fourteen += "o";
			fifteen += "p";
			sixteen += "q";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen };
			if (yorn == 0) {
				// Domination
				string test = listMaker(17, vertex, 0, graph, maker(17));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(17, vertex, 1, graph, maker(17));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			thirteen = "";
			fourteen = "";
			fifteen = "";
			sixteen = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "Number of domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "Number of connected domination number 5: " << domof5 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Graph with 18 vertices
void triangulations18(int yorn, int z) {
	string zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen;

	int domof1 = 0;
	int domof2 = 0;
	int domof3 = 0;
	int domof4 = 0;
	int domof5 = 0;
	int domof6 = 0;

	int graphCounter = 1;

	vector<int> overall;

	// Creating the buckets
	ifstream readfile("18triang_5.txt");
	char i;
	readfile >> i;
	readfile >> i;
	int n = 0;
	while (!readfile.eof()) {
		readfile >> i;
		if (n == 0) {
			while (i != ',') {
				zero += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 1) {
			while (i != ',') {
				one += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 2) {
			while (i != ',') {
				two += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 3) {
			while (i != ',') {
				three += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 4) {
			while (i != ',') {
				four += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 5) {
			while (i != ',') {
				five += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 6) {
			while (i != ',') {
				six += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 7) {
			while (i != ',') {
				seven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 8) {
			while (i != ',') {
				eight += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 9) {
			while (i != ',') {
				nine += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 10) {
			while (i != ',') {
				ten += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 11) {
			while (i != ',') {
				eleven += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 12) {
			while (i != ',') {
				twelve += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 13) {
			while (i != ',') {
				thirteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 14) {
			while (i != ',') {
				fourteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 15) {
			while (i != ',') {
				fifteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 16) {
			while (i != ',') {
				sixteen += i;
				readfile >> i;
			}
			n += 1;
		}
		else if (n == 17) {
			while ((i != ',') && (i != '1') && (!readfile.eof())) {
				seventeen += i;
				readfile >> i;
			}
			n += 1;
		}
		if ((i == '1') || (readfile.eof())) {
			readfile >> i;
			zero += "a";
			one += "b";
			two += "c";
			three += "d";
			four += "e";
			five += "f";
			six += "g";
			seven += "h";
			eight += "i";
			nine += "j";
			ten += "k";
			eleven += "l";
			twelve += "m";
			thirteen += "n";
			fourteen += "o";
			fifteen += "p";
			sixteen += "q";
			seventeen += "r";
			string vertex;
			vector<string> graph = { zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen };
			if (yorn == 0) {
				// Domination
				string test = listMaker(18, vertex, 0, graph, maker(18));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
				else if (test == "6") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Domination of 6" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(6);
					domof6++;
				}
			}
			if (yorn == 1) {
				// Connected domination
				string test = listMaker(18, vertex, 1, graph, maker(18));
				if (test == "1") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 1" << endl;
					//cout << "The vertex used was: " << vertex << endl << endl;
					overall.push_back(1);
					domof1++;
				}
				else if (test == "2") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 2" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(2);
					domof2++;
				}
				else if (test == "3") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 3" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(3);
					domof3++;
				}
				else if (test == "4") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 4" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(4);
					domof4++;
				}
				else if (test == "5") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 5" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(5);
					domof5++;
				}
				else if (test == "6") {
					//cout << "Graph #" << graphCounter << ":" << endl;
					//cout << "Connected domination of 6" << endl;
					//cout << "The vertices used were: " << vertex << endl << endl;
					overall.push_back(6);
					domof6++;
				}
			}
			graphCounter++;
			zero = "";
			one = "";
			two = "";
			three = "";
			four = "";
			five = "";
			six = "";
			seven = "";
			eight = "";
			nine = "";
			ten = "";
			eleven = "";
			twelve = "";
			thirteen = "";
			fourteen = "";
			fifteen = "";
			sixteen = "";
			seventeen = "";
			n = 0;
		}
	}

	if (yorn == 0) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of domination number 1: " << domof1 << endl;
		cout << "Number of domination number 2: " << domof2 << endl;
		cout << "Number of domination number 3: " << domof3 << endl;
		cout << "Number of domination number 4: " << domof4 << endl;
		cout << "Number of domination number 5: " << domof5 << endl;
		cout << "Number of domination number 6: " << domof6 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}
	if (yorn == 1) {
		for (int l = 0; l < overall.size(); l++) {
			z = z + overall[l];
		}
		cout << endl << "The average connected domination number is: " << double(z) / overall.size() << endl;
		cout << "The highest number is: " << *max_element(overall.begin(), overall.end()) << endl;
		cout << "The lowest number is: " << *min_element(overall.begin(), overall.end()) << endl;
		cout << "Number of connected domination number 1: " << domof1 << endl;
		cout << "Number of connected domination number 2: " << domof2 << endl;
		cout << "Number of connected domination number 3: " << domof3 << endl;
		cout << "Number of connected domination number 4: " << domof4 << endl;
		cout << "Number of connected domination number 5: " << domof5 << endl;
		cout << "Number of connected domination number 6: " << domof6 << endl;
		cout << "There are " << overall.size() << " graphs" << endl;
	}

	readfile.close();
}

// Makes the GUI
void forTheGUI() {
	char anyVal = '0';
	cout << endl << "Press any button" << endl;
	anyVal = _getch();
	system("cls");
}

// Making a power set for the vertices and putting it into a list
vector<string> maker(int size) {
	string a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
	a = "a";
	b = "b";
	c = "c";
	d = "d";
	e = "e";
	f = "f";
	g = "g";
	h = "h";
	i = "i";
	j = "j";
	k = "k";
	l = "l";
	m = "m";
	n = "n";
	o = "o";
	p = "p";
	q = "q";
	r = "r";

	vector<string> vertexHolder;
	vector<string> vertexList;
	if (size == 6) { vertexHolder = { a, b, c, d, e, f }; }
	if (size == 7) { vertexHolder = { a, b, c, d, e, f, g }; }
	if (size == 8) { vertexHolder = { a, b, c, d, e, f, g, h }; }
	if (size == 9) { vertexHolder = { a, b, c, d, e, f, g, h, i }; }
	if (size == 10) { vertexHolder = { a, b, c, d, e, f, g, h, i, j }; }
	if (size == 11) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k }; }
	if (size == 12) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l }; }
	if (size == 13) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m }; }
	if (size == 14) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m, n }; }
	if (size == 15) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m, n, o }; }
	if (size == 16) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p }; }
	if (size == 17) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q }; }
	if (size == 18) { vertexHolder = { a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r }; }

	double thing = pow(2, vertexHolder.size());
	int counter, jj;
	string aa = "";
	for (counter = 0; counter < thing; counter++) {
		for (jj = 0; jj < vertexHolder.size(); jj++) {
			if (counter & (1 << jj)) {
				aa = aa + vertexHolder.at(jj);
			}
		}
		vertexList.push_back(aa);
		aa = "";
	}
	return vertexList;
}

// Compares power set to the actual list to see if a certain bucket works
string listMaker(int size, string& vertex, int num, vector<string> actual, vector<string> combinationer) {
	// Makes the power set out of the buckets
	vector<string> graphActual;
	double thing = pow(2, actual.size());
	int counter, j;
	string a = "";
	for (counter = 0; counter < thing; counter++) {
		for (j = 0; j < actual.size(); j++) {
			if (counter & (1 << j)) {
				a = a + actual.at(j);
			}
		}
		graphActual.push_back(a);
		a = "";
	}

	// Sorts the power sets (newGraph contains the buckets, newVertex contains the vertices used
	vector<string> newGraph;
	vector<string> newVertex;

	// One bucket
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 1) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination and connected domination
	for (int i = 0; i < newVertex.size(); i++) {
		string domNum = newVertex.at(i);
		string number = lengthOfLetter(domNum);
		string ans = newGraph.at(i);
		string answer = "";
		answer = compare1(ans, size);
		if (answer == "1") {
			vertex = domNum;
			return number;
		}
	}
	newGraph.clear();
	newVertex.clear();

	// Two buckets
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 2) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination
	if (num == 0) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				vertex = domNum;
				return number;
			}
		}
	}
	// For connected domination
	else if (num == 1) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				if (connectedChecker2(actual, domNum) == "yes") {
					vertex = domNum;
					return number;
				}
			}
		}
	}
	newGraph.clear();
	newVertex.clear();

	// Three buckets
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 3) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination
	if (num == 0) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				vertex = domNum;
				return number;
			}
		}
	}
	// For connected domination
	else if (num == 1) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				if (connectedChecker3(actual, domNum) == "yes") {
					vertex = domNum;
					return number;
				}
			}
		}
	}
	newGraph.clear();
	newVertex.clear();

	// Four buckets
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 4) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination
	if (num == 0) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				vertex = domNum;
				return number;
			}
		}
	}
	// For connected domination
	else if (num == 1) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				if (connectedChecker4(actual, domNum) == "yes") {
					vertex = domNum;
					return number;
				}
			}
		}
	}
	newGraph.clear();
	newVertex.clear();

	// Five buckets
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 5) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination
	if (num == 0) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				vertex = domNum;
				return number;
			}
		}
	}
	// For connected domination
	else if (num == 1) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				if (connectedChecker5(actual, domNum) == "yes") {
					vertex = domNum;
					return number;
				}
			}
		}
	}
	newGraph.clear();
	newVertex.clear();

	// Six buckets
	for (int i = 0; i < combinationer.size(); i++) {
		string checker = combinationer.at(i);
		string inserter = graphActual.at(i);
		if (checker.size() == 6) {
			newGraph.push_back(inserter);
			newVertex.push_back(checker);
		}
	}
	// For domination
	if (num == 0) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				vertex = domNum;
				return number;
			}
		}
	}
	// For connected domination
	else if (num == 1) {
		for (int i = 0; i < newVertex.size(); i++) {
			string domNum = newVertex.at(i);
			string number = lengthOfLetter(domNum);
			string ans = newGraph.at(i);
			string answer = "";
			answer = compare1(ans, size);
			if (answer == "1") {
				if (connectedChecker6(actual, domNum) == "yes") {
					vertex = domNum;
					return number;
				}
			}
		}
	}
	newGraph.clear();
	newVertex.clear();

	return "";
}

// Finds the length of a letter (because apparently this is needed)
string lengthOfLetter(string letter) {
	if (letter.size() == 1) {
		return "1";
	}
	else if (letter.size() == 2) {
		return "2";
	}
	else if (letter.size() == 3) {
		return "3";
	}
	else if (letter.size() == 4) {
		return "4";
	}
	else if (letter.size() == 5) {
		return "5";
	}
	else if (letter.size() == 6) {
		return "6";
	}
	return "";
}

// Sorts a string (used for buckets)
string sortingString(string str) {
	sort(str.begin(), str.end());
	return str;
}

// Removes any duplicate letters from a string (used for buckets)
string removeDuplicates(string str) {
	string final = "";
	int i, j;
	for (i = 0; i < str.size(); i++) {
		for (j = 0; j < i; j++) {
			if (str[i] == str[j]) {
				break;
			}
		}
		if (j == i) {
			final += str[i];
		}
	}
	return final;
}

// Sorts the bucket, removes duplicates, then determines if that bucket works
string compare1(string str, int size) {
	str = sortingString(str);
	str = removeDuplicates(str);
	if (size == 6) {
		if (str == "abcdef") { return "1"; }
		else { return "0"; }
	}
	else if (size == 7) {
		if (str == "abcdefg") { return "1"; }
		else { return "0"; }
	}
	else if (size == 8) {
		if (str == "abcdefgh") { return "1"; }
		else { return "0"; }
	}
	else if (size == 9) {
		if (str == "abcdefghi") { return "1"; }
		else { return "0"; }
	}
	else if (size == 10) {
		if (str == "abcdefghij") { return "1"; }
		else { return "0"; }
	}
	else if (size == 11) {
		if (str == "abcdefghijk") { return "1"; }
		else { return "0"; }
	}
	else if (size == 12) {
		if (str == "abcdefghijkl") { return "1"; }
		else { return "0"; }
	}
	else if (size == 13) {
		if (str == "abcdefghijklm") { return "1"; }
		else { return "0"; }
	}
	else if (size == 14) {
		if (str == "abcdefghijklmn") { return "1"; }
		else { return "0"; }
	}
	else if (size == 15) {
		if (str == "abcdefghijklmno") { return "1"; }
		else { return "0"; }
	}
	else if (size == 16) {
		if (str == "abcdefghijklmnop") { return "1"; }
		else { return "0"; }
	}
	else if (size == 17) {
		if (str == "abcdefghijklmnopq") { return "1"; }
		else { return "0"; }
	}
	else if (size == 18) {
		if (str == "abcdefghijklmnopqr") { return "1"; }
		else { return "0"; }
	}
	return "";
}

// Making the buckets for the connected checkers
string forConnected(vector<string> str, string compStr, string retStr) {
	if (compStr == "a") {
		return retStr = str.at(0);
	}
	else if (compStr == "b") {
		return retStr = str.at(1);
	}
	else if (compStr == "c") {
		return retStr = str.at(2);
	}
	else if (compStr == "d") {
		return retStr = str.at(3);
	}
	else if (compStr == "e") {
		return retStr = str.at(4);
	}
	else if (compStr == "f") {
		return retStr = str.at(5);
	}
	else if (compStr == "g") {
		return retStr = str.at(6);
	}
	else if (compStr == "h") {
		return retStr = str.at(7);
	}
	else if (compStr == "i") {
		return retStr = str.at(8);
	}
	else if (compStr == "j") {
		return retStr = str.at(9);
	}
	else if (compStr == "k") {
		return retStr = str.at(10);
	}
	else if (compStr == "l") {
		return retStr = str.at(11);
	}
	else if (compStr == "m") {
		return retStr = str.at(12);
	}
	else if (compStr == "n") {
		return retStr = str.at(13);
	}
	else if (compStr == "o") {
		return retStr = str.at(14);
	}
	else if (compStr == "p") {
		return retStr = str.at(15);
	}
	else if (compStr == "q") {
		return retStr = str.at(16);
	}
	else if (compStr == "r") {
		return retStr = str.at(17);
	}
	return "";
}

// Checks if a certain letter is in a bucket (used in the connected checkers)
string forCompare(string test, string str) {
	for (int i = 0; i < test.size(); i++) {
		if (test[i] == str[0]) {
			return "yes";
		}
	}
	return "no";
}

// Makes the list of edges
vector<string> forConnected5(string test, string letters, string actualletter) {
	vector<string> currentVertices;
	for (int p = 0; p < test.size(); p++) {
		if (test.at(p) == letters[0]) {
			string fromLetters;
			fromLetters = letters[0];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
		else if (test.at(p) == letters[1]) {
			string fromLetters;
			fromLetters = letters[1];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
		else if (test.at(p) == letters[2]) {
			string fromLetters;
			fromLetters = letters[2];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
		else if (test.at(p) == letters[3]) {
			string fromLetters;
			fromLetters = letters[3];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
		else if (test.at(p) == letters[4]) {
			string fromLetters;
			fromLetters = letters[4];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
		else if (test.at(p) == letters[5]) {
			string fromLetters;
			fromLetters = letters[5];
			currentVertices.push_back(sortingString(fromLetters + actualletter));
		}
	}
	return currentVertices;
}

// Checks for traingles
string forTriangles(string tester1, string tester2, string tester3) {
	if ((tester1[0] == tester2[0]) && (tester1[1] == tester3[0]) && (tester2[1] == tester3[1])) {
		return "no";
	}
	if ((tester1[0] == tester2[0]) && (tester1[1] == tester3[1]) && (tester2[1] == tester3[0])) {
		return "no";
	}
	if ((tester1[0] == tester3[0]) && (tester1[1] == tester2[0]) && (tester2[1] == tester3[1])) {
		return "no";
	}
	if ((tester1[0] == tester3[0]) && (tester1[1] == tester2[1]) && (tester2[0] == tester3[1])) {
		return "no";
	}
	if ((tester1[0] == tester2[1]) && (tester1[1] == tester3[1]) && (tester2[0] == tester3[0])) {
		return "no";
	}
	if ((tester1[0] == tester3[1]) && (tester1[1] == tester2[1]) && (tester2[0] == tester3[0])) {
		return "no";
	}
	return "";
}

// Checks for connected domination of 2
string connectedChecker2(vector<string> str, string letters) {
	string one;
	one = letters[0];
	string two;
	two = letters[1];
	string test;
	test = forConnected(str, two, test);
	return forCompare(test, one);
}

// Check for connected domination of 3
string connectedChecker3(vector<string> str, string letters) {
	string one;
	one = letters[0];
	string two;
	two = letters[1];
	string three;
	three = letters[2];
	string test1;
	test1 = forConnected(str, one, test1);
	string test2;
	test2 = forConnected(str, two, test2);
	string test3;
	test3 = forConnected(str, three, test3);
	
	// If one bucket has the letters of the other two in it
	string yes12;
	string yes13;
	yes12 = forCompare(test1, two);
	yes13 = forCompare(test1, three);
	if ((yes12 == "yes") && (yes13 == "yes")) {
		return "yes";
	}
	string yes21;
	string yes23;
	yes21 = forCompare(test2, one);
	yes23 = forCompare(test2, three);
	if ((yes21 == "yes") && (yes23 == "yes")) {
		return "yes";
	}
	string yes31;
	string yes32;
	yes31 = forCompare(test3, one);
	yes32 = forCompare(test3, two);
	if ((yes31 == "yes") && (yes32 == "yes")) {
		return "yes";
	}
	return "no";
}

// Check for connected domination of 4
string connectedChecker4(vector<string> str, string letters) {
	string one;
	one = letters[0];
	string two;
	two = letters[1];
	string three;
	three = letters[2];
	string four;
	four = letters[3];
	string test1;
	test1 = forConnected(str, one, test1);
	string test2;
	test2 = forConnected(str, two, test2);
	string test3;
	test3 = forConnected(str, three, test3);
	string test4;
	test4 = forConnected(str, four, test4);

	// If one bucket contains the letters of the other three
	string yes12 = forCompare(test1, two);
	string yes13 = forCompare(test1, three);
	string yes14 = forCompare(test1, four);
	if ((yes12 == "yes") && (yes13 == "yes") && (yes14 == "yes")) {
		return "yes";
	}
	string yes21 = forCompare(test2, one);
	string yes23 = forCompare(test2, three);
	string yes24 = forCompare(test2, four);
	if ((yes21 == "yes") && (yes23 == "yes") && (yes24 == "yes")) {
		return "yes";
	}
	string yes31 = forCompare(test3, one);
	string yes32 = forCompare(test3, two);
	string yes34 = forCompare(test3, four);
	if ((yes31 == "yes") && (yes32 == "yes") && (yes34 == "yes")) {
		return "yes";
	}
	string yes41 = forCompare(test4, one);
	string yes42 = forCompare(test4, two);
	string yes43 = forCompare(test4, three);
	if ((yes41 == "yes") && (yes42 == "yes") && (yes43 == "yes")) {
		return "yes";
	}

	// If it's a line
	if ((yes12 == "yes") && (yes13 == "yes") && (yes34 == "yes")) {
		return "yes";
	}
	if ((yes12 == "yes") && (yes13 == "yes") && (yes24 == "yes")) {
		return "yes";
	}
	if ((yes14 == "yes") && (yes13 == "yes") && (yes32 == "yes")) {
		return "yes";
	}
	if ((yes14 == "yes") && (yes13 == "yes") && (yes42 == "yes")) {
		return "yes";
	}
	if ((yes12 == "yes") && (yes14 == "yes") && (yes23 == "yes")) {
		return "yes";
	}
	if ((yes12 == "yes") && (yes14 == "yes") && (yes43 == "yes")) {
		return "yes";
	}

	if ((yes21 == "yes") && (yes23 == "yes") && (yes34 == "yes")) {
		return "yes";
	}
	if ((yes21 == "yes") && (yes23 == "yes") && (yes14 == "yes")) {
		return "yes";
	}
	if ((yes24 == "yes") && (yes23 == "yes") && (yes41 == "yes")) {
		return "yes";
	}
	if ((yes24 == "yes") && (yes23 == "yes") && (yes31 == "yes")) {
		return "yes";
	}
	if ((yes24 == "yes") && (yes21 == "yes") && (yes43 == "yes")) {
		return "yes";
	}
	if ((yes24 == "yes") && (yes21 == "yes") && (yes13 == "yes")) {
		return "yes";
	}

	if ((yes31 == "yes") && (yes32 == "yes") && (yes14 == "yes")) {
		return "yes";
	}
	if ((yes31 == "yes") && (yes32 == "yes") && (yes24 == "yes")) {
		return "yes";
	}
	if ((yes31 == "yes") && (yes34 == "yes") && (yes12 == "yes")) {
		return "yes";
	}
	if ((yes31 == "yes") && (yes34 == "yes") && (yes42 == "yes")) {
		return "yes";
	}
	if ((yes32 == "yes") && (yes34 == "yes") && (yes21 == "yes")) {
		return "yes";
	}
	if ((yes32 == "yes") && (yes34 == "yes") && (yes41 == "yes")) {
		return "yes";
	}

	if ((yes41 == "yes") && (yes42 == "yes") && (yes13 == "yes")) {
		return "yes";
	}
	if ((yes41 == "yes") && (yes42 == "yes") && (yes23 == "yes")) {
		return "yes";
	}
	if ((yes41 == "yes") && (yes43 == "yes") && (yes12 == "yes")) {
		return "yes";
	}
	if ((yes41 == "yes") && (yes43 == "yes") && (yes32 == "yes")) {
		return "yes";
	}
	if ((yes42 == "yes") && (yes43 == "yes") && (yes21 == "yes")) {
		return "yes";
	}
	if ((yes42 == "yes") && (yes43 == "yes") && (yes31 == "yes")) {
		return "yes";
	}

	return "no";
}

// Check for connected domination of 5
string connectedChecker5(vector<string> str, string letters) {
	string one;
	one = letters[0];
	string two;
	two = letters[1];
	string three;
	three = letters[2];
	string four;
	four = letters[3];
	string five;
	five = letters[4];
	string test1;
	test1 = forConnected(str, one, test1);
	string test2;
	test2 = forConnected(str, two, test2);
	string test3;
	test3 = forConnected(str, three, test3);
	string test4;
	test4 = forConnected(str, four, test4);
	string test5;
	test5 = forConnected(str, five, test5);

	// Determining the edges
	vector<string> listVertices1 = forConnected5(test1, letters, one);
	vector<string> listVertices2 = forConnected5(test2, letters, two);
	vector<string> listVertices3 = forConnected5(test3, letters, three);
	vector<string> listVertices4 = forConnected5(test4, letters, four);
	vector<string> listVertices5 = forConnected5(test5, letters, five);

	// Putting the edges together in one list
	vector<string> listVertices;
	for (int i = 0; i < listVertices1.size(); i++) {
		listVertices.push_back(listVertices1.at(i));
	}
	for (int i = 0; i < listVertices2.size(); i++) {
		listVertices.push_back(listVertices2.at(i));
	}
	for (int i = 0; i < listVertices3.size(); i++) {
		listVertices.push_back(listVertices3.at(i));
	}
	for (int i = 0; i < listVertices4.size(); i++) {
		listVertices.push_back(listVertices4.at(i));
	}
	for (int i = 0; i < listVertices5.size(); i++) {
		listVertices.push_back(listVertices5.at(i));
	}
	
	// Sorting and removing duplicates
	string removerHelper;
	for (int i = 0; i < listVertices.size(); i++) {
		string testing = listVertices.at(i);
		if (testing.at(0) != testing.at(1)) {
			removerHelper = testing;
			break;
		}
	}
	for (int i = 0; i < listVertices.size(); i++) {
		string testing = listVertices.at(i);
		if (testing.at(0) == testing.at(1)) {
			listVertices.at(i) = removerHelper;
		}
	}
	sort(listVertices.begin(), listVertices.end());
	auto itt = std::unique(listVertices.begin(), listVertices.end());
	listVertices.erase(itt, listVertices.end());

	// Find isolated vertices
	int one1 = 0;
	int two2 = 0;
	int three3 = 0;
	int four4 = 0;
	int five5 = 0;
	for (int i = 0; i < listVertices.size(); i++) {
		string tester = listVertices.at(i);
		if (tester == "") {
			return "no";
		}
		string first;
		first = tester[0];
		string second;
		second = tester[1];
		if ((first == one) || (second == one)) {
			one1 = 1;
		}
		if ((first == two) || (second == two)) {
			two2 = 1;
		}
		if ((first == three) || (second == three)) {
			three3 = 1;
		}
		if ((first == four) || (second == four)) {
			four4 = 1;
		}
		if ((first == five) || (second == five)) {
			five5 = 1;
		}
	}
	if ((one1 == 0) || (two2 == 0) || (three3 == 0) || (four4 == 0) || (five5 == 0)) {
		return "no";
	}

	// Check size
	if (listVertices.size() >= 5) {
		return "yes";
	}
	else if (listVertices.size() <= 3) {
		return "no";
	}
	else if (listVertices.size() == 4) {
		// Checks for triangles
		string tester1;
		string tester2;
		string tester3;
		tester1 = listVertices.at(0);
		tester2 = listVertices.at(1);
		tester3 = listVertices.at(2);
		if (forTriangles(tester1, tester2, tester3) == "no") {
			return "no";
		}
		tester1 = listVertices.at(0);
		tester2 = listVertices.at(1);
		tester3 = listVertices.at(3);
		if (forTriangles(tester1, tester2, tester3) == "no") {
			return "no";
		}
		tester1 = listVertices.at(0);
		tester2 = listVertices.at(2);
		tester3 = listVertices.at(3);
		if (forTriangles(tester1, tester2, tester3) == "no") {
			return "no";
		}
		tester1 = listVertices.at(1);
		tester2 = listVertices.at(2);
		tester3 = listVertices.at(3);
		if (forTriangles(tester1, tester2, tester3) == "no") {
			return "no";
		}
		return "yes";
	}

	return "no";
}

// (NOT FINISHED) Check for connected domination of 6
string connectedChecker6(vector<string> str, string letters) {
	string one;
	one = letters[0];
	string two;
	two = letters[1];
	string three;
	three = letters[2];
	string four;
	four = letters[3];
	string five;
	five = letters[4];
	string six;
	six = letters[5];
	string test1;
	test1 = forConnected(str, one, test1);
	string test2;
	test2 = forConnected(str, two, test2);
	string test3;
	test3 = forConnected(str, three, test3);
	string test4;
	test4 = forConnected(str, four, test4);
	string test5;
	test5 = forConnected(str, five, test5);
	string test6;
	test6 = forConnected(str, six, test6);

	// Determining the edges
	vector<string> listVertices1 = forConnected5(test1, letters, one);
	vector<string> listVertices2 = forConnected5(test2, letters, two);
	vector<string> listVertices3 = forConnected5(test3, letters, three);
	vector<string> listVertices4 = forConnected5(test4, letters, four);
	vector<string> listVertices5 = forConnected5(test5, letters, five);
	vector<string> listVertices6 = forConnected5(test6, letters, six);

	// Putting the edges together in one list
	vector<string> listVertices;
	for (int i = 0; i < listVertices1.size(); i++) {
		listVertices.push_back(listVertices1.at(i));
	}
	for (int i = 0; i < listVertices2.size(); i++) {
		listVertices.push_back(listVertices2.at(i));
	}
	for (int i = 0; i < listVertices3.size(); i++) {
		listVertices.push_back(listVertices3.at(i));
	}
	for (int i = 0; i < listVertices4.size(); i++) {
		listVertices.push_back(listVertices4.at(i));
	}
	for (int i = 0; i < listVertices5.size(); i++) {
		listVertices.push_back(listVertices5.at(i));
	}
	for (int i = 0; i < listVertices6.size(); i++) {
		listVertices.push_back(listVertices6.at(i));
	}

	// Sorting and removing duplicates
	string removerHelper;
	for (int i = 0; i < listVertices.size(); i++) {
		string testing = listVertices.at(i);
		if (testing.at(0) != testing.at(1)) {
			removerHelper = testing;
			break;
		}
	}
	for (int i = 0; i < listVertices.size(); i++) {
		string testing = listVertices.at(i);
		if (testing.at(0) == testing.at(1)) {
			listVertices.at(i) = removerHelper;
		}
	}
	sort(listVertices.begin(), listVertices.end());
	auto itt = std::unique(listVertices.begin(), listVertices.end());
	listVertices.erase(itt, listVertices.end());

	// Find isolated vertices
	int one1 = 0;
	int two2 = 0;
	int three3 = 0;
	int four4 = 0;
	int five5 = 0;
	int six6 = 0;
	for (int i = 0; i < listVertices.size(); i++) {
		string tester = listVertices.at(i);
		if (tester == "") {
			return "no";
		}
		string first;
		first = tester[0];
		string second;
		second = tester[1];
		if ((first == one) || (second == one)) {
			one1 = 1;
		}
		if ((first == two) || (second == two)) {
			two2 = 1;
		}
		if ((first == three) || (second == three)) {
			three3 = 1;
		}
		if ((first == four) || (second == four)) {
			four4 = 1;
		}
		if ((first == five) || (second == five)) {
			five5 = 1;
		}
		if ((first == six) || (second == six)) {
			six6 = 1;
		}
	}
	if ((one1 == 0) || (two2 == 0) || (three3 == 0) || (four4 == 0) || (five5 == 0) || (six6 == 0)) {
		return "no";
	}

	// Check size
	if (listVertices.size() >= 8) {
		return "yes";
	}
	else if (listVertices.size() <= 4) {
		return "no";
	}
	else if (listVertices.size() == 7) {
		//box
	}
	else if (listVertices.size() == 6) {
		//two triangles
	}
	else if (listVertices.size() == 5) {
		//triangles
	}

	return "no";
}
// End :)