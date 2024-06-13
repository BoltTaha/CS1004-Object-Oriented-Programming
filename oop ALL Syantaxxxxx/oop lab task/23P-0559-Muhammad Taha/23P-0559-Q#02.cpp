#include<iostream>
#include<string>

using namespace std;

class Favourite_Songs{
	private:
	int size;
	string *songs;
	public:
	Favourite_Songs()
	{   size=0;
		songs = new string [size];
	}
	
	Favourite_Songs(const Favourite_Songs & obj )
	{   
	  this->size=obj.size;
	  songs = new string [size];
	  int i;
	  for(i=0;i<size;i++)
	  {
	  	songs[i]=obj.songs[i];
	  }	
	}
	~Favourite_Songs()
	{   
	   delete [] songs;	
	}
	
	void addsongs(string s)
	{
		string *copystring = new string [size+1];
		int i;
		for(i=0;i<size;i++)
		{
			copystring[i]=songs[i];
		}
		copystring[size] = s;
	delete [] songs;
	
	songs=copystring;

	size++;	
	cout<<"Song is Succesfully Added"<<endl;
//	delete[] copystring;
//		copystring=NULL;
	
	}
	void deletesongs(string s)
	{
		int i,count=-1;
		for(i=0;i<size;i++)
		{
			if(s==songs[i])
			{
			 count=i;
			 break;	
			}
		}
		if(count==-1)
		{
			cout<<"Song is Not Found"<<endl;
			return;
		}
		for(i=count;i<size-1;i++)
		{
			songs[i]=songs[i+1];
		}
		size--;
		cout<<"song is successfully deleted "<<endl;
		
		
	}
void printingsongs()
{  if (size == 0) {
        cout << "No songs added." << endl;
        return;
    }
    
    cout << "The Songs Are......" << endl;
    
    for (int i = 0; i < size; i++) {
        cout << songs[i] << endl;
    }
}

	void updatesongs(string oldsong,string newsong)
	{
		int i;
		for(i=0;i<size;i++)
		{
			if(oldsong==songs[i])
			{
				break;
			}
			else
			{
				cout<<"Song is Not found "<<endl;
				return;
			}
		}
		songs[i]=newsong;
		cout<<"The song is Successfylly Updated "<<endl;
	}
	
	
};

void main_screen(Favourite_Songs &obj1,
    Favourite_Songs &obj2)
{   

	int n;
   do{
   	cout<<"Press 1 to ADD a Song "<<endl;
   	cout<<"Press 2 to Delete a Song "<<endl;
   	cout<<"Press 3 to Print a Songs "<<endl;
   	cout<<"Press 4 to Update the Song "<<endl;
   	cout<<"Press 5 to take a Backup of the SOng"<<endl;
   	cout<<"Press 6 to Show a Backup Object of the song"<<endl;
   	cout<<"Press 7 to Exit a Program "<<endl;
   	cin>>n;
   	
   	}while(n<1 || n>7);
   	cin.ignore();
   	if(n==1)
   	
   	{    string add;
   	
   		cout<<"Enter the Name of the Songs that you want to ADD "<<endl;
   		getline(cin,add);
   		obj1.addsongs(add);
   	
   		main_screen(obj1,obj2);
	}
	
	else if(n==2)
	{
		string del;
		
		cout<<"Enter the Name of the Songs that you want to Delete "<<endl;
   		getline(cin,del);
   		obj1.deletesongs(del);	
   	
   		main_screen(obj1,obj2);
	}
   	else if(n==3)
   	{
   	   obj1.printingsongs();
	
   	main_screen(obj1,obj2);
	}
	else if(n==4)
	{
		string oldSong, newSong;
                cout << "Enter the name of the song to update: ";
                getline(cin, oldSong);
                cout << "Enter the new name of the song: ";
                getline(cin, newSong);
                obj1.updatesongs(oldSong, newSong);
   		main_screen(obj1,obj2);
	}
	
	else if(n==5){
		
		Favourite_Songs obj2(obj1);
		cout<<"The Backup is SuccssFully Done......."<<endl;
	
   		main_screen(obj1,obj2);
	} 
	
	else if(n==6){
		obj2.printingsongs();
		main_screen(obj1,obj2);
	}
	else{
		exit(0);
	}
}
 int main(void)
 {   Favourite_Songs obj1;
    Favourite_Songs obj2;
 	main_screen(obj1,obj2);
 	return 0;
	   }  	
