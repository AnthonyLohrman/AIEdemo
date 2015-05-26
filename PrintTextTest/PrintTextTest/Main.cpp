#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
using namespace std;


int main()
{			
		string input;
		
		ofstream Test;
		Test.open("example.txt", ios::app);
		
		time_t now;
		struct tm timeinfo;
		char st[80];		
				
		time(&now);

		localtime_s(&timeinfo, &now);
					
		strftime(st, 80, "Date: %d-%m-%y     Time: %I:%M:%S%p", &timeinfo);
				
		Test << st;
		Test << "\n";
		Test.close();		
}