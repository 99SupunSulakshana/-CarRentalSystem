//***************************************************************************************************************
//START MY PROGRAM
//***************************************************************************************************************

#include<iostream>
#include<string.h>
#include<fstream>
#include<cstring>

using namespace std;

//***********************************************************************************************************************************************
//MY DETAILS......................................................................................................................................
//************************************************************************************************************************************************
void my()
{   
    system("cls");
    system("color F");
	
	cout<<"\n\n\n\n\t\t\tww        wwww        ww  eeeeeeeeeee  ll          cccccccccc  ooooooooo  mmm     mmm  eeeeeeeeee  !!!!!!!\n";
	cout<<"\t\t\t ww      ww  ww      ww   ee           ll          cc          oo     oo  mm m   m mm  ee           !!!!!\n";
	cout<<"\t\t\t  ww    ww    ww    ww    eeeeeeeeeee  ll          cc          oo     oo  mm  m m  mm  eeeeeeeeee    !!!\n";
	cout<<"\t\t\t   ww  ww      ww  ww     ee           ll          cc          oo     oo  mm   m   mm  ee             !\n";
	cout<<"\t\t\t    wwww        wwww      eeeeeeeeeee  llllllllll  cccccccccc  ooooooooo  mm       mm  eeeeeeeeee     .\n\n\n";
	
	cout<<"\t\t\t\t\t\t\t\tNG/HNDCSE/24/26-SUPUN SULAKSHANA\n\n";
	cin.get();
	
}

//******************************************************************************************************	  
//welcome eka..........
//******************************************************************************************************

void welcome(){

	for(int i=15; i>0; i--)
	{
		system("cls");
		cout<<i;
	}
	
	cout<<endl;
	cout<<"\t\t\t\t***********************************************************************************\n";
    cout<<"\t\t\t\t*                                                                                 *\n";
	cout<<"\t\t\t\t*                    WELCOME FOR OUR TOUR MATE SYSTEM                             *\n";
	cout<<"\t\t\t\t*                                                                                 *\n";
	cout<<"\t\t\t\t***********************************************************************************\n";
		cin.get();
		system("cls");
		
}

//******************************************************************************************************
 //login function.......
 //*****************************************************************************************************
 
 
 void login()//login function in tour mate system.......
 {  system("cls");
cout<<"\n ---------tour mate login system.... --------";	

string username;
string password;

cout<<"\n Enter username : ";
cin>>username;
cout<<"\n Enter password : ";
cin>>password;

if(username=="supun" && password=="supun@2") 
{
	
    cout<<"\t\t\n\n>>>>>>>>>> LOGIN SUCCESFUL<<<<<<<<<<<<<<<"<<endl;
}   
else
{
	
    cout<<"\n Error ! Invalid your login...";
	login();

}
	cin.get();

}
//***************************************************************************************************************
//COMPANY DETAILS FUNCTION
//***************************************************************************************************************
void companymenu()//company detail function.........
{
	int chi;
	do{
		cout<<"\t\t///////////////// COMPANY DETAILS ////////////////////\n\n\n";
		cout<<"\t\t1. COMPANY HOTLINE DETAILS\n";
		cout<<"\t\t2. COMPANY SERVICES DETAILS\n";
		cout<<"\t\t3. COMPANY FLEETS DETAILS\n";
		cout<<"\t\t4. SOCIAL MEDIA DETAILS\n";
		cout<<"\t\t5. BACK TO MAIN MENU\n\n";
		cout<<"\t\tSELECT YOUR OPTION:";
		   cin>>chi;
		switch(chi)
		{
			case 1://company hot line...............
				{
				system("cls");
	            cout<<"\t\t\t\t////////////////// CONTACT US //////////////////\n\n\n";
                cout<<"     \t\t\t\t\t\tBUDGET 0111234567\n";
                cout<<"     \t\t\t\t\t\tCITY 0111234568\n";
                cout<<"     \t\t\t\t\t\tCAR 0111234569\n";
                cout<<"     \t\t\t\t\t\tMINIVAN 0111234560\n";
                cout<<"     \t\t\t\t\t\tVAN 0111234561\n";
                cout<<"     \t\t\t\t\t\tHEAD BRANCH 0111500500\n\n\n";
                cout<<"\t\t\t\t/////////////////////////////////////////////////\n\n";			
				system("pause");
				system("cls");
				break;
			}
			case 2://company services...........................
				{
					system("cls");
				cout<<"\t\t\t\t////////////////// COMPANY SERVICES //////////////////\n\n\n";
                cout<<"     \t\t\t\t\t\tCAB(PICK/DROP) FULL AND HALF\n";
                cout<<"     \t\t\t\t\t\tAIRPORT(PICK/DROP)\n";
                cout<<"     \t\t\t\t\t\tINTER CITY(DROP/PICK)\n";
                cout<<"     \t\t\t\t\t\tPARTY TIME(DROP/PICK)\n";
                cout<<"     \t\t\t\t\t\tWEDDING TIME\n";
                cout<<"     \t\t\t\t\t\tTRIPS\n\n\n";
                cout<<"\t\t\t\t///////////////////////////////////////////////////\n\n";
                system("pause");	
				system("cls");
				break;
			}
			case 3://company services.................
				{
					system("cls");
				cout<<"\t\t\t\t////////////////// COMPANY FLEETS //////////////////\n\n\n";
                cout<<"     \t\t\t\t\t\tCITY\n";
                cout<<"     \t\t\t\t\t\tBUDGET\n";
                cout<<"     \t\t\t\t\t\tCAR(DROP/PICK)\n";
                cout<<"     \t\t\t\t\t\tVAN(DROP/PICK)\n";
                cout<<"     \t\t\t\t\t\tMINIVAN\n";
                cout<<"\t\t\t\t///////////////////////////////////////////////////\n\n";
                system("pause");	
				system("cls");
				break;
			}
			case 4://company social media.......................
				{
				system("cls");
				cout<<"\t\t\t\t////////////////// SOCIAL MEDIA INFO //////////////////\n\n\n";
                cout<<"    \t\t\t\t\tWHATS APP-0711327510\n";
                cout<<"    \t\t\t\t\tVIBER-0711327510\n";
                cout<<"    \t\t\t\t\tFACEBOOK-TOUR MATE CAB\n";
                cout<<"    \t\t\t\t\tE-MAIL=WWW.TOURMATE2020@GMAIL.COM\n\n\n";
                cout<<"\t\t\t\t///////////////////////////////////////////////////\n\n";
                system("pause");
				system("cls");
				break;
			}
			case 5://exit...............
				{
				while(1)
		        {
				 system("cls");
		        	cout<<"\n\t\t ARE YOU SURE, YOU WANT TO EXIT NOW?(YES|NO)\n";
		        	char ex;
		        	cin>>ex;
		        	if(ex == 'y' || ex == 'Y')
		        	{
					   
					   break;
		        		
		        	}
		        	else if(ex == 'n' || ex == 'N')
                     		{
                     		system("cls");
                     		companymenu();
                     		 break;
                    		}
                     else{
                     	cout<<"\n INVALID YOUR SELCET OPTION...... !!!";
                     	getchar();
                     }
             	 }	
				break;
			}
		default: cout<<"\n INVALID YOUR CHOICE..TRY AGAIN.. \n\n\n";
		}
	}while(chi!=5);
	system("cls");
}
//***************************************************************************************************************
//VEHICLE DETAILS
//***************************************************************************************************************

