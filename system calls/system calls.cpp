#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	string myFile[50];
	string adjc;
	

	ifstream file("daftar-nama.txt");
	ofstream fileExport;
	fileExport.open("4210191025_Devinindya.csv");
	if (file.is_open())
	{
		int i = 0;
		while (!file.eof())
		{
			getline(file, adjc);
			myFile[i] = adjc;
			i++;
		
		}
		file.close();
		for (int j = 0; j < 30; j++)
		{
			fileExport << myFile[j] << endl;
		}
		cout << "File Already Created!" << endl;
		if (fileExport.is_open())
		{
			for (int j = 29; j > 1; j--)
			{
				fileExport << myFile[j] << endl;
			}
			fileExport.close();
			cout << "Rewrite File Done!";
		}
		else
			cout << "Unable To Open File :( !";
	}
	else
		cout << "Unable To Open File!";
	

}