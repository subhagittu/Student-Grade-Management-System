	#include<iostream>
	
	#include<string>
	
	using namespace std;
	
	void Marksofcourse();

	float Gradeofcourse(float);

	void Studentinformation();

	void Displaythegrade();

	void CGPA_calculation();

	void Status(float);
	
	
	struct student
	{
		int ID,age,year;

		char first_name[15];

		char last_name[15];

		char sex[8];

		char semester[10];

		float CGPA;

		struct 
		{
			float temp_2;
			
			float prog1;

			float Int_CS;

			float prog2;

		}course;
		
		struct 
		{
			float temp_1;

			float program_1;

			float inte_ger;

			float program_2;
		}grade;
		
	};
	struct student s[1000];

	
	int n;
	int main()
	{
		
        
			cout<<"Student Grade Report Management System in C++\n";
			
		Marksofcourse();
		
		CGPA_calculation();
		
		Displaythegrade();

		Studentinformation();
		
	}
	
	void Studentinformation()
	{
		int i;
		cout<<"Enter the number of students ----------------->";

		cin>>n;
        
		cout<<"\nStudent Information----------------->\n";
		
		for(i=0;i<n;i++)
		{
			cout<<"Enter the student-->"<<i+1<<" ----  The First name----------------->\n";
			cin>>s[i].first_name;


			cout<<"Enter the student-->"<<i+1<<" ---The Last name----------------->\n";
			cin>>s[i].last_name;


			cout<<"EEnter the student-->"<<i+1<<" ---The ID number----------------->\n";
			cin>>s[i].ID;


			cout<<"Enter the student-->"<<i+1<<"---The Sex(male or female)----------------->\n";
			cin>>s[i].sex;


			cout<<"Enter the student-->"<<i+1<<" ---Age----------------->\n";
			cin>>s[i].age;


			cout<<"Enter the student-->"<<i+1<<" ----Year----------------->\n";
			cin>>s[i].year;


			cout<<"Enter the student-->"<<i+1<<" ---Enter the semester in character ----->\n";
			cin>>s[i].semester;
			
			
		}
		
	}
	void Marksofcourse()
	{
		int mark;
		system("cls");
		cout<<"\n";
		
		cout<<"Enter Students mark to corresponding course----------------->\n";
		
		for(int i=0;i<n;i++)
		{
			cout<<"Enter student_"<<i+1<<" Subject 1 mark----------------->\n";
			cin>>s[i].course.prog1;
			
		
			cout<<"Enter student_"<<i+1<<"Subject 2 mark ----------------->\n";
			cin>>s[i].course.Int_CS;
			
			
			
			cout<<"Enter student_"<<i+1<<"Subject 3 mark ----------------->\n";
			cin>>s[i].course.prog2;
			
			
			cout<<"Enter student_"<<i+1<<"Subject 4 mark ----------------->\n";
			cin>>s[i].course.temp_2;
			
			
			
		}
		
		
	}
	
	
	float Gradeofcourse(float mark)
	{
		float result;	 	 	 
				
				if(mark<=100 && mark>90)
				{
					result=4.0;

					cout<<"A+\n";

				}
				else if(mark<=90 && mark>85)
				{

					result=4;

					cout<<"A\n";

				}
				else if(mark<=85 && mark>80)
				{
					result=3.75;

					cout<<"A-\n";

				}
				else if(mark<=80 && mark>75)
				{
					result=3.5;

					cout<<"B+\n";

				}
				else if(mark<=75 && mark>70)
				{
					result=3;

					cout<<"B\n";

				}
				else if(mark<=70 && mark>65)
				{
					result=2.75;

					cout<<"B--\n";

				}
				else if(mark<=65 && mark>60)
				{
					result=2.5;

					cout<<"C+\n";

				}
				else if(mark<=60 && mark>50)
				{
					result=2;

					cout<<"C\n";

				}
				else if(mark<=50 && mark>45)
				{
					result=1.75;


					cout<<"C--\n";
				}
				else if(mark<=45 && mark>40)
				{
					result=1.5;

					cout<<"D+\n";

				}
				else if(mark<=40 && mark>30)
				{
					result=1;

					cout<<"D\n";

				}
				else if(mark<=30 && mark>0)
				{
					result=0;

					cout<<"F\n";	

				}
				else
				{
					cout<<"marks is out of range!!!!!!!!!!!!!!!!!!!!\n";
				}
			
			return result;
			
	}
	
	
	void CGPA_calculation()
	{
	
		int credit=5;
		int Tcredit=20;
		int a;
		float SumofGP[2]={0};
		
		for(a=0;a<n;a++)
		{



			if((s[a].grade.program_1 !=0 && s[a].grade.inte_ger !=0)
             && (s[a].grade.temp_1 !=0  && s[a].grade.program_2 !=0))
			{
				SumofGP[a]=(s[a].grade.program_1 * credit) 
                + (s[a].grade.inte_ger * credit) 
                + (s[a].grade.temp_1 * credit) 
                + (s[a].grade.program_2*credit);
			}



			else if(s[a].grade.program_1 ==0)
			{
				SumofGP[a]= (s[a].grade.inte_ger * credit)
                 + (s[a].grade.temp_1 * credit)
                 + (s[a].grade.program_2*credit);
			}


			else if(s[a].grade.inte_ger ==0)
			{
				SumofGP[a]=(s[a].grade.program_1 * credit)
                 + (s[a].grade.temp_1 * credit) 
                 + (s[a].grade.program_2*credit);	   
			}



			else if(s[a].grade.program_2 ==0)
			{
				SumofGP[a]=(s[a].grade.program_1 * credit)
                 + (s[a].grade.inte_ger * credit) 
                 + (s[a].grade.temp_1 * credit);
			}



			else
			{
				SumofGP[a]=(s[a].grade.program_1 * credit) 
                + (s[a].grade.inte_ger * credit) 
                + (s[a].grade.program_2*credit);
			}

			
			
			s[a].CGPA=SumofGP[a]/Tcredit;
		}
		
	}
	
	
	void Displaythegrade()
	{
		int i,j;
		float alpha;
		system("cls");

		cout<<"\n";
		
		cout<<"Student Grade Report----------------->\n";
		
		for(i=0;i<n;i++)
		{

			cout<<"Full Name-----------------> "<<s[i].first_name<<"\t"<<s[i].last_name<<"\t"<<"\tYear----------------->"<<s[i].year<<"\tSemester-----------------> "<<s[i].semester<<endl;
			cout<<"Sex----------------->"<<s[i].sex<<"\t"<<"Age----------------->"<<s[i].age<<endl<<endl;
			
			for(j=0;j<4;j++)
			{

				if(j==0)

				{
					alpha=s[i].grade.program_1;
					cout<<"Subject 1 ----------------->       \t";
					s[i].grade.program_1=Gradeofcourse(s[i].course.prog1);
				}

				else if(j==1)
				{
					alpha=s[i].grade.inte_ger;
					cout<<"Subject 2  ----------------->  \t";
					s[i].grade.inte_ger=Gradeofcourse(s[i].course.Int_CS);
					
				}

				else if(j==2)
				{
					alpha=s[i].grade.program_2;
					cout<<"Subject 3 ----------------->      \t";
					s[i].grade.program_2=Gradeofcourse(s[i].course.prog2);
				}

				else
				{
					alpha=s[i].grade.temp_1;
					cout<<"Subject 4 ----------------->\t";
					s[i].grade.temp_1=Gradeofcourse(s[i].course.temp_2);
				}

			
			}
			
			CGPA_calculation();

			cout<<"\n";

			cout<<">> CGPA----------------->"<<s[i].CGPA<<endl;

			
			Status(s[i].CGPA);	
			
		
		
	}
			
		  
			
	}
		
		
	
	void Status(float sta)
	{
		if(sta==4)
		{
			cout<<"Situation-----------------> Very Good.\n";
		}
		else if(sta>=3.75 && sta<=3.99)
		{
			cout<<"Situation-----------------> Good.\n";
		}
		else if(sta>3.5 && sta<=3.74)
		{
			cout<<"Situation-----------------> Okay.\n";
		}
		else if(sta>3.49 && sta<=3.25)
		{
			cout<<"Situation-----------------> Need more practice.\n";
		}
		else if(sta>=2.0 && sta<=3.24)
		{
			cout<<"Situation-----------------> Need more Practice and Time.\n";
		}
		else if(sta>1.75 && sta<=1.99)
		{
			cout<<"Situation---------------->Alert! High Practice Required .\n";
		}
		else if(sta>1.00 && sta<=1.74)
		{
			cout<<"Situation----------------->Take the readmission.\n";
		}
		else if(sta>0.0 && sta<1.0)
		{
			cout<<"Situation-----------------> Distinction.\n";
		}
		
	}
	

