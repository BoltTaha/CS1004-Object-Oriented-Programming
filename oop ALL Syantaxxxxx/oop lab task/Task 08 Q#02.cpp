#include<iostream>
#include<string>

using namespace std;

class Favourite_Songs
{
	private:
	 int size;
	string *song;
	
	public:
	Favourite_Songs()
	{   size=0;
		
		}	
	Favourite_Songs(const Favourite_Songs & obj )
	{   int i;
	   size=obj.size;
	   song=new string [size];
	   for(i=0;i<size;i++)
	   {
	   
		this->song[i]=obj.song[i];
		
	}
		}	
	void addsongs(string s);	
	void deletesongs(string s);
	void updatesongs(string oldSong, string newSong);
	void printingsongs();
	
	
	~Favourite_Songs()
	{
		delete [] song;
		
	}
		
};


void Favourite_Songs::addsongs( string s)
{
	
	string *copysong= new string[size+1];
	int i;
	for(i=0;i<size;i++)
	{
		copysong[i]=song[i];
	}
	copysong[size] = s;
	delete [] song;
	
	song=copysong;
	size++;	
}

void Favourite_Songs::deletesongs(string s)
{
	int i;
int count=-1;
for(i=0;i<size;i++)
{
    if(song[i]==s)
    {
        count=i;
        break;
    }
}

if(count==-1)
{
    cout << "Song not found" << endl;
    return;
}

for(i=count;i<size-1;i++)
{
    this->song[i]=this->song[i+1];
}
size--;

}

void Favourite_Songs::printingsongs()
{
	int i;
	if(size==0)  cout<<"No song is in the List"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<song[i]<<endl;
	}
}

void Favourite_Songs::updatesongs(string oldSong, string newSong)
{
       for (int i=0;i<size;++i) {
        if (song[i]==oldSong) {
            song[i]=newSong;
            break;
        }
    }
}

void main_screen()
{   Favourite_Songs obj1;
	int n;
   do{
   	cout<<"Press 1 to ADD a Song "<<endl;
   	cout<<"Press 2 to Delete a Song "<<endl;
   	cout<<"Press 3 to Print a Songs "<<endl;
   	cout<<"Press 4 to Update the Song "<<endl;
   	cout<<"Press 5 to take a Backup of the SOng"<<endl;
   	cin>>n;
   	
   	}while(n<1 || n>5);
   	cin.ignore();
   	if(n==1)
   	
   	{    string add;
   	
   		cout<<"Enter the Name of the Songs that you want to ADD "<<endl;
   		getline(cin,add);
   		obj1.addsongs(add);
   	//	getchar();
   		main_screen();
	}
	
	else if(n==2)
	{
		string del;
		
		cout<<"Enter the Name of the Songs that you want to Delete "<<endl;
   		getline(cin,del);
   		obj1.deletesongs(del);	
   	//	getchar();
   		main_screen();
	}
   	else if(n==3)
   	{
   	   obj1.printingsongs();
	//	getchar();
   		main_screen();	
	}
	else if(n==4)
	{
		string oldSong, newSong;
                cout << "Enter the name of the song to update: ";
                getline(cin, oldSong);
                cout << "Enter the new name of the song: ";
                getline(cin, newSong);
                obj1.updatesongs(oldSong, newSong);
   		main_screen();
	}
	
	else{
		Favourite_Songs obj2(obj1);
		cin.ignore();
		cout<<"The Backup is SuccssFully Done......."<<endl;
	//	getchar();
   		main_screen();
	} 
   	
}
int main(void)
{
   
   main_screen();
   	
}

