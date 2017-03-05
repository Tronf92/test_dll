#include <iostream>
#include <windows.h>
#include <tchar.h>

using namespace std;

int main(){
	HMODULE DLL = LoadLibrary(_T("espeak.dll"));
	if (DLL){
		cout << "Works " << endl;
	}






	system("pause");
	return 0;

}