class vehicle//class handling in vehicle function..............................
{
   char vno[20];
   int rgno;
   char brand[20];
   int seats;
   char fleet[20];
   char vtype[10];
   char rgname[30];
   char ded[20];
   int contact;
   public:
   	void inputdata();//ENTER THE VEHICLE DATA
   	void showdata() const;//SHOW THE VEHICLE DATA
   	void updatedata();//UPDATE THE VEHICLE DATA
	int retrgno() const;
		
};
//************************************************************************************************************
void vehicle::inputdata()//input vehicle data...................................
{
	cout<<"\n\n\t\tENTER THE VEHICLE NO:";
	cin.ignore();
	cin.getline(vno,20);
	cout<<"\t\tENTER THE COMPANY REGISTER NO:";
	cin>>rgno;
	cout<<"\t\tENTER THE VEHICLE BRAND:";
	cin.ignore();
	cin.getline(brand,20);
	cout<<"\t\tENTER THE NUMBER OF SEATS:";
	cin>>seats;
	cout<<"\t\tENTER THE NAME OF FLEET SECTION:";
	cin.ignore();
	cin.getline(fleet,20);
	cout<<"\t\tENTER THE VEHICLE TYPE(AC OR NON AC):";
	cin.ignore();
	cin.getline(vtype,10);
	cout<<"\t\tENTER THE VEHICLE REGISTER NAME:";
	cin.ignore();
	cin.getline(rgname,30);
	cout<<"\t\tENTER THE DETAILS ENTER DATE:";
	cin.ignore();
	cin.getline(ded,20);
	cout<<"\t\tENTER THE CONTACT NUMBER:";
	cin>>contact;
		
}
//*************************************************************************************************************
void vehicle::showdata() const//show vehicle details......................
{
	cout<<"\n\t\tVEHICLE NO:"<<vno;
	cout<<"\n\t\tREG NO:"<<rgno;
	cout<<"\n\t\tVEHICLE BRAND:"<<brand;
	cout<<"\n\t\tTOTAL SEATS:"<<seats;
	cout<<"\n\t\tFLEET SECTION:"<<fleet;
	cout<<"\n\t\t(AC OR NON AC):"<<vtype;
	cout<<"\n\t\tREG NAME:"<<rgname;
	cout<<"\n\t\tENTER DATE:"<<ded;
	cout<<"\n\t\tCONTACT:"<<contact;
}
	

//*************************************************************************************************************
void vehicle::updatedata()//update vehicle details..............................
{
	cout<<"\n\n\t\tENTER THE COMPANY REGISTER NO:";
	cin>>rgno;
	cout<<"\t\tENTER THE (UPDATE)VEHICLE NO:";
	cin.ignore();
	cin.getline(vno,20);
	cout<<"\t\tENTER THE (UPDATE)VEHICLE BRAND:";
	cin.ignore();
	cin.getline(brand,20);
	cout<<"\t\tENTER THE (UPDATE)NUMBER OF SEATS:";
	cin>>seats;
	cout<<"\t\tENTER THE (UPDATE)NAME OF FLEET SECTION:";
	cin.ignore();
	cin.getline(fleet,20);
	cout<<"\t\tENTER THE (UPDATE)VEHICLE TYPE(AC OR NON AC):";
	cin.ignore();
	cin.getline(vtype,10);
	cout<<"\t\tENTER THE (UPDATE)VEHICLE REGISTER NAME:";
	cin.ignore();
	cin.getline(vtype,30);
	cout<<"\t\tENTER THE (UPDATE)DETAILS ENTER DATE:";
	cin.ignore();
	cin.getline(ded,20);
	cout<<"\t\tENTER THE (UPDATE)CONTACT NUMBER:";
	cin>>contact;
	
}
//*************************************************************************************************************
int vehicle::retrgno() const
{
	return rgno;
}



