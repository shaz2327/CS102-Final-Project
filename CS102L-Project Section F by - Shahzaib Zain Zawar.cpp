#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<sstream>
using namespace std;
class fav
{
	protected:
		string team;
		double c , c1 , c2 , c3 , c4, c5 ;
		double sport;
		
	public:
		fav ()
		{
			c =0.0, c1=0.0 , c2 =0.0, c3 =0.0, c4=0.0, c5=0.0 ;
			sport = 0.0;
		}
		void pick()
		{
			
			cout << "Enter You Favourite Team\n";
			cin.ignore();
			getline(cin , team);
			if ( team.compare("Islamabad United") == 0)
			{
				++c;
				sport = (c/5)*100;
				cout << "Support Percentage : " << sport << endl;
				
			}
			if ( team.compare("Karachi Kings") == 0)
			{
				++c1;
				sport = (c1/5)*100;
				cout << "Support Percentage : " << sport << endl;
			}
			if ( team.compare("Multan Sultan") == 0)
			{
				++c2;
				sport = (c2/5)*100;
				cout << "Support Percentage : " << sport << endl;
			}
			if ( team.compare("Peshawer Zalmi") == 0)
			{
				++c3;
				sport = (c3/5)*100;
				cout << "Support Percentage : " << sport << endl;
			}
			if ( team.compare("Quetta Gladiators") == 0)
			{
				++c4;
				sport = (c4/5)*100;
				cout << "Support Percentage : " << sport << endl;
			}
			if ( team.compare("Lahore Qalandars") == 0)
			{
				++c5;
				sport = (c5/5)*100;
				cout << "Support Percentage : " << sport << endl;
			}
		}
				
};
class user : protected fav
{ 
	public:
	string names;
   	string age;
   	string national;
   	string role;
   	string team_name;
	
