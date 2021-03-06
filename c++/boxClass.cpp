#include<bits/stdc++.h>

using namespace std;
/*
Task
Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.
*/
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int len,int br,int hei){
            l=len;
            b=br;
            h=hei;
        }
        Box(const Box &b2){
            l=b2.l;
            b=b2.b;
            h=b2.h;
        }
        int getLength(){
            return l;
        } // Return box's length
        int getBreadth (){
            return b;
        }  // Return box's breadth
        int getHeight (){
            return h;
        }   //Return box's height
        long long CalculateVolume(){
            return (long long)(b*h*l);
        }  // Return the volume of the box
        //Overload operator <
        friend bool operator<(Box&A,Box& B) {
            if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) )
            {
                return true;
            }else{return false;}
        }
        //Overload operator <<
        friend ostream& operator<<(ostream& out,const Box& B)//ostream& out,
        {
            out << B.l << " " << B.b << " " << B.h;
            return out;
        }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
