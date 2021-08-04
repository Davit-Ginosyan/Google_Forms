#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
  string str;
  cout << "Enter Admin or User" <<endl;
  cin >> str;
  if(str == "Admin")
  {
   string ararka;
   cout<< "Enter ararka: math or prog"<<endl;
   cin >> ararka;
   ofstream fout;
   if(ararka == "math")
   {
      
      int i = 1;
      fout.open("math.txt");
      string patasxan = "";
      string harc = "";
      string chisht;

      for(int j = 0; j < 10;++j)
    {
      
      char ch = 65;
      cout << "greq harcy:"<<i<< endl;
      cin.get();
      harc = "";
      getline(cin,harc);
      fout << i <<":"<< harc <<" $"<<endl<<endl;
      ++i;
      cout << "greq 4 tarberaknery:" <<endl;
      for(int k = 1; k< 5;++k)
      {
        getline(cin,patasxan);
        fout << ch<<":" << patasxan <<" $"<< endl;
        ++ch; 
      }
      cout<<"Nsheq chisht patasxany(A/B/C/D):" <<endl;
      cin >> chisht;
      fout << endl;
      fout << "chisht patasxany: " << chisht <<endl<<endl;
     }

   }
   if(ararka == "prog")
   {
      int i = 1;
      fout.open("prog.txt");
      string patasxan = "";
      string harc = "";
      string chisht;

      for(int j = 0; j < 8;++j)
    {
      
      char ch = 65;
      cout << "greq harcy:"<<i<< endl;
      cin.get();
      harc = "";
      getline(cin,harc);
      fout << i <<":"<< harc<<" $" <<endl<<endl;
      ++i;
      cout << "greq 2 tarberaknery:" <<endl;
      for(int k = 1; k < 3;++k)
      {
        getline(cin,patasxan);
        fout << ch<<":" << patasxan<<" $"<< endl;
        ++ch; 
      }
      cout<<"Nsheq chisht patasxany(A/B):" <<endl;
      cin >> chisht;
      fout << endl;
      fout << "chisht patasxany: " << chisht <<endl<<endl;
     }

   
   }
  }
  if(str == "User")
  {
    ifstream fin;
    string ararka;
    string harc = "";
    string patasxan = "";
    string ardyunq = "";
    cout<< "Enter ararka: math or prog"<<endl;
    cin >> ararka;
    if(ararka == "math")
    {
      fin.open("math.txt");
      while(!fin.eof())
      {
        
        fin >> harc;
        if(harc != "chisht")
        {
          if(harc != "$")
          {
            cout<<harc<<' ';
          }
           else
           {
             cout<<endl;
           }
        }
        else
        {
          
          fin >> harc;
          fin >> harc;
          //cout<< harc<<endl;
          cout << "greq patasxany:(A/B/C/D)"<<endl;
          cin >> patasxan;
          if(harc == patasxan){cout << "apres)"<<endl<<endl;}
          else{cout << "sxal e:   " <<"Chishty: "<<harc<< endl<<endl;}
        }
      }
    }
    
    if(ararka == "prog")
    {
      fin.open("prog.txt");
      while(!fin.eof())
      {
        
        fin >> harc;
        if(harc != "chisht")
        {
          if(harc != "$")
          {
            cout<<harc<<' ';
          }
           else
           {
             cout<<endl;
           }
        }
        else
        {
          fin >> harc;
          fin >> harc;
          //cout<< harc<<endl;
          cout << "greq patasxany:(A/B)"<<endl;
          cin >> patasxan;
          if(harc == patasxan){cout << "apres)"<<endl<<endl;}
          else{cout << "sxal e:   " << "Chishty: "<<harc <<endl<<endl;}
        }
    }
  }
  }
}

