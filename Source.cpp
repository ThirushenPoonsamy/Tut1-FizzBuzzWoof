
# include <iostream>

using namespace std;


int main()
{

for (int i = 1; i < 21; i++)
{

if (i % 3 == 0)
{

if (i % 5 == 0)
{

cout <<"fizzbuzz"<<endl;

}

else

{


cout << "fizz" << endl;

}

}

else if (i % 5 == 0)

{

cout << "buzz" << endl;

}

else if (i % 15 == 0)

{

cout << "fizzbuzzwoof" << endl;

}


else

{

cout << i <<endl;

}




return 0;
}










}
