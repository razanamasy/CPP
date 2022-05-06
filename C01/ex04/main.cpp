#include <iostream>
#include <fstream>
using std::string;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Bad parametres number" << endl;
		return (1);
	}
	string	buffer;
	string	fileContent;
	size_t	sizeS1;
	size_t	start = -1;
	string	s1 = argv[2];
	string	s2 = argv[3];
	sizeS1 = s1.length();

	//Retrieve the name of file and create name of file and name of replacefile variable
	string	inFile = argv[1];
	string	outFile = inFile + ".replace";

	// put the stream of argv[1] into my buffer
	ifstream ifs(inFile.c_str());
	if (!ifs.good())
	{
    	cout << "incorrect input filename" << endl;
		return (1);
	}
	while (getline(ifs, buffer))
	{
		fileContent += buffer;
		fileContent += "\n";
	}
	ifs.close();
	//Search argv[2] into file and replace with argv[3]
	while (1 && s1.length() >= 1)
	{
		start = fileContent.find(s1, start+1);
		if (start == string::npos)
			break ;
		fileContent.erase(start, sizeS1);
		fileContent.insert(start, s2);
	}
	ofstream ofs(outFile.c_str());
	ofs << fileContent;
	ofs.close();
	return (0);
}
