#include <iostream>
using namespace std;
#include <fstream>
class Base {
public:
	virtual void Display(const char* path) {
		string line;
		string tmp;
		ifstream myfile(path);
		if (myfile.is_open())
		{
			while (getline(myfile, tmp))
			{
				line += tmp;
				line += '\n';
			}
			myfile.close();
		}

		else cout << "Unable to open file";
		cout << line << endl;
	}
};
class ASCII : public Base{
public:
	void  Display(const char* path) override {
		string line;
		string tmp;
		ifstream myfile(path);
		char temp[20];
		if (myfile.is_open())
		{
			while (getline(myfile, tmp))
			{
				for (int i = 0; i < tmp.length(); i++)
				{
					_itoa((int)tmp[i], temp, 10);
					line += temp;
				}
				line += '\n';
			}
			myfile.close();
		}

		else cout << "Unable to open file";
		cout << line << endl;
	}
};
class Binary : public Base {
public:
	void  Display(const char* path) override {
		string line;
		string tmp;
		ifstream myfile(path);
		if (myfile.is_open())
		{
			while (getline(myfile, tmp))
			{
				for (int i = 0; i < tmp.length(); i++)
				{
					switch (tmp[i])
					{
					case'SP':
						line += "00100000";
						break;
					case'!':
						line += "00100001";
						break;
					case'"':
						line += "00100010";
						break;
					case'#':
						line += "00100011";
						break;
					case'$':
						line += "00100100";
						break;
					case'%':
						line += "00100101";
						break;
					case'&':
						line += "00100110";
						break;
					case'`':
						line += "00100111";
						break;
					case'(':
						line += "00101000";
						break;
					case')':
						line += "00101001";
						break;
					case'*':
						line += "00101010";
						break;
					case'+':
						line += "00101011";
						break;
					case'-':
						line += "00101101";
						break;
					case'.':
						line += "00101110";
						break;
					case'/':
						line += "00101111";
						break;
					case'0':
						line += "00110000";
						break;
					case'1':
						line += "00110001";
						break;
					case'2':
						line += "00110010";
						break;
					case'3':
						line += "00110011";
						break;
					case'4':
						line += "00110100";
						break;
					case'5':
						line += "00110101";
						break;
					case'6':
						line += "00110110";
						break;
					case'7':
						line += "00110111";
						break;
					case'8':
						line += "00111000";
						break;
					case'9':
						line += "00111001";
						break;
					case':':
						line += "00111010";
						break;
					case';':
						line += "00111011";
						break;
					case'<':
						line += "00111100";
						break;
					case'=':
						line += "00111101";
						break;
					case'>':
						line += "00111110";
						break;
					case'?':
						line += "00111111";
						break;
					case'@':
						line += "01000000";
						break;
					case'A':
						line += "01000001";
						break;
					case'B':
						line += "01000010";
						break;
					case'C':
						line += "01000011";
						break;
					case'D':
						line += "01000100";
						break;
					case'E':
						line += "01000101";
						break;
					case'F':
						line += "01000110";
						break;
					case'G':
						line += "01000111";
						break;
					case'H':
						line += "01001000";
						break;
					case'I':
						line += "01001001";
						break;
					case'J':
						line += "01001010";
						break;
					case'K':
						line += "01001011";
						break;
					case'L':
						line += "01001100";
						break;
					case'M':
						line += "01001101";
						break;
					case'N':
						line += "01001110";
						break;
					case'O':
						line += "01001111";
						break;
					case'P':
						line += "01010000";
						break;
					case'Q':
						line += "01010001";
						break;
					case'R':
						line += "01010010";
						break;
					case'S':
						line += "01010011";
						break;
					case'T':
						line += "01010100";
						break;
					case'U':
						line += "01010101";
						break;
					case'V':
						line += "01010110";
						break;
					case'W':
						line += "01010111";
						break;
					case'X':
						line += "01011000";
						break;
					case'Y':
						line += "01011001";
						break;
					case'Z':
						line += "01011010";
						break;
					case'[':
						line += "01011011";
						break;
					case']':
						line += "01011101";
						break;
					case'\'':
						line += "01011100";
						break;
					case'^':
						line += "01011110";
						break;
					case'_':
						line += "01011111";
						break;
					case'a':
						line += "01100001";
						break;
					case'b':
						line += "01100010";
						break;
					case'c':
						line += "01100011";
						break;
					case'd':
						line += "01100100";
						break;
					case'e':
						line += "01100101";
						break;
					case'f':
						line += "01100110";
						break;
					case'g':
						line += "01100111";
						break;
					case'h':
						line += "01101000";
						break;
					case'i':
						line += "01101001";
						break;
					case'j':
						line += "01101010";
						break;
					case'k':
						line += "01101011";
						break;
					case'l':
						line += "01101100";
						break;
					case'm':
						line += "01101101";
						break;
					case'n':
						line += "01101110";
						break;
					case'o':
						line += "01101111";
						break;
					case'p':
						line += "01110000";
						break;
					case'q':
						line += "01110001";
						break;
					case'r':
						line += "01110010";
						break;
					case's':
						line += "01110011";
						break;
					case't':
						line += "01110100";
						break;
					case'u':
						line += "01110101";
						break;
					case'v':
						line += "01110110";
						break;
					case'w':
						line += "01110111";
						break;
					case'x':
						line += "01111000";
						break;
					case'y':
						line += "01111001";
						break;
					case'z':
						line += "01111010";
						break;
					case'{':
						line += "01111011";
						break;
					case'|':
						line += "01111100";
						break;
					case'}':
						line += "01111101";
						break;
					case'~':
						line += "01111110";
						break;
					}
				}
				line += '\n';
			}
			myfile.close();
		}

		else cout << "Unable to open file";
		cout << line << endl;
	}
};
int main() {
	Base b;
	ASCII A;
	Binary B;
	cout << "Normal view ->\n" << endl;
	b.Display("D:\Test.txt");
	cout << "ASCII view ->\n" << endl;
	A.Display("D:\Test.txt");
	cout << "Binary view ->\n" << endl;
	B.Display("D:\Test.txt");
}
