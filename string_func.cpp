#include <string>
#include <vector>

std::string sLeft(std::string sInput, int iStartPosition){
	std::string result;
	result = sInput.substr(iStartPosition,sInput.length()-iStartPosition);
	return result;
}

std::string sRight(std::string sInput, int iCutFromRight){
	std::string result;
	result = sInput.substr(0,sInput.length()-iCutFromRight);
	return result;
}

std::string sEraseAllSubStr(std::string sInput, std::string sSubStr)
{
	std::string result;
	size_t pos = std::string::npos;
 	result = sInput;
	while ((pos  = result.find(sSubStr) )!= std::string::npos)
	{
		result.erase(pos, sSubStr.length());
	}
	return result;
}

std::vector<std::string> sSplit(std::string sInput, std::string sToken){
    std::vector<std::string>result;
    while(sInput.size()){
        int index = sInput.find(sToken);
        if(index!=std::string::npos){
            result.push_back(sInput.substr(0,index));
            sInput = sInput.substr(index+sToken.size());
            if(sInput.size()==0)result.push_back(sInput);
        }else{
            result.push_back(sInput);
            sInput = "";
        }
    }
    return result;
}

std::string sGetArgv(int argc, char* argv[], std::string sKey)
{
	std::string result;
	result = "";
	for (int i = 1; i < argc; i++)
	{
		if ((argv[i] == sKey) && ((i+1) < argc)) {
			result = argv[i+1];
		}
	}
	return result;
}
