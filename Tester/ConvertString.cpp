#include "ConvertString.h"


ConvertString::ConvertString(void)
{
}

String^ stringToString(string str)
{
	String^ str2 = gcnew String(str.c_str());
	return str2;
}

String^ intToString(int numb)
{
	string str = to_string(numb);
	String^ str2 = gcnew String(str.c_str());
	return str2;
}

void MarshalString (String ^ s, string& os )
{
	//convert String to string
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}