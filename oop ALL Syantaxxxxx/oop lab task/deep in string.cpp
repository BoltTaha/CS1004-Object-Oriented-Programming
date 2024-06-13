#include<iostream>
#include<string>
using namespace std;

class point {
    string *song;
public:
	point()
	{
		
	}
    point(string s[]) {
        song = new string[2];
        int i;
        for (i = 0; i < 2; i++) {
            song[i] = s[i];
        }
    }
    point(const point & obj) {
        song = new string[2];
        int i;
        for (i = 0; i < 2; i++) {
            song[i] = obj.song[i];
        }
    }
    void display() {
        int i;
        for (i = 0; i < 2; i++) {
            cout << song[i] << endl;
        }
    }
    void changeSongs(string s[]) {
        int i;
        for (i = 0; i < 2; i++) {
            song[i] = s[i];
        }
    }
    ~point() {
        delete[] song;
    }
};

int main(void) {
    int i;
    string sq[2];
    for (i = 0; i < 2; i++) {
        cin >> sq[i];
    }
    point p(sq);
    point p1;

    cout << "Songs entered by p: " << endl;
    p.display();

   // point p1 = p;  //here is the deep copy done
//	p1 = p;    //here is the shaloow copy done
    point p1(p); //here deep copy perform
    cout << "Songs entered by p1 (copied from p): " << endl;
    p1.display();
    
    cout << "Enter new songs: " << endl;
    for (i = 0; i < 2; i++) {
        cin >> sq[i];
    }
    p.changeSongs(sq);
    cout << "Songs entered by p after modification: " << endl;
    p.display();
    cout<<"After copy"<<endl;
    p1.display();
    return 0;
}

