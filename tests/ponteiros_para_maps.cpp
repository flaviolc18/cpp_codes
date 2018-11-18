#include <map>
#include <iostream>

class MapFile
{
public:
   std::map <unsigned int, unsigned int> *inToOut;
   void LoadMapFile();
   MapFile();
   ~MapFile();
   unsigned int get();
};

MapFile::MapFile(): inToOut(new std::map <unsigned int, unsigned int>)
{}

MapFile::~MapFile(){
	delete inToOut;
}

void MapFile::LoadMapFile(){
   inToOut->insert( std::make_pair(1, 1) );
}

unsigned int MapFile::get()
{
   return inToOut->find(1)->second;
}

int main() {
   MapFile a;
   a.LoadMapFile();

   std::cout << a.get() << std::endl;

   return 0;
}