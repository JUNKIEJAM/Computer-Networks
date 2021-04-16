#include<bits/stdc++.h>
using namespace std;

string xorr(string first,string second)
{
	string res = "";
	
	int n = second.length();
	
	for(int i = 1; i < n; i++) 
	{
		if (first[i] == second[i])
			res += "0";
		else
			res += "1";
	}
	return res;
}

string moddiv(string divident, string divisor)
{
	
	int pick = divisor.length();
	
	string tmp = divident.substr(0, pick);
	
	int n = divident.length();
	
	while (pick < n) 
	{
		if (tmp[0] == '1')
	
			tmp = xorr(divisor, tmp) + divident[pick];
		else

			tmp = xorr(std::string(pick, '0'), tmp) + 
				divident[pick];

		pick += 1;
	}

	if (tmp[0] == '1')
		tmp = xorr(divisor, tmp);
	else
		tmp = xorr(std::string(pick, '0'), tmp);
		
	return tmp;
}

void encodeData(string data, string crc)
{
	int l_crc = crc.length();

	string appended_data = (data + 
							std::string(
								l_crc- 1, '0'));
	
	string remainder = moddiv(appended_data, crc);
	
	string codeword = data + remainder;
	cout << "Remainder : "
		<< remainder << "\n";
	cout << "Encoded Data  :"
		<< codeword << "\n";
}

int main()
{
 
    string data;
    cout<<"Enter the data: ";
    cin>>data;
	
    string crc;

    cout<<"Enter the CRC: ";
    cin>>crc;
	
	encodeData(data,crc);
	
	return 0;
}


