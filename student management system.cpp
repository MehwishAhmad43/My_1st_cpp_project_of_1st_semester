#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n\n=================================== Student Management System =========================================================\n";
    cout << "_________________________________________         _____________________________________________________________________\n";
    cout << "_________________________________________ Welcome _____________________________________________________________________\n";

    int choice, n, reg;
    string name, dob, rollNo, c,f,idf,idp,email,p;
    const string pass = "superior";
    const string passf = "fuculty";
    const string passC = "proctor";
    while (true) 
	{
		cout << "\n";
        cout << "\n1. Add new student";
        cout << "\n2. Student login";
        cout << "\n3. Faculty login";
        cout << "\n4. Proctor login";
        cout << "\n5. Calculate cgpa";
        cout << "\n6. Exit\n";
        cout << "\nEnter your choice (1-6): ";
        cin >> choice;
        if (choice == 6) 
		{
            cout << "Exiting the program. Goodbye!\n";
            break;
        }
        switch (choice) 
		{
            case 1: 
			{
				cout << "\n______________________________________Add New Student_________________________________________\n";
                cout << "Enter the number of students to add: ";
                cin >> n;
                for (int i = 1; i <= n; i++) 
				{
                    cout << "\nEnter student " << i << "'s name: ";
                    cin >> name;
                    cout << "Enter registration number: ";
                    cin >> reg;
                    cout << "Enter date of birth (yy/mm/dd): ";
                    cin >> dob;
                    cout << "\n___________________ Student added successfully! __________________________________\n\n";
                    cout << "Name: " << name << "\n";
                    cout << "Registration Number: " << reg << "\n";
                    cout << "Date of Birth: " << dob << "\n";
                    cout << "\n===================================================================================\n\n";
                }
                break;
            }
            case 2: 
			{
                cout << "\n_______________________________________ Student login _____________________________________________\n\n";
                cout << "Enter your roll number: ";
                cin >> rollNo;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter your email ID : ";
                cin >> email;
                cout << "Enter password: ";
                cin >> c;
                if (c == pass) 
				{
					 cout << "\nYou have logged in successfully!\n";
					int option;
					while (true)
					{
						cout << "\n=========================================================================\n\n";
	                    cout << "As a student you have following operation :"<<endl;
	                    cout << "1. Profile View"<<endl;
	                    cout << "2. Enrolled courses"<<endl;
	                    cout << "3. Time Table"<<endl;
						cout << "4. Notifications "<<endl;
						cout << "5. Exit"<<endl;
						cout << "\nEnter yur option : ";
						cin >> option;
						if(option==5)
						{
							cout << "exit byeeeeeee!!";
							break;
						}
					switch(option)
					{
						case 1:
							{
								cout << "\n_________________________PROFILE________________________________\n\n";
								cout << "Name :"<<name<<endl;
								cout << "email :"<<email<<endl;
								cout << "roll number :"<<rollNo<<endl;
								break;	
							}
						case 2:
							{
								cout << "\n__________________________ENROLLED COURSES_______________________\n\n";
								cout << "1. Programming Fundamental (Theory) "<<endl;
								cout << "2. Programming Fundamental (Lab) "<<endl;
								cout << "3. Applied Physics "<<endl;
								cout << "4. Functional English "<<endl;
								cout << "5. Dicrete Structure "<<endl;
								cout << "6. Introduction to Communication and Technology (Theory) "<<endl;
								cout << "7. Introduction to Communication and Technology (Lab) "<<endl;
								break;
							}
						case 3:
							{
								cout << "\n___________________________TIME TABLE_______________________________\n";
								cout << "| Day          | subject          |time        |"<<endl;
								cout << "| monday       | applied phy      |8:00__10:40 |"<<endl;
								cout << "| tuesday      | lab pf,ict       |8:00__10:40 |"<<endl;
								cout << "| wednesday    | off              |8:00__10:40 |"<<endl;
								cout << "| thursday     | pf,ict           |8:00__10:40 |"<<endl;
								cout << "| friday       | ds               |8:00__10:40 |"<<endl;
								cout << "_____________________________________________________________________\n";
								break; 	
							}
						case 4:
							{
								cout << "___________________________NOTIFICATIONS______________________________\n\n";
								cout << "!!!!!!!!! there is no notification yet!!!!!!!!!!!!!!!"<<endl;
								break;
							}
			
					default:
						cout<<"option is not valid";
					}
			}
                } 
				else 
				{
                    cout << "\nInvalid password! Try again later.\n";
                }
                break;
            }
            case 3:
            	{
            	cout << "\n_________________________________________ fuculty login ___________________________________________\n";	
				cout << "Enter your user id ";
				cin >> idf;
				cout << " Enter your name :";
				cin >> name;
				cout << " Enter default password : ";
				cin >> f;
				if (f==passf)
				{
                    cout << "\nYou have logged in successfully!\n";
                } 
				else 
				{
                    cout << "\nInvalid password! Try again later.\n";
                }
                break;
				}
            case 4:
            	{
            		cout << "\n____________________________________________proctor login_____________________________________________\n";
            		cout << "Enter your proctor id : ";
            		cin >>idp;
            		cout << "Enter your name : ";
            		cin >> name;
            		cout << "Enter your registration number : ";
            		cin >> reg;
            		cout << "Enter your password :";
            		cin >>p;
            		if (p==passC)
				{  
                    cout << "\nYou have logged in successfully!\n";
                } 
				else 
				{
                    cout << "\nInvalid password! Try again later.\n";
                }
                break;
				}
            case 5:
            	{
            		cout << "\n___________________________________CALCULATE CGPA_______________________________________________________\n";
            		float g1,g2,g3,g4,g5,g6,g7;
					float totalgrading=0.0,cgpa;
					cout<<"Enter your PF (LAB)subject grade in points from(0.0--4.0)";
					cin>>g1;
					cout<<"enter your PF (THEORY) subject grade in points from(0.0--4.0)";
					cin>>g2;
					cout<<"enter your DS subject grade in points from(0.0--4.0)";
					cin>>g3;
					cout<<"enter your FUNCTIONAL ENGLISH subject grade in points from(0.0--4.0)";
					cin>>g4;
					cout<<"enter your ICT (LAB) subject grade in points from(0.0--4.0)";
					cin>>g5;
					cout<<"enter your ICT (THEORY) subject grade in points from(0.0--4.0)";
					cin>>g6;
					cout<<"enter your APPLIED PHYSICS subject grade in points from(0.0--4.0)";
					cin>>g7;
					if(g1>=0.0&&g1<=4.00){
						{
						totalgrading+=g1;
						}
						if(g2>=0.0&&g2<=4.00)
						{
						totalgrading+=g2;
						}
						if(g3>=0.0&&g3<=4.00)
						{
						totalgrading+=g3;
						}
						if(g4>=0.0&&g4<=4.00)
						{
							totalgrading+=g4;
						}
						if(g5>=0.0&&g5<=4.00)
						{
							totalgrading+=g5;
						}
						if(g6>=0.0&&g6<=4.00)
						{
							totalgrading+=g6;
						}
						if(g7>=0.0&&g7<=4.00)
						{
							totalgrading+=g7;
						}
					cgpa=totalgrading/7;
					cout<<"Your cgpa is"<<cgpa;
					}	
					else
					cout<<"You Entered an invalid grading point";
					break;
				}
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 6.\n";
        }
    }
    return 0;
}    