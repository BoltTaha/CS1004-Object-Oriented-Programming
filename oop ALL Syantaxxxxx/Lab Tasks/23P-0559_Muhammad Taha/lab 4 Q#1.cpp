#include<iostream>
#include<string>
using namespace std;

struct MovieData{
	
	string Title;
	string Director;
	int YearReleased;
	
};
void createMovieData(MovieData &create);
void displayMovieData(MovieData &create);
void createMovieData(MovieData &dis);
void displayMovieData(MovieData &dis);
int main(void)
{
	struct MovieData one,two;
	cout<<"Enter the detail for the first movie"<<endl<<endl;
	createMovieData(one);

	cout<<"Enter the detail for the 2nd movie"<<endl<<endl;
	createMovieData(two);
	cout<<"The following are the detail for the First Movie"<<endl<<endl;
	displayMovieData(one);
	cout<<"The following are the detail for the 2nd Movie"<<endl<<endl;
    displayMovieData(two);
	

	return 0;
}
void createMovieData(MovieData &create){
	cout<<"Enter the Title for the Movie"<<endl;
	getline(cin,create.Title);
	
	cout<<"Enter name of director"<<endl;
	getline(cin,create.Director);
	
	cout<<"Enter the year in which movie was relased"<<endl;
	cin>>create.YearReleased;
	cin.ignore();
}

void displayMovieData(MovieData &dis){
   cout<<"The title of the Movie is : "<<dis.Title<<endl;
   cout<<"The name of the director is : "<<dis.Director<<endl;
   cout<<"The Movie was release one : "<<dis.YearReleased<<endl;
}
