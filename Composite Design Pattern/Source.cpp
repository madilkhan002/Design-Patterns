#include<bits/stdc++.h>
using namespace std;

// interface
class FileSystem
{
public:
	virtual void ls() = 0;
};

// File
class File : public FileSystem
{
public:
	string fileName;
	File(string fileName)
	{
		this->fileName = fileName;
	}

	void ls() override
	{
		cout << "File Name : " << fileName << '\n';
	}

};

//Dictory
class Dictory : public FileSystem
{
public:
	vector<FileSystem*>arr;
	string dictoryName;
	Dictory(string dictoryName):dictoryName(dictoryName){}
	void add(FileSystem* obj)
	{
		arr.push_back(obj);
	}
	void ls() override
	{
		cout << "Dictory Name : " << dictoryName << '\n';
		for (auto dictory : arr)
		{
			dictory->ls();
		}
	}
};

int main()
{
	Dictory* animes = new Dictory("Animes");
	File* parasyte = new File("Parasyte");
	animes->add(parasyte);
	Dictory* darkAnime = new Dictory("DarkAnime");
	animes->add(darkAnime);
	File* monster = new File("Monster");
	darkAnime->add(monster);
	File* berserk = new File("Berserk");
	darkAnime->add(berserk);

	animes->ls();


	return NULL;
}