	void matches()
	{
	 string line;
              ifstream myfile ("Matches.txt");
             if (myfile.is_open())
    	       {
        	     while ( getline (myfile,line) )
        		   {
            	 cout << line << '\n';
            		}
            	  myfile.close();
              }	
	}
	void teamdisplay()
	{
		string choice;
		cout << "Enter the name of team that you want to search\n";
		cin.ignore();
		getline(cin,choice);
		if ( choice.compare("Karachi Kings") == 0)
		{
			
		     string line;
              ifstream myfile ("kkplayers.txt");
             if (myfile.is_open())
    	       {
        	     while ( getline (myfile,line) )
        		   {
            	 cout << line << '\n';
            		}
            	  myfile.close();
              }
		}
         if ( choice.compare("Islamabad United") == 0)
       	{ 
		   string line;
        	ifstream myfile ("iuplayers.txt");
        	if (myfile.is_open())
       		{
       			 while ( getline (myfile,line) )
       			{
        		 cout << line << '\n';
       			}
       			 myfile.close();
       		}
       	 	
        }
	   if ( choice.compare("Peshawar Zalmi") == 0)
	   	{
	   		string line;
    	    ifstream myfile ("pzplayers.txt");
    	    if (myfile.is_open())
    	   {
    		    while ( getline (myfile,line) )
       			{
        			 cout << line << '\n';
       			}
        		myfile.close();
       		}
        
	   }
	   if ( choice.compare("Quetta Gladiators")==0)
	   	{
	   		string line;
     		  ifstream myfile ("qgplayers.txt");
        	if (myfile.is_open())
       		{
        		while ( getline (myfile,line) )
       			{
        			 cout << line << '\n';
       			}
        		myfile.close();
       		}
	    }
        if ( choice.compare("Lahore Qalandars") == 0)
       	{
       		string line;
        	ifstream myfile ("lqplayers.txt");
        	if (myfile.is_open())
       		{
       		 while ( getline (myfile,line) )
       			{
        		 cout << line << '\n';
       			}
        	myfile.close();
       		}
	    }
       	if ( choice.compare("Multan Sultan") == 0)
       	{
       		string line;
        	ifstream myfile ("msplayers.txt");
        	if (myfile.is_open())
       		{
        		while ( getline (myfile,line) )
       			{
         			cout << line << '\n';
       			}
        		myfile.close();
       		}
		}  
   }
   void search_by_player_name(string name)
   {
	ofstream player_file;
	player_file.open("player file.txt",ios::app);
	
	ifstream kkplayers;//Karachi Kings
	kkplayers.open("kkplayers.txt");
	while(!kkplayers.eof())
	{
		kkplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Karachi_Kings"<<endl;	
	}
	kkplayers.close();
	
	ifstream iuplayers;//islamabad united
	iuplayers.open("iuplayers.txt");
	while(!iuplayers.eof())
	{
		iuplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Islamabad_United"<<endl;	
	}
	iuplayers.close();

	ifstream pzplayers;//peshawar zalmi
	pzplayers.open("iuplayers.txt");
	while(!pzplayers.eof())
	{
		pzplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Peshawar_Zalmi"<<endl;	
	}
	pzplayers.close();
	
	ifstream qgplayers;//quetta gladiator
	qgplayers.open("qgplayers.txt");
	while(!qgplayers.eof())
	{
		qgplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Quetta_Gladiator"<<endl;	
	}
	qgplayers.close();
	
	ifstream lqplayers;//lahore qalander
	lqplayers.open("lqplayers.txt");
	while(!lqplayers.eof())
	{
		lqplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Lahore_Qalander"<<endl;	
	}
	lqplayers.close();
	
	ifstream msplayers;//multan sultan
	msplayers.open("msplayers.txt");
	while(!msplayers.eof())
	{
		msplayers>>name>>age>>national>>role;
		if(names==name)
		player_file<<team_name<<" "<<name<<" "<<age<<" "<<national<<" "<<role<<" "<<"Multan_Sultan"<<endl;	
	}
	msplayers.close();
	player_file.close();
	}
	
	
	void player_name_display()
	{
		ifstream player_file;
		player_file.open("player file.txt");
		while(!player_file.eof())
		{
			player_file>>team_name>>names>>age>>national>>role>>team_name;
			cout<<names<<" "<<age<<" "<<national<<" "<<role<<" "<<team_name<<endl;
		}
		player_file.close();
	}
	
};		   	
bool IsloggedIn() //BOOL IS USED FOR TRUE OR FALSE CONDITIONS 
// VOID IS USED AS FUNCTIONS RETURN TYPE WHEN NO RETURN IS REQUIRED OR COUT STATEMENT SHOULD BE USED
{
	string username,password,un,pw;
	cout<<"Enter username: ";
	cin>>username;
	cout<<"Enter password: ";
	cin>>password;
	
	ifstream read("zawar123.txt");
	getline(read,un);
	getline(read,pw);
	
	if(un==username && pw==password)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void string_check(string awm)
{
	bool cptl=0,spcl=0;	
	for(int i=0;awm[i]!='\0';i++)
	{
	if(awm[i]>=65&&awm[i]<=90)
		//special ascii keys are used for special letters or capital letters in the password
	{
		cptl=1;
		break;   
	}
	
	}
	
	for(int i=0;awm[i]!='\0';i++)
	{
	
	if(awm[i]>=33&&awm[i]<=47)
		//special ascii keys are used for special letters or capital letters in the password
	{
		spcl=1;
		break;   
	}
	
	}
	
	if(cptl!=1||spcl!=1)
	{
		cout<<"incorrect password";
	}
	
}


int main()
{
 user u;
 fav f;	
bool flag = true;
int choice , opt;
system("COLOR F0");
jump: system("CLS");
cout << "*******************Welcome To PSL App*******************\n\n";
 cout<<"Enter 1 for register\nEnter 2 for login\n";
cin>>choice;
if(choice==1)
{
	string username,password;
		cout<<"Enter the user name: ";
		cin>>username;
		cout<<"Enter the password: ";
		cin>>password;
		
		string_check(password);
		
		ofstream file; // IFSTREAM IS USED FOR INPUT AND OFSTREAM IS USED FOR OUTPUT AND FSTREAM IS USED FOR BOTH 
		file.open("zawar123.txt");
		file<< username <<endl <<password;
		file.close();
	}
	else if(choice==2)
	{
		bool status=IsloggedIn();
		if (!status)
		
		{
			cout<<"False Login";
			goto jump;
		}
		else
		{
			cout<<"Successfully login\n\n";
			do
			{
			cout << "Main Menu\n1. Search By Team\n2. Search By Player\n3.Match Schedule\n4.Select Favourite Team\n5.Log Out\n6. Exit\n ";
			cin >> choice;
			switch (choice)
			{
				case 1:
				{
					system("CLS");
					u.teamdisplay();
					break;
				}
				case 2:
				{
					string n;
					cin.ignore();
					getline(cin,n);
					u.search_by_player_name(n);
					u.player_name_display();
					break;
				}
				case 3:
				{
					
					u.matches();
					break;
				}
				case 4:
				{
					system("CLS");
					f.pick();
					break;
				}
				case 5:
				{
					flag = false;
					goto jump;
				    
					break;
				}
				case 6:
				{
					exit(0);
					break;		
				}
			}
			}while(flag);
		}
		}
	}