//*************************************************************************************************************
//vehicle add file eka,,,,,,,,,,,,,,,
//*************************************************************************************************************
void write_vehiclefile()//write vehicle details file..................
{
	vehicle obj;
	ofstream outFile;
	outFile.open("vehicles.dat",ios::binary|ios::app);
	obj.inputdata();
	outFile.write(reinterpret_cast<char *> (&obj), sizeof(vehicle));
	outFile.close();
    	cout<<"\n\nVEHICLE REPORT HAS ADDED IN VEHICLE LIST.... ";
	cin.ignore();
	cin.get();
}
//****************************************************************************************************************
//update vehicle details 
//***************************************************************************************************************
void modify_vehiclefile(int n)//modify vehicle details file................
{
	bool found=false;
	vehicle obj;
	fstream File;
	File.open("vehicles.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&obj), sizeof(vehicle));
		if(obj.retrgno()==n)
		{
			obj.showdata();
			cout<<"\n\n\t\t\tENTER THE NEW DETAILS IN VEHICLE...."<<endl;
			obj.inputdata();
		    	int pos=(-1)*static_cast<int>(sizeof(obj));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&obj), sizeof(vehicle));
		    	cout<<"\n\n\t\t\t RECORD UPDATED...";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n\t\t\t RECORD NOT FOUND..... ";
	cin.ignore();
	cin.get();
}
//*************************************************************************************************************
//delete vehicle 
//*************************************************************************************************************
void delete_vehiclefile(int n)//delete vehicle details file.......................................
{
	vehicle obj;
	ifstream inFile;
	inFile.open("vehicles.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\n\t\t\tFILE COULD NOT BE OPEN !! PRESS ANY KEY TO CONTINUE PROGRAM...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(vehicle)))
	{
		if(obj.retrgno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&obj), sizeof(vehicle));
		}
	}
	outFile.close();
	inFile.close();
	remove("vehicles.dat");
	rename("Temp.dat","vehicles.dat");
	cout<<"\n\n\tRECORD DELETED ..";
	cin.ignore();
	cin.get();
}
//*************************************************************************************************************
//display vehicle details
//*************************************************************************************************************
void display_allfile()//display vehicle details files.................
{
	vehicle obj;
	ifstream inFile;
	inFile.open("vehicles.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\n\t\t\tFile could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(vehicle)))
	{
		obj.showdata();
		cout<<"\n\n\t====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	
}
//*************************************************************************************************************
//search vehicle details
//*************************************************************************************************************
void searchvehicle(int n)
{
	vehicle obj;
	ifstream inFile;
	inFile.open("vehicles.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\t\tFile could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(vehicle)))
	{
		if(obj.retrgno()==n)
		{
	  		 obj.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\n\t\t\trecord not exist";
	cin.ignore();
	cin.get();
}
//*************************************************************************************************************
//vehicle details menu......
//************************************************************************************************************
void vehiclemenu()//vehicles menu..........................
{
	system("cls");
	int ch,num;
	do{
		cout<<"\t\t///////////////// VEHICLE DETAILS ////////////////////\n\n\n";
		cout<<"\t\t1. ADD VEHICLE DETAILS\n";
		cout<<"\t\t2. VIEW VEHICLE DETAILS\n";
		cout<<"\t\t3. SEARCH VEHICLE DETAILS\n";
		cout<<"\t\t4. UPDATE V3EHICLE DETAILS\n";
		cout<<"\t\t5. REMOVE VEHICLE DETAILS\n";
		cout<<"\t\t6. BACK TO MAIN MENU\n\n";
		cout<<"\t\tSELECT YOUR OPTION:";
		   cin>>ch;
		switch(ch)
		{
			case 1://add vehicles.....................................
				system("cls");
				write_vehiclefile();
				break;
			case 2://display vehicle details..........................
				system("cls");
				display_allfile();
				break;
			case 3://search vehicle details....................
				system("cls");
				cout<<"\n\n\t\t\tPlease Enter The company register number "; cin>>num;
				searchvehicle(num);
				break;
			case 4://modify vehicles details......................
				system("cls");
			   cout<<"\n\n\t\t\tPlease Enter The company register number "; cin>>num;
				modify_vehiclefile(num);
				break;
			case 5://delete vehicles details..................
				system("cls");
				cout<<"\n\n\t\t\tPlease Enter The company register number "; cin>>num;
				delete_vehiclefile(num);
				break;
			case 6://exit vehicle details.................................
				while(1)
		        {
				 system("cls");
		        	cout<<"\n\t\t\tARE YOU SURE, YOU WANT TO EXIT NOW?(YES|NO)\n";
		        	char ex;
		        	cin>>ex;
		        	if(ex == 'y' || ex == 'Y')
		        	{
					   
					   break;
		        		
		        	}
		        	else if(ex == 'n' || ex == 'N')
                     		{
                     		system("cls");
                     		vehiclemenu();
                     		 break;
                    		}
                     else{
                     	cout<<"\n\t\t\t INVALID YOUR SELCET OPTION...... !!!";
                     	getchar();
                     }
             	 }
             	  
				break;
		}
	}while(ch!=6);//this function run to only six option
	system("cls");
}
//**************************************************************************************************************
//EMPLOYEES DETAILS
//**************************************************************************************************************

class Employee//class handling for employee details 
    {
	
    	char id[20];
    	int barcord;
    	char Name[30];
    	int age;
    	char Address[40];
    	char Dob[20];
    	char Gender[10];
    	char Job[20];
    	int basic_salary;
    	int ot_hours;
    	int ot_rate;
    	int final_salary;
    	
    	public:
    		void addemply();
    		void showemployee() const;
    		
    		int retbarcord() const;
};
//**************************************************************************************************************
void Employee::addemply()//add employee details..................
    	{
    		cout<<"\t\t\t/////////////////// ADD EMPLOYEES DETAILS //////////////////////////////////////\n\n\n";
    		cout<<"\t\tENTER THE EMPLOYEE NIC NO:";
    		cin.ignore();
        	cin.getline(id,20);
        	cout<<"\t\tENTER COMPANY BARCORD NO:";
        	cin>>barcord;
    		cout<<"\t\tENTER THE EMPLOYEE NAME:";
    		cin.ignore();
        	cin.getline(Name,30);
    		cout<<"\t\tENTER THE EMPLOYEE ADDRESS:";
    		cin.ignore();
	        cin.getline(Address,40);
    		cout<<"\t\tENTER THE EMPLOYEE DATE OF BIRTH:";
    		cin.ignore();
	        cin.getline(Dob,20);
    		cout<<"\t\tENTER THE EMPLOYEE AGE:";
    		cin>>age;
    		cout<<"\t\tEMTER THE EMPLOYEE GENDER:";
    		cin.ignore();
	        cin.getline(Gender,10);
    		cout<<"\t\tENTER THE EMPLOYEE JOB POSITION:";
    		cin.ignore();
	        cin.getline(Job,20);
    		cout<<"\t\tENTER EMPLOYEE BASIC SALARY:";
    		cin>>basic_salary;
    		cout<<"\t\tENTER EMPLOYEE OT HOURS:";
    		cin>>ot_hours;
    		ot_rate=125;
			
			if(ot_hours<50)
			{
				final_salary=basic_salary+(ot_hours*ot_rate);
				cout<<Name<<"YOUR FINAL SALARY IS:"<<final_salary<<endl;
			}
			else if((ot_hours>50)&&(ot_rate<100))
			{
				final_salary=basic_salary+(ot_rate*ot_rate*1.5);
				cout<<Name<<"YOUR FINAL SALARY IS:"<<final_salary<<endl;
			}
			else
			{
				final_salary=basic_salary+(ot_rate*ot_rate*2.5);
				cout<<"\tYOUR FINAL SALARY IS:"<<"\tRS."<<final_salary<<endl;
			}  
		}
//*************************************************************************************************************			 
   void Employee::showemployee() const//show employee details....
			{
				cout<<"\n\t\tEMPLOYEE'S ID: "<<id;
				cout<<"\n\t\tEMPLOYEE'S BARDCORD NO: "<<barcord;
				cout<<"\n\t\tEMPLOYEE'S NAME: "<<Name;
				cout<<"\n\t\tEMPLOYEE'S ADDRESS: "<<Address;
				cout<<"\n\t\tEMPLOYEE'S BIRTHDAY: "<<Dob;
				cout<<"\n\t\tEMPLOYEE'S AGE: "<<age;
				cout<<"\n\t\tEMPLOYEE'S GENDER: "<<Gender;
				cout<<"\n\t\tEMPLOYEE'S POSITION: "<<Job;
				cout<<"\n\t\tEMPLOYEE'S SALARY: Rs."<<final_salary;
			}
//**************************************************************************************************************
	
//**************************************************************************************************************	
	int Employee::retbarcord() const
		{
		 return barcord;	
		}
//**************************************************************************************************************
//employee details file
//*************************************************************************************************************	
	void writeemployee()// write employee details file....
	{
		Employee obj;
		ofstream outFile;
		outFile.open("employees.dat",ios::binary|ios::app);
		obj.addemply();
		outFile.write(reinterpret_cast<char *> (&obj), sizeof(Employee));
		outFile.close();
	    	cout<<"\n\nVEHICLE REPORT HAS ADDED IN VEHICLE LIST.... ";
		cin.ignore();
		cin.get();
	}
//************************************************************************************************************
//employee details display
//************************************************************************************************************
	void showemploy()//show employee details files.....
	{
    Employee obj;
	ifstream inFile;
	inFile.open("employees.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\n\t\t\tFile could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Employee)))
	{
		obj.showemployee();
		cout<<"\n\n\t====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	
	}
//**************************************************************************************************************
//edit employee details
//**************************************************************************************************************	
	void editemplopyee(int n)//edit employee file........................
	{
	bool found=false;
	Employee obj;
	fstream File;
	File.open("employees.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&obj), sizeof(Employee));
		if(obj.retbarcord()==n)
		{
			obj.showemployee();
			cout<<"\n\n\t\t\tENTER THE NEW DETAILS IN VEHICLE...."<<endl;
			obj.addemply();
		    	int pos=(-1)*static_cast<int>(sizeof(obj));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&obj), sizeof(Employee));
		    	cout<<"\n\n\t\t\t RECORD UPDATED...";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n\t\t\t RECORD NOT FOUND..... ";
	cin.ignore();
	cin.get();
	}
//***************************************************************************************************************
//delete employee details
//***************************************************************************************************************	
	void delete_employee(int n)//delete employee details file..........
{
	Employee obj;
	ifstream inFile;
	inFile.open("employees.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\n\t\t\tFILE COULD NOT BE OPEN !! PRESS ANY KEY TO CONTINUE PROGRAM...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Employee)))
	{
		if(obj.retbarcord()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&obj), sizeof(Employee));
		}
	}
	outFile.close();
	inFile.close();
	remove("employees.dat");
	rename("Temp.dat","employees.dat");
	cout<<"\n\n\tRECORD DELETED ..";
	cin.ignore();
	cin.get();
}
//*************************************************************************************************************
//search employee details
//***************************************************************************************************************
void searchemployee(int n)//search employee details function.....................
{
	Employee obj;
	ifstream inFile;
	inFile.open("employees.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\t\tFile could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Employee)))
	{
		if(obj.retbarcord()==n)
		{
	  		 obj.showemployee();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\n\t\t\trecord not exist";
	cin.ignore();
	cin.get();
}
//************************************************************************************************************
//employee details menu eka
void employeemenu()//employee employee menu...............................
{
		system("cls");
	int cho,no;
	do{
		cout<<"\t\t//////////////// EMPLOYEES DETAILS ////////////////////\n\n\n";
		cout<<"\t\t1. ADD EMPLOYEE'S DETAILS\n";
		cout<<"\t\t2. VIEW EMPLOYEES DETAILS\n";
		cout<<"\t\t3. UPDATE EMPLOYEE'S DETAILS\n";
		cout<<"\t\t4. SEARCH EMPLOYEES DETAILS\n";
		cout<<"\t\t5. REMOVE EMPLOYEES DETAILS\n";
		cout<<"\t\t6. BACK TO MAINMENU\n\n";
		cout<<"\t\tSELECT YOUR OPTION:";
		   cin>>cho;
		switch(cho)
		{
			case 1://add employee details............................
				system("cls");
				writeemployee();
				break;
			case 2://view employee details...........................................
				system("cls");
				showemploy();
				break;
			case 3://update employee details..............................
				system("cls");
				cout<<"\n\n\t\t\tPlease Enter The employee's id no: "; cin>>no;
				editemplopyee(no);
				break;
			case 4://search employee details................................
				system("cls");
				cout<<"\n\n\t\t\tPlease Enter The employee's id no: "; cin>>no;
				searchemployee(no);
				break;
			case 5://delete employee details..................................
				system("cls");
				cout<<"\n\n\t\t\tPlease Enter The employee's id no: "; cin>>no;
				delete_employee(no);
				break;
			case 6://exit.....................................
				while(1)
		        {
				 system("cls");
		        	cout<<"\n\t\t ARE YOU SURE, YOU WANT TO EXIT NOW?(YES|NO)\n";
		        	char ex;
		        	cin>>ex;
		        	if(ex == 'y' || ex == 'Y')
		        	{
					   
					   break;
		        		
		        	}
		        	else if(ex == 'n' || ex == 'N')
                     		{
                     		system("cls");
                     		employeemenu();
                     		 break;
                    		}
                     else{
                     	cout<<"\n INVALID YOUR SELCET OPTION...... !!!";
                     	getchar();
                     }
             	 }	
				break;
		}
	}while(cho!=6);
	system("cls");
}
//***************************************************************************************************************
//SALES DETAILS
//***************************************************************************************************************
class sales{//class handling for sales details................
	int p;
	char fleetsec[20];
	char title1[400];
	
	public:
		void addtitle();
		void showtitle() const;
		int retp() const;
	
};
void sales::addtitle()//add sales details..............
{  
	cout<<"\nENTER THE SALAES SECTION NO:";
	cin>>p;
	cout<<"\nENTER THE FLEET SECTION NAME:";
	cin.ignore();
	cin.getline(fleetsec,20);
	cout<<"\nENTER THE SALES DETAILS:";
	cin.ignore();
	cin.getline(title1,400);
	
}
void sales::showtitle() const//sales details view.......................
{
	cout<<"\n\nSLAES SECTION NO:"<<p;
	cout<<"\nFLEET SECTION NAME:"<<fleetsec;
	cout<<"\nSALES RULES:"<<title1;
	
}
int sales::retp() const
{
	return p;
}
void writesales()//write sales details file......................
{
	sales obj;
	ofstream outFile;
	outFile.open("sales.dat",ios::binary|ios::app);
	obj.addtitle();
	outFile.write(reinterpret_cast<char *> (&obj), sizeof(sales));
	outFile.close();
    cout<<"\n\nSALES RECORD HAS BEEN CREATED ";
	cin.ignore();
	cin.get();
}
void displaytitle()//display sales details file.............................
{
	sales obj;
	ifstream inFile;
	inFile.open("sales.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(sales)))
	{
		obj.showtitle();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
void displaysearch(int n)
{
	sales obj;
	ifstream inFile;
	inFile.open("sales.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(sales)))
	{
		if(obj.retp()==n)
		{
	  		 obj.showtitle();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}
void modifytitle(int n)
{
	bool found=false;
	sales obj;
	fstream File;
	File.open("sales.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&obj), sizeof(sales));
		if(obj.retp()==n)
		{
			obj.showtitle();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			obj.addtitle();
		    	int pos=(-1)*static_cast<int>(sizeof(obj));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&obj), sizeof(sales));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to delete record of file
//****************************************************************

void deletetitle(int n)
{
	sales obj;
	ifstream inFile;
	inFile.open("sales.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(sales)))
	{
		if(obj.retp()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&obj), sizeof(sales));
		}
	}
	outFile.close();
	inFile.close();
	remove("sales.dat");
	rename("Temp.dat","sales.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

void salesmenu()// sales manu eka..............................
{
		system("cls");
	int cho1,p1;
	do{
		cout<<"\t\t//////////////// COMPANY SALES DETAILS ////////////////////\n\n\n";
		cout<<"\t\t1. ADD SALES DETAILS\n";
		cout<<"\t\t2. VIEW SALES DETAILS\n";
		cout<<"\t\t3. UPDATE SALES DETAILS\n";
		cout<<"\t\t4. SEARCH SALES DETAILS\n";
		cout<<"\t\t5. REMOVE SALES DETAILS\n";
		cout<<"\t\t6. BACK TO MAINMENU\n\n";
		cout<<"\t\tSELECT YOUR OPTION:";
		   cin>>cho1;
		switch(cho1)
		{
			case 1://add company sales details................
				system("cls");
				writesales();
				break;
			case 2://view company sales....................................
				system("cls");
				displaytitle();
				break;
			case 3://update company sales details..................
				system("cls");
				cout<<"\n\n\tPlease Enter The sales setion no:"; cin>>p1;
				modifytitle(p1);
				break;
			case 4://search company sales details........................
				system("cls");
				cout<<"\n\n\tPlease Enter The sales setion no:"; cin>>p1;
			    displaysearch(p1);
				break;
			case 5://remove sales details................................
				system("cls");
				cout<<"\n\n\tPlease Enter The sales setion no:"; cin>>p1;
				deletetitle(p1);
				break;
			case 6://exit..................................
				while(1)
		        {
				 system("cls");
		        	cout<<"\n\t\tARE YOU SURE, YOU WANT TO EXIT NOW?(YES|NO)\n";
		        	char ex;
		        	cin>>ex;
		        	if(ex == 'y' || ex == 'Y')
		        	{
					   
					   break;
		        		
		        	}
		        	else if(ex == 'n' || ex == 'N')
                     		{
                     		system("cls");
                     		salesmenu();
                     		 break;
                    		}
                     else{
                     	cout<<"\n INVALID YOUR SELCET OPTION...... !!!";
                     	getchar();
                     }
             	 }	
				break;
		}
	}while(cho1!=6);
	system("cls");
}

//***************************************************************************************************************
//BOOKING DETAILS
//***************************************************************************************************************


class Book//class handle for booking.....................
{
	int bookingno;
	char custname[30];
	char custid[12];
	char custaddress[50];
	int contactcust;
	char pickupdate[15];
	char pickuptime[10];
	char drop[20];
	char discrib[100];
	char email[30];
	char vehicle[10];
	char conform[10];
	public: 
	void addbooking();
	void showbooking() const;
	int retbookingno() const;
    
	
};
void Book::addbooking()//input booking details..............................
{
	cout<<"\n\tBOOKING NO:";
	cin>>bookingno;
	cout<<"\tCUSTOMER NAME:";
	cin.ignore();
	cin.getline(custname,30);
	cout<<"\tCUSTOMER ID NO:";
	cin.ignore();
	cin.getline(custid,12);
	cout<<"\tCUSTOMER ADDRESS: ";
	cin.ignore();
	cin.getline(custaddress,50);
	cout<<"\tCUSTOMER CONTACT NO:";
	cin>>contactcust;
	cout<<"\tPICKUP DATE:";
	cin.ignore();
	cin.getline(pickupdate,15);
	cout<<"\tPICKUP TIME:";
	cin.ignore();
	cin.getline(pickuptime,10);
	cout<<"\tDROP PLACE:";
	cin.ignore();
	cin.getline(drop,20);
	cout<<"\tSMALLL DISCRIPTION OF CUSTOMER'S JOURNEY:";
	cin.ignore();
	cin.getline(discrib,100);
	cout<<"\tCUSTOMER'S EMAIL ADDRESS:";
	cin.ignore();
	cin.getline(email,30);
	cout<<"\tVEHICLE NO:";
	cin.ignore();
	cin.getline(vehicle,10);
	cout<<"\tYOUR BOOKING CONFORM?(Y OR N)";
	cin.ignore();
	cin.getline(conform,10);
}
void Book::showbooking() const
{
	cout<<"\n\tBOOKING NO:"<<bookingno;
	cout<<"\n\tCUSTOMER NAME:"<<custname;
	cout<<"\n\tCUSTOMER ID:"<<custid;
	cout<<"\n\tCUSTOMER ADDRESS:"<<custaddress;
	cout<<"\n\tCUSTOMER CONTACT NO:"<<contactcust;
	cout<<"\n\tPICKUP DATE:"<<pickupdate;
	cout<<"\n\tPICKUP TIME:"<<pickuptime;
	cout<<"\n\tDROP PLACE:"<<drop;
	cout<<"\n\tEMAIL:"<<email;
	cout<<"\n\tVEHICLE NO:"<<vehicle;
}
int Book::retbookingno() const
{
	return bookingno;
}
void writebook()//write sales details file......................
{
	Book obj;
	ofstream outFile;
	outFile.open("book.dat",ios::binary|ios::app);
	obj.addbooking();
	outFile.write(reinterpret_cast<char *> (&obj), sizeof(Book));
	outFile.close();
    cout<<"\n\nSALES RECORD HAS BEEN CREATED ";
	cin.ignore();
	cin.get();
}
void displaybook()//display sales details file.............................
{
	Book obj;
	ifstream inFile;
	inFile.open("book.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Book)))
	{
		obj.showbooking();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
void displaybooksearch(int n)
{
	Book obj;
	ifstream inFile;
	inFile.open("book.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Book)))
	{
		if(obj.retbookingno()==n)
		{
	  		 obj.showbooking();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}
void modifybook(int n)
{
	bool found=false;
	Book obj;
	fstream File;
	File.open("book.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&obj), sizeof(Book));
		if(obj.retbookingno()==n)
		{
			obj.showbooking();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			obj.addbooking();
		    	int pos=(-1)*static_cast<int>(sizeof(obj));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&obj), sizeof(Book));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to delete record of file
//****************************************************************

void deletebooktitle(int n)
{
	Book obj;
	ifstream inFile;
	inFile.open("book.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Book)))
	{
		if(obj.retbookingno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&obj), sizeof(Book));
		}
	}
	outFile.close();
	inFile.close();
	remove("book.dat");
	rename("Temp.dat","book.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

void bookingmenu()
{
	system("cls");
	int option99,b1;
	do{
		cout<<"\n\t\t<<<<<<<<<<<< BOOKING DETAILS >>>>>>>>>>>>>>>>>>>\n\n";
		cout<<"\t\t1.ALL VEHICLES\n";
		cout<<"\t\t2.BOOKING CREATE\n";
		cout<<"\t\t3.SHOW BOOKING LIST\n";
		cout<<"\t\t4.DELETE BOOKING\n";
		cout<<"\t\t5.SEARCH BOOKING\n";
		cout<<"\t\t6.RE-BOOKING\n";
		cout<<"\t\t7.BACK TO MAIN MENU\n";
		cout<<"\t\tSELECT YOUR OPTION";
		cin>>option99;
		switch(option99)
		{
			case 1:
				system("cls");
				display_allfile();
				break;
			case 2:
				system("cls");
				writebook();
				break;
			case 3:
				system("cls");
				
				break;
			case 4:
				system("cls");
				cout<<"\t\tENTER THE BOOKING NO:";cin>>b1;
				deletebooktitle(b1);
				
				break;
			case 5:
				system("cls");
				cout<<"\t\tENTER THE BOOKING NO:";cin>>b1;
				displaybooksearch(b1);
				break;
			case 6:
				system("cls");
				cout<<"\t\tENTER THE BOOKING NO:";cin>>b1;
				modifybook(b1);
				break;
			case 7:
				while(1)//exit part eka..................
		        {
				 system("cls");
		         cout<<"\n\t\t ARE YOU SURE, YOU WANT TO EXIT? (YES|NO)(INPUT Y OR N)\n";
		         char ex;//made a veriable for customer decision in software continue.................
		         cin>>ex;
		         system("cls");
		         if(ex == 'y' || ex == 'Y')
		        	 {
					 break;
		        	 }
		        		
		         else if(ex == 'n' || ex == 'N')
                    	{
                    		system("cls");
                     		bookingmenu();
                     		break;
                    	}
                     else{
                     	cout<<"\n INVALID YOUR CHOICE !!!";
                     	getchar();
                     }
             	 }	break;
                 	 system("cls");
            default: cout<<"\n INVALID YOUR CHOICE..TRY AGAIN.. \n\n\n"; 
                     	
		}	
	}while(option99!=7);//only program run in 4 options.....
 
}

class Payment//class handle for file...................
{
	int payno;
   char fleettp[20];
   int dis;
   int onekm;
   int basicdis,total;
   public:
   void addpayment();
   void showpay() const;
   int retpayno() const;
   	
};

void Payment::addpayment()//input payments........................................................
{
	cout<<"\t\t\nYOUR SELECT VEHICLE FLEET SECTION:";
	cin.ignore();
	cin.getline(fleettp,20);
	cout<<endl;
	displaytitle();
	cout<<"\t\t\nTOTAL DISTANCE:(KM)";
	cin>>dis;
	cout<<"\t\t\nPRICE OF ONE KM?";
	cin>>onekm;
	cout<<"\t\t\nBASIC PRICE:";
	cin>>basicdis;
	total=basicdis+(onekm*dis);
	cout<<"\t\t\nTOTAL PRICE OF:"<<total<<endl;
	
}
void writepayment()//write file for payments..................................................
{
	Payment obj;
	ofstream outFile;
	outFile.open("payment.dat",ios::binary|ios::app);
	obj.addpayment();
	outFile.write(reinterpret_cast<char *> (&obj), sizeof(Payment));
	outFile.close();
    cout<<"\n\nBOOKING RECORD HAS BEEN CREATED ";
	cin.ignore();
	cin.get();
}
void Payment::showpay() const
{
	cout<<"\t\t\nFLEET SECTION:"<<fleettp;
	cout<<"\t\t\nTOTAL DISTANCE:"<<dis;
	cout<<"\t\t\nTOTAL PRICE OF:"<<total;
	
	
}
void showpayment()//show payments for file.........................................
{
	Payment obj;
	ifstream inFile;
	inFile.open("payment.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Payment)))
	{
		obj.showpay();
		cout<<"\n\n\t\t====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
void displaypay(int n)//payment seraching for file.....................................................
{
	Payment obj;
	ifstream inFile;
	inFile.open("sales.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&obj), sizeof(Payment)))
	{
		if(obj.retpayno()==n)
		{
	  		 obj.showpay();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}
int Payment::retpayno() const
{
	return payno;
}

void payments(){//payments functions....................................
	system("cls");
	int sec,payn;
	do{
		cout<<"\t\t\t1. ADD PAYMENTS\n";
		cout<<"\t\t\t2. VIEW PAYMENTS DETAILS\n";
		cout<<"\t\t\t3. SEARCH PAYMENTS DETAILS\n";
		cout<<"\t\t\t4. BACK TO MAIN MENU\n";
		cout<<"\t\t\tSELECT YOUR OPTION:";
		cin>>sec;
		switch(sec){
			case 1://add payments..................................
				system("cls");
				writepayment();
				break;
			case 2://view vehicles details................................
				system("cls");
				showpayment();
				break;
			case 3://search vehicles details..............................
				system("cls");
				cout<<"\t\t\tENTERM RECEIPT NO:";cin>>payn;
				displaypay(payn);	
				break;
			case 4:
				while(1)//exit part eka..................
		        {
				 system("cls");
		         cout<<"\n\t\t ARE YOU SURE, YOU WANT TO EXIT? (YES|NO)(INPUT Y OR N)\n";
		         char ex;//made a veriable for customer decision in software continue.................
		         cin>>ex;
		         system("cls");
		         if(ex == 'y' || ex == 'Y')
		        	 {
		        	 	
					 break;
					 
		        	 }
		        		
		         else if(ex == 'n' || ex == 'N')
                    	{
                    		system("cls");
                     		payments();
                     		
                    	}
                     else{
                     	cout<<"\n INVALID YOUR CHOICE !!!";
                     	getchar();
                     }
             	 }	break;
                 	 system("cls");
            default: cout<<"\n INVALID YOUR CHOICE..TRY AGAIN.. \n\n\n"; 
                     	
		}	
	}while(sec!=4);//only program run in 4 options.....
 
}

//***************************************************************************************************************
//MY MAIN MENU
//***************************************************************************************************************
int main()//main program..............
{
	my();//my details.......
	welcome();//software eke welcome eka...............
	login();//login functio9n eka.....................
	system("cls");//clear display.........
	int option;//variable of switch option....
	do{//main menu our system.........................................
		cout<<"\t\t/////////// MAIN MENU /////////////\n\n\n";
		cout<<"\t\t1. COMPANY DETAILS\n";
		cout<<"\t\t2. VEHICLES DETAILS\n";
		cout<<"\t\t3. EMPLOYEES DETAILS\n";
		cout<<"\t\t4. COMPANY SALES DETAILS\n";
		cout<<"\t\t5. BOOKING HANDLING DETAILS\n";
		cout<<"\t\t6. PAYMENTS HANDLING\n";
		cout<<"\t\t7. EXIT\n\n";
		cout<<"\t\tSELECT YOUR OPTION:";//take user's decision.....
		   cin>>option;
		switch(option){//cases handling..........
			case 1://company details case.......
				system("cls");
				companymenu();//company details function........
				break;
			case 2://vehicles details case.....................
				system("cls");
				vehiclemenu();//vehicle details function.......
				break;
			case 3://employee details case.........
				system("cls");
				employeemenu();//employee details function........
				break;
			case 4://company sales details case.................
				system("cls");
				salesmenu();//sales details function........
				break;
			case 5://booking handling details case......
				system("cls");
				bookingmenu();//booking details function................
				break;
			case 6://payments handling case.................
				system("cls");
				payments();
				
			case 7:
				while(1)//exit part eka..................
		        {
				 system("cls");
		         cout<<"\n\t\t ARE YOU SURE, YOU WANT TO EXIT? (YES|NO)(INPUT Y OR N)\n";
		         char ex;//made a veriable for customer decision in software continue.................
		         cin>>ex;
		         system("cls");
		         if(ex == 'y' || ex == 'Y')
		        	 {
		        	 	cout<<"\n\n\n\t\t\tTHANKS FOR USE OUR SOFTWARE\n";
		        	 	cout<<"\n\n\n\t\t\t       GOOD BYE            \n";
					 exit(0);//program exit.......................
		        	 }
		        		
		         else if(ex == 'n' || ex == 'N')
                    	{
                     		main();//after return main manu(call main menu function).......
                     		break;
                    	}
                     else{
                     	cout<<"\n INVALID YOUR CHOICE !!!";
                     	getchar();
                     }
             	 }	break;
                 	 system("cls");
            default: cout<<"\n INVALID YOUR CHOICE..TRY AGAIN.. \n\n\n"; 
                     	
		}	
	}while(option!=7);//only program run in 7 options.....
 return 0;
}
//****************************************************************************************************************
// END OF MY PROJECT
//*********************************************************
