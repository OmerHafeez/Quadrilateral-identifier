#include<iostream>
using namespace std;
int main ()
{
char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;



cout<<"Are all sides equal?"<<endl;
cin>>a;
cout <<"Are all angles 90 degrees\?"<<endl;
cin>> b;
if((a=='y'||a=='Y')&&(b=='y')||(b=='Y'))
{
cout<< "Shape is square"<<endl;
exit(0);			//if true exit from the program
}
			//if following answers are true print square

cout<<"Are all angles 90 degrees\?"<<endl;
cin>>c;
cout<< "Opposite sides are equal in lenght\?"<<endl;
cin>>d;
cout<< "Each interior angle is equal to 90 degrees\?"<<endl;
cin>>r;
cout<< "The sum of all the interior angles is equal to 360 degrees\?"<<endl;
cin>>s;
if((c=='y'||c=='Y')&&(d=='y'||d=='Y')&&(r=='y'||r=='Y')&&(s=='y'||s=='Y'))
{
cout<< "Shape is Rectangle"<<endl;
exit(0);
}
			//if following answers are true print rectangle

cout<< "Two pairs of adjacent sides are equal\?"<<endl;
cin>>e;
cout<< "One pair of opposite angles are equal\?"<<endl;
cin>>f;
cout<< "The diagonals are perpendicular to each other\?"<<endl;
cin>>g;
cout<< "The longer diagonal of the shape bisects the shorter diagonal\?"<<endl;
cin>>h;
if((e=='y'||e=='Y')&&(f=='y'||f=='Y')&&(g=='y'||g=='Y')&&(h=='y'||h=='Y'))
{
cout<< "Shape is kite"<<endl;
exit(0);
}

			//if following answers are true print kite
cout<< "All sides are equal in length\?"<<endl;
cin>> i;
cout<< "Opposite angles are equal\?"<<endl;
cin>>j;
cout<< "The diagonals bisect each other at 90 degrees\?"<<endl;
cin>>k;
cout<< "Adjacent angles add up to 180 degrees\?"<<endl;
cin>>l;
if((i=='y'||i=='Y')&&(j=='y'||j=='Y')&&(k=='y'||k=='Y')&&(l=='y'||l=='Y'))
{
cout<< "Shape is rhombus"<<endl;
exit(0);
}
			//if following answers are true print rhombus

cout<< "The bases are parallel to each other\?"<<endl;
cin>>m;
cout<< "The length of both the diagonals is equal\?"<<endl;
cin>>n;
cout<< "The diagonals always intersect each other\?"<<endl;
cin>>o;
cout<< "The adjacent interior angles sum up to 180°\?"<<endl;
cin>>p;
cout<< "The sum of all the interior angles is always 360°\?"<<endl;
cin>>q;
if((m=='y'||m=='Y')&&(n=='y'||n=='Y')&&(o=='y'||o=='Y')&&(p=='y'||p=='Y')&&(q=='y'||q=='Y'))
{
cout << "Shape is trapezium"<<endl;
exit(0);
}
			//if following answers are true print trapezium

cout<<"The opposite sides are parallel and congruent\?"<<endl;
cin>>t;
cout<<"The opposite angles are congruent\?"<<endl;
cin>>u;
cout<<"The consecutive angles are supplementary\?"<<endl;
cin>>v;
cout<<"If any one of the angles is a right angle, then all the other angles will be at right angle\?"<<endl;
cin>>w;
cout<<"The two diagonals bisect each other\?"<<endl;
cin>>x;
if((t=='y'||t=='Y')&&(u=='y'||u=='Y')&&(v=='y'||v=='Y')&&(w=='y'||w=='Y')&&(x=='y'||x=='Y'))
{
cout<< "Shape is Parallelogram"<<endl;
exit(0);
}
			//if following answers are true print Parallelogram

cout<<"Program ends here"<<endl;
}
