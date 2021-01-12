#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;
string workername1;
string worker1pass;
string workername2;
string worker2pass;
string workername3;
string worker3pass;
string workername4;
string worker4pass;
string workername5;
string worker5pass;
string mob1;
string age1;
string mob2;
string age2;
string mob3;
string age3;
string mob4;
string age4;
string mob5;
string age5;
int main()
{
	//system("color 9B");
	int c=0,b=0,r=0,j=0,h=0;
	int amount=0,count=0;
	int rik=30,bus=100,car=50,bik=20,hvy=200,limits=100;
	int v,p,w;
	cout<<"\n\n\n\n\t***********************************************************\n";
	cout<<"\t*                          Wellcome                       *\n";
	cout<<"\t*_________________________________________________________*\n";
	cout<<"\t*                             to                          *\n";
	cout<<"\t*_________________________________________________________*\n";
	cout<<"\t*                   parking managment system              *\n";
	cout<<"\t*_________________________________________________________*\n";
	cout<<"\t*                      | @ developed by : Mr Amir Ghafoor *\n";
    cout<<"\t***********************************************************\n\n";
	Sleep(1000);
	cout<<" LoAdInG PrOgRaM.";
	for(int i=0;i<=15;i++)
	{
		Sleep(800);
		cout<<".";
	}
 system("cls");
 //string NewWorkername[5];
 //string NewWorkerpass[5];
 string y,t;
 int i=0;
 int g;
 int q;
 //string ;
 string password="admin";
 char top;
 while(true)
 {
 system("cls");
 system("color 3E");
 cout<<"\n\t***************************************************************\n";
 cout<<"\t*                   |                   |                     *\n";
 cout<<"\t*                   |    Main Manu      |                     *\n";
 cout<<"\t*                   |                   |                     *\n";
 cout<<"\t***************************************************************\n";
 cout<<"\t*                                                             *\n";
 cout<<"\t*           Press 1 to login Admin Account                    *\n";
 cout<<"\t*_____________________________________________________________*\n";
 cout<<"\t*                                                             *\n";
 cout<<"\t*           Press 2 to login Worker Account                   *\n";
 cout<<"\t*_____________________________________________________________*\n"; 
 cout<<"\t*                                                             *\n";
 cout<<"\t*           press any button to exit the program              *\n";
 cout<<"\t*_____________________________________________________________*\n";
 cout<<"\t*                                 |@     Mr Amir Ghafoor      *\n";
 cout<<"\t***************************************************************\n\n";
 cout<<"\t             Enter Your Choice :: ";
 cin>>i;
 if(i==1)
 {
 	//Admin Block::
 	string a,s;
 	system("cls");
 	cout<<"\n\t________________________________";
 	cout<<"\n\t|                              |";
 	cout<<"\n\t|  Wellcome to Admin Block  &  |";
 	cout<<"\n\t|______________________________|";
 	cout<<"\n\n\tUsername Hint :: Your name";
 	cout<<"\n\n\tEnter Username ::";
 	cin>>a;
 	cout<<"\n\n\tPassword Hint:: .admin.";
 	cout<<"\n\tEnter User password::";
 	cin>>s;
 	if(a==a && s==password)
     {
     	Sleep(300);
     	system("cls");
       
	 cout<<"\n\n\t Loading Admin Account.";
	 for(int i=0;i<=7;i++)
	 {
		Sleep(300);
		cout<<".";
	 }
      system("cls");
 	do
 	{
 	system("cls");
 	system("color 1E");
 	cout<<"\n\t*********************************************************************\n";
    cout<<"\t*                    |    Admin Block    |                          *\n";
    cout<<"\t*********************************************************************\n";
    cout<<"\t*      Press 1 to create Worker Account                             *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 2 to check how many vahicles park in parking           *\n";
    cout<<"\t*___________________________________________________________________*\n"; 
    cout<<"\t*      Press 3  to show the charges of parking system               *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 4 to Show the collected Rupees of parking system       *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 5 to show the record of worker                         *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 6 to edit charges                                      *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 7 to check the limits of parking system                *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 8 to edit the parking limits                           *\n";
    cout<<"\t*___________________________________________________________________*\n";
    cout<<"\t*      Press 9 to logOut Admin Block                                *\n";
    cout<<"\t*********************************************************************\n\n";
    cout<<"\t             Enter Your Choice :: ";
    cin>>q;
    system("cls");
    switch(q)
    {
    case 1:
       {
    	//worker account ::
    	cout<<"\n\t***********************************\n";
    	cout<<"\t* You enter only five worker    ::*\n";
    	cout<<"\t* Press 1 to enter first worker ::*\n";
    	cout<<"\t* Press 2 to enter second worker::*\n";
    	cout<<"\t* Press 3 to enter third worker ::*\n";
    	cout<<"\t* Press 4 to enter fourth worker::*\n";
    	cout<<"\t* Press 5 to enter fith  worker ::*\n";
    	cout<<"\t***********************************\n";
    	cout<<"\t* Enter your choice ::";
 		cin>>g;
 		system("cls");
 		cout<<"\n\n";
 		   if(g==1)
 		   {
 			cout<<"\tEnter Worker Name:: ";
 			cin>>workername1;
 			cout<<"\tEnter Worker Mobile Number:: ";
 			cin>>mob1;
 			cout<<"\tEnter worker age:: ";
 			cin>>age1;
 			cout<<"\tEnter Worker account password:: ";
            cin>>worker1pass;
            system("cls");
            cout<<"\n\n\tWorker Account Created Successfully\n\n";
            cout<<"\t Press any key to go back \n";
	        }
		    else if(g==2)
 		    {
 			cout<<"\tEnter Worker Name:: ";
 			cin>>workername2;
 			cout<<"\tEnter Worker Mobile Number:: ";
 			cin>>mob2;
 			cout<<"\tEnter worker age:: ";
 			cin>>age2;
 			cout<<"\tEnter Worker account password:: ";
            cin>>worker2pass;
            system("cls");
            cout<<"\n\n\tWorker Account Created Successfully\n\n";
            cout<<"\t Press any key to go back \n";
		    }
		    else if(g==3)
 		    {
 			cout<<"\tEnter Worker Name:: ";
 			cin>>workername3;
 			cout<<"\tEnter Worker Mobile Number:: ";
 			cin>>mob3;
 			cout<<"\tEnter worker age:: ";
 			cin>>age3;
 			cout<<"\tEnter Worker account password:: ";
            cin>>worker3pass;
            system("cls");
            cout<<"\n\n\tWorker Account Created Successfully\n\n";
            cout<<"\t Press any key to go back \n";
		    }
		    else if(g==4)
 		    {
 			cout<<"\tEnter Worker Name:: ";
 			cin>>workername4;
 			cout<<"\tEnter Worker Mobile Number:: ";
 			cin>>mob4;
 			cout<<"\tEnter worker age:: ";
 			cin>>age4;
 			cout<<"\tEnter Worker account password:: ";
            cin>>worker4pass;
            system("cls");
            cout<<"\n\n\tWorker Account Created Successfully\n\n";
            cout<<"\t Press any key to go back \n";
		    }
		    else if(g==5)
 		    {
 			cout<<"\tEnter Worker Name:: ";
 			cin>>workername5;
 			cout<<"\tEnter Worker Mobile Number:: ";
 			cin>>mob5;
 			cout<<"\tEnter worker age:: ";
 			cin>>age5;
 			cout<<"\tEnter Worker account password:: ";
            cin>>worker5pass;
            system("cls");
            cout<<"\n\tWorker Account Created Successfully ::\n\n";
            cout<<"\t Press any key to go back \n";
		    }
		    else
		    {
		 	cout<<"\n\n\tSorry you can enter only five Worker in parking system\n";
		    }
		    //getch();
		    break;
	    }
	case 2:
	    {
	    	system("cls");
		cout<<"\n\t***************************************************************\n";
		cout<<"\t*  The total car stand in parking_____________________= "<<c<<endl;
		cout<<"\t*  The total Bus stand in parking_____________________= "<<b<<endl;
		cout<<"\t*  The total Rikhshas stand in parking________________= "<<r<<endl;
		cout<<"\t*  The total Bikes stand in parking___________________= "<<j<<endl;
		cout<<"\t*  The total number of other vehicles stand in parking= "<<h<<endl;
		cout<<"\t*  The total number of vehicles stand in parking______= "<<count<<endl;
		cout<<"\t***************************************************************\n";
			Sleep(500);
     	cout<<"\n\t*****************************************************\n";
     	cout<<"\t*   Press any Key to run program again              *\n";
    	cout<<"\t*****************************************************\n";
		//getch();
		break;
	    }
   case 3:
   	{
   		system("cls");
   		cout<<"\n\t**********************************************\n";
   		cout<<"\t* The Charges for One Rikshas     :: "<<rik;
	    cout<<"\n\t* The Charges for One Bus         :: "<<bus;
		cout<<"\n\t* The Charges for One Car         :: "<<car;
		cout<<"\n\t* The Charges for One Bike        :: "<<bik;
		cout<<"\n\t* The Charges for One havy Vahicle:: "<<hvy;
		cout<<"\n\t**********************************************\n";
		cout<<"\t**********************************************\n";
     	cout<<"\t*   Press any Key to run program again       *\n";
		cout<<"\t**********************************************\n";
		//getch();
		break;
		
	   }


	case 4:
	    {
		//parking limits::
		cout<<"\n\t*************************************************************\n";
		cout<<"\t*  The amount that is collected__________________= "<<amount<<"\n";
		cout<<"\t*************************************************************\n\n";
		Sleep(500);
     	cout<<"\t*************************************************************\n";
     	cout<<"\t*   Press any Key to run program again                      *\n";
		cout<<"\t*************************************************************\n";
		//getch();
		break;
	    }
	case 5:
	    {
	    	system("cls");
	    cout<<"\t*****************************************\n";
		cout<<"\t*  Worker Name ::"<<workername1<<endl;
		cout<<"\t*  Worker Password ::"<<worker1pass<<endl;
        cout<<"\t*  Worker Mobile number ::"<<mob1<<endl;
        cout<<"\t*  Worker age ::"<<age1<<endl;
        cout<<"\t*****************************************\n";
        cout<<"\t*  Worker Name ::"<<workername2<<endl;
        cout<<"\t*  Worker Password ::"<<worker2pass<<endl;
        cout<<"\t*  Worker Mobile number ::"<<mob2<<endl;
        cout<<"\t*  Worker age ::"<<age2<<endl;
        cout<<"\t*****************************************\n";
        cout<<"\t*  Worker Name ::"<<workername3<<endl;
        cout<<"\t*  Worker Password ::"<<worker3pass<<endl;
        cout<<"\t*  Worker Mobile number ::"<<mob3<<endl;
        cout<<"\t*  Worker age ::"<<age3<<endl;
        cout<<"\t*****************************************\n";
        cout<<"\t*  Worker Mobile number ::"<<workername4<<endl;
        cout<<"\t*  Worker Password ::"<<worker4pass<<endl;
        cout<<"\t*  Worker Mobile number ::"<<mob4<<endl;
        cout<<"\t*  Worker age ::"<<age4<<endl;
        cout<<"\t*****************************************\n";
        cout<<"\t*  Worker Mobile number ::"<<workername5<<endl;
        cout<<"\t*  Worker Password ::"<<worker5pass<<endl;
        cout<<"\t*  Worker Mobile number ::"<<mob5<<endl;
        cout<<"\t*  Worker age ::"<<age5<<endl;
        cout<<"\t*****************************************\n";
        Sleep(500);
   	    cout<<"\n\t*   Press any Key to run program again              *\n";
        break;
	    }
 	case 6:
	{
		system("cls");
		rik=0;
		bus=0;
		car=0;
		bik=0;
		hvy=0;
 	cout<<"\n\t****************************************************************\n";
 	cout<<"\t*        Please Enter parking Limits and charge           *\n";
	cout<<"\t*****************************************************************\n";
	cout<<"\tPlease enter the Rikhshas parking fee                 = ";
	cin>>rik;
	cout<<"\t*****************************************************************\n";
	cout<<"\t*Please enter the buses parking fee                    = ";
	cin>>bus;
	cout<<"\t*****************************************************************\n";
	cout<<"\t*Please enter the cars parking fee                     = ";
	cin>>car;
	cout<<"\t*****************************************************************\n";
	cout<<"\t*Please enter the bikes parking fee                    = ";
	cin>>bik;
	cout<<"\t*****************************************************************\n";
	cout<<"\t*Please enter the othes vehicles parking fee           = ";
	cin>>hvy;
	cout<<"\t*****************************************************************\n";
	cout<<"\tCharges Added successfully ";
	Sleep(500);
	cout<<"\n\t*****************************************************\n";
   	cout<<"\t*   Press any Key to run program again              *\n";
	cout<<"\t*****************************************************\n";
	//getch();
	break;
	}
	case 7:
		{
	     system("cls");
		cout<<"\n\t*************************************************\n";
		cout<<"\t*The limits of parking system is :: "<<limits;	
		cout<<"\n\t*************************************************\n";
		Sleep(500);
     	cout<<"\t*************************************************\n";
     	cout<<"\t*   Press any Key to run program again          *\n";
		cout<<"\t*************************************************\n";
		//getch();
		break;
		}
	case 8:
		{
			system("cls");
			limits=0;
			cout<<"\n\n\t*************************************************\n";
	        cout<<"\tPlease enter the limits in parking system = ";
	        cin>>limits;
	        Sleep(500);
     	    cout<<"\t*************************************************\n";
     	    cout<<"\t*   Press any Key to run program again          *\n";
	     	cout<<"\t*************************************************\n";
	     	//getch();
	        break;
		}
	case 9:
	    {
	    	system("cls");
		cout<<"\n\n\n\tLoging Out";
		for(int f=0;f<10;f++)
		{
			Sleep(200);
			cout<<".";
		}
		break;
	    }
	default:
	    {
		  cout<<"invalid number";
		  break;
	    }
       }
    if(q==9)
      {
    	break;
	  }
	top=getch();
    }
    while(top);
   }
   else
   {
   	system("cls");
   	system("color 4F");
   	Sleep(100);
    system("color 4F");
   	for(int i=0;i<3;i++)
     	{
     	system("cls");
     	Sleep(650);
   		cout<<"\n\t*******************************************\n";
   		cout<<"\t*        Wrong Username / Password        *\n";
		cout<<"\t*******************************************\n";
     	Sleep(650);
   		system("cls");
   	    }
	Sleep(500);
    cout<<"\n\t*******************************************\n";
    cout<<"\t*   Press any Key to run program again    *\n";
	cout<<"\t*******************************************\n";
   	
   	
   	getch();
   }
}
  
 else if(i==2)
  {
 	//Worker Block::
 	system("cls");
 	cout<<"\n\n Note ::";
	cout<<"\n => If Admin cannot create worker account then worker account cant be login.";
 	cout<<"\n => If you have not worker account then request to admin to creat your account. ";
 	cout<<"\n => If you have worker account then please login.";
 	cout<<"\n\t________________________________";
 	cout<<"\n\t|                              |";
 	cout<<"\n\t|  Wellcome to Worker Block &  |";
 	cout<<"\n\t|______________________________|";
 	cout<<"\n\n\tEnter Username:: ";
 	cin>>t;
 	cout<<"\tEnter User Password:: ";
 	cin>>y;
 	if(t==workername1 && y==worker1pass ||t==workername2 && y==worker2pass||t==workername3 && y==worker3pass||t==workername4 && y==worker4pass||t==workername5 && y==worker5pass)
 	{
 		Sleep(300);
     	system("cls");
       
	 cout<<"\n\t Loading Worker Account.";
	 for(int i=0;i<=7;i++)
	 {
		Sleep(300);
		cout<<".";
	 }
 		system("cls");
 
	do
	{
		system("cls");
		char wish;
		system("cls");
		system("color 5B");
	cout<<"\n\t******************************************************\n";
	cout<<"\t*               |    Worker Block    |               *\n";
	cout<<"\t*_______________|____________________|_______________*\n";
	cout<<"\t*                                                    *\n";
	cout<<"\t*    Press 1 to entering Vahicles                    *\n";
	cout<<"\t*    Press 2 to Out the Vahicles                     *\n";
	cout<<"\t*    Press 3 to show the charges of Vahicles         *\n";
	cout<<"\t*    Press 4 to show the limits of parking system    *\n";
	cout<<"\t*    Press 5 to all show previous record             *\n";
	cout<<"\t*    Press 6 to Delete the all previous record       *\n";
	cout<<"\t*    Press 7 to LogOut worker account                *\n";
	cout<<"\t*____________________________________________________*\n";
    cout<<"\t*                                 |@ Mr Amir Ghafoor *\n";
	cout<<"\t******************************************************\n\n";
	cout<<"\n\t  Enter your choice :: ";
	cin>>v;
 	
	system("cls");
	switch(v)
	{
	case 1:
		{
		do
         {
         	system("cls");
         	system("color 5B");
	    cout<<"\n\t******************************************************\n";
    	cout<<"\t*               |   Entering Manu    |               *\n";
	    cout<<"\t*_______________|____________________|_______________*\n";
     	cout<<"\t*                                                    *\n";
	    cout<<"\t*    Press 1 to enter Car                            *\n";
	    cout<<"\t*    Press 2 to enter Bus                            *\n";
    	cout<<"\t*    Press 3 to enter Riksha                         *\n";
	    cout<<"\t*    Press 4 to enter Bike                           *\n";
     	cout<<"\t*    Press 5 to enter other Vahicles                 *\n";
    	cout<<"\t*____________________________________________________*\n";
    	cout<<"\t*    Press 6 to Go back Worker Account               *\n";
    	cout<<"\t******************************************************\n";
    	cout<<"\t      Enter Your Choice ::";
    	cin>>p;
    	switch(p)
    	{
    	case 1:
    	{
		if(count<limits)
		{
		amount=amount+car;
		count=count+1;
		c++;
		cout<<"\n\t Added Successfully ::\n\n";
		cout<<"\tPress any key to back Worker Block\n";
     	}
     	else
     	{
     	    Sleep(100);
     	    system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     		Sleep(700);
     		cout<<"\n\t*******************************************\n";
     		cout<<"\t*         Sorry parking is Full           *\n";
     		cout<<"\t*******************************************\n";
     		Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
		    // getch();
		 }
		 break;
		
	}
	case 2:
	{
		if(count<limits)
		{
		amount=amount+bus;
		count=count+1;
		b++;
		cout<<"\n\n\t Added Successfully ::\n\n";
		cout<<"\tPress any key to back Worker Block\n";
	    }
	   else
     	{
     	    Sleep(100);
     	    system("color 4F");
     		for(int i=0;i<=3;i++)
     		{
     		system("cls");
     		Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*         Sorry parking is Full           *\n";
     		cout<<"\t*******************************************\n";
     		Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		 //getch();
		 }
		break;
		
	}
	
	case 3:
   	{
		if(count<limits)
		{
		amount=amount+rik;
		count=count+1;
		r++;
		cout<<"\n\n\t Added Successfully ::\n\n";
		cout<<"\tPress any key to back Worker Block\n";
	    }
    	else
        {
            Sleep(100);
            system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     		Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*         Sorry parking is Full           *\n";
     		cout<<"\t*******************************************\n";
     		Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		}
		break;
		
    }
	
	case 4:
	{
		if(count<limits)
		{
		amount=amount+bik;
		count=count+1;
		j++;
		cout<<"\n\n\t Added Successfully ::\n\n";
		cout<<"\tPress any key to back Worker Block\n";
	    }
	   else
     	{
            Sleep(100);
            system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     		Sleep(700);
       		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*         Sorry parking is Full           *\n";
     		cout<<"\t*******************************************\n";
     		Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		 break;
		
	}
	case 5:
	{
		if(count<limits)
		{
		amount=amount+hvy;
		count=count+1;
		h++;
		cout<<"\n\n\t Added Successfully ::\n\n";
		cout<<"\tPress any key to back Worker Block\n";
	    }
	   else
     	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
      		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*         Sorry parking is Full           *\n";
     		cout<<"\t*******************************************\n";
     		Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		 break;
	    }
	    case 6:
	    	system("cls");
	    	{
	    		system("cls");
	    		cout<<"\n\n";
	    		cout<<"\n\tPress any key to go back Worker Block\n";
	    		cout<<"\n\tGoing Back...";
	    		Sleep(400);
	    		break;
			}
	    default:
	    	{
	    		cout<<"Invalid Number";
	    		break;
			}
		}
		if(p==6)
		{
			break;
		}
	    wish=getch();
        }
        while(wish);
        break;
		}
	case 2:
		{
		
		do
        {
        	system("cls");
        	system("color 5B");
		cout<<"\n\t******************************************************\n";
    	cout<<"\t*               |   Outing  Manu     |               *\n";
	    cout<<"\t*_______________|____________________|_______________*\n";
     	cout<<"\t*                                                    *\n";
	    cout<<"\t*    Press 1 to out Car                              *\n";
	    cout<<"\t*    Press 2 to out Bus                              *\n";
    	cout<<"\t*    Press 3 to out Riksha                           *\n";
	    cout<<"\t*    Press 4 to out Bike                             *\n";
     	cout<<"\t*    Press 5 to out other Vahicles                   *\n";
    	cout<<"\t*____________________________________________________*\n";
    	cout<<"\t*    Press 6 to Go back Worker Account               *\n";
    	cout<<"\t******************************************************\n";
    	cout<<"\t      Enter Your Choice ::";
	 cin>>w;
	 switch(w)
	 {
	 	case 1:
	 		{
	 		if(c>0)
	 			{
	 			system("cls");
	 			count=count-1;
		        c=c-1;
		        cout<<"\n\n\tOne Car Out successfully ";
		        cout<<"\n\tPress any key to back outing manu";
		        }
		     else
         	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
     		cout<<"\n\t*******************************************\n";
     		cout<<"\t*     Alert Car entry already empty       *\n";
     		cout<<"\t*******************************************\n";
     	    Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		        break;
			 }
		case 2:
	 		{
	 			if(b>0)
	 			{
	 			system("cls");
	 			count=count-1;
		        b=b-1;
		        cout<<"\n\n\tOne Riksha Out successfully ";
		        cout<<"\n\tPress any key to back outing manu";
		        }
		     else
         	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*  Alert Buses entry already empty        *\n";
     		cout<<"\t*******************************************\n";
     	    Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
          	cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();;
		    }
		        break;
			 }
		case 3:
	 		{
	 		if(r>0)
	 			{
	 			system("cls");
	 			count=count-1;
		        r=r-1;
		        cout<<"\n\n\tOne Bus Out successfully ";
		        cout<<"\n\tPress any key to back outing manu";
		        }
		     else
         	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*      Alert Rikshas entry already empty   *\n";
     		cout<<"\t*******************************************\n";
     	    Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
     		cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		        break;
			 }
		case 4:
	 		{
	 		if(j>0)
	 			{
	 			system("cls");
	 			count=count-1;
		        j=j-1;
		        cout<<"\n\tOne Bike Out successfully ";
		        cout<<"\n\tPress any key to back outing manu";
		        }
		     else
         	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*        Alert Bike entry already empty    *\n";
     		cout<<"\t*******************************************\n";
     	    Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
      		cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		        break;
			 }
		case 5:
	 		{
	 			system("cls");
	 		if(h>0)
	 			{
	 			system("cls");
	 			count=count-1;
		        h=h-1;
		        cout<<"\n\n\tOne Heavy Vahicle Out successfully ";
		        cout<<"\n\tPress any key to back outing manu";
		        }
		     else
         	{
     		Sleep(100);
     		system("color 4F");
     		for(int i=0;i<3;i++)
     		{
     		system("cls");
     	    Sleep(700);
     		cout<<"\n\n\t*******************************************\n";
     		cout<<"\t*Alert Heavy Vahecles entry already empty *\n";
     		cout<<"\t*******************************************\n";
     	    Sleep(700);
     		system("cls");
     	    }
     		Sleep(500);
      		cout<<"\n\t*******************************************\n";
     		cout<<"\t*   Press any Key to run program again    *\n";
		    cout<<"\t*******************************************\n";
     		//getch();
		 }
		        break;
			 }
		 case 6:
		 	system("cls");
		 	{
		 	 	system("cls");
	    		cout<<"\n\n";
	    		cout<<"\n\tPress any key to go back Worker Block\n";
	    		cout<<"\n\tGoing Back...";
	    		
	    		Sleep(400);
	    		break;
			 }
		 default:
			 	{
			 	system("cls");
				cout<<"\n\tInvalid Choice";
		 		break;
				 }
	  }
	   if(w==6)
		 {
		 	break;
		 }
	 wish=getch();
     }
     while(wish);
     break;
	  
	}
	case 3:
   	{
   		system("cls");
   		cout<<"\n\t************************************************\n";
   		cout<<"\t* The Charges for One Rikshas     :: "<<rik;
	    cout<<"\n\t* The Charges for One Bus         :: "<<bus;
		cout<<"\n\t* The Charges for One Car         :: "<<car;
		cout<<"\n\t* The Charges for One Bike        :: "<<bik;
		cout<<"\n\t* The Charges for One havy Vahicle:: "<<hvy;
		cout<<"\n\t*************************************************\n";
		Sleep(500);
     	cout<<"\t*************************************************\n";
     	cout<<"\t*   Press any Key to run program again          *\n";
		cout<<"\t*************************************************\n";
		//getch();
		break;
		
	  }
	case 4:
		{
		cout<<"\n\n\t*****************************************************\n";
		cout<<"\t*The limits of parking system is :: "<<limits;	
		cout<<"\n\t*****************************************************\n";
		Sleep(500);
        cout<<"\t*****************************************************\n";
     	cout<<"\t*   Press any Key to run program again              *\n";
		cout<<"\t*****************************************************\n";
		//getch();
		break;
		}
	case 5:
	{
		Sleep(200);
		cout<<"\n\n\tLoading AlL PrViOuS Record.";
	    for(int i=0;i<=10;i++)
	   {
		Sleep(350);
		cout<<".";
	    }
	    Sleep(300);
	    system("cls");
		cout<<"\n**********************************************************************\n";
		cout<<"*       Your all privious record is given belowe \n";
		cout<<"*---------------------------------------------------------------------\n";
		cout<<"*  The amount that is collected_______________________= "<<amount<<"\n";
		cout<<"*  The total car stand in parking_____________________= "<<c<<endl;
		cout<<"*  The total Bus stand in parking_____________________= "<<b<<endl;
		cout<<"*  The total Rikhshas stand in parking________________= "<<r<<endl;
		cout<<"*  The total Bikes stand in parking___________________= "<<j<<endl;
		cout<<"*  The total number of other vehicles stand in parking= "<<h<<endl;
		cout<<"*  The total number of vehicles stand in parking______= "<<count<<endl;
		cout<<"***********************************************************************\n";
		Sleep(500);
		cout<<"\n***********************************************************************\n";
		cout<<"* Press any Key to run program again                                  *\n";
		cout<<"***********************************************************************\n";
		break;
		//getch();
	}
	case 6:
	{
		amount=0;
		count=0;
		c=0;
		r=0;
		b=0;
		j=0;
		h=0;
		Sleep(200);
		cout<<"\n\n\t Deleting AlL PrViOuS Record.";
	    for(int i=0;i<=10;i++)
	   {
		Sleep(350);
		cout<<".";
	    }
	    Sleep(300);
	    system("cls");
		cout<<"\n*********************************************************************\n";
		cout<<"*            All previous record is deleted \n";
		cout<<"*********************************************************************\n";
		cout<<"*  The amount that is collected_______________________= "<<amount<<endl;
		cout<<"*  The total car stand in parking_____________________= "<<c<<endl;
		cout<<"*  The total Bus stand in parking_____________________= "<<b<<endl;
		cout<<"*  The total Rikhshas stand in parking________________= "<<r<<endl;
		cout<<"*  The total Bikes stand in parking ground____________= "<<j<<endl;
		cout<<"*  The total number of other vehicles stand in parking= "<<h<<endl;
		cout<<"*  The total number of vehicles stand in parking______= "<<count<<"\n";
		cout<<"*********************************************************************\n";
		Sleep(500);
		cout<<"\n*********************************************************************\n";
		cout<<"*               Press any Key to run program again                    *\n";
		cout<<"*********************************************************************\n";
		//getch();
		break;
	}
	case 7:
		system("cls");
		{
			cout<<"\n\tLoging out";
			for(int x=0;x<10;x++)
			{
				Sleep(200);
				cout<<".";
			}
			cout<<"\n\tPress any key to go back Main manu\n";
			break;
		}
	default:
	 {
		cout<<"Invild choice";
		break;
     }
     
     }
     if(v==7)
     {
    	break;
      }
     top=getch();
    }
    while(top);
   }
    else
   {
   	system("cls");
   	system("color 4F");
   	Sleep(100);
    system("color 4F");
   	for(int i=0;i<3;i++)
     	{
     	system("cls");
     	Sleep(650);
   		cout<<"\n\t*******************************************\n";
   		cout<<"\t*        Wrong Username / Password        *\n";
		cout<<"\t*******************************************\n";
     	Sleep(650);
   		system("cls");
   	    }
	Sleep(500);
    cout<<"\n\t*******************************************\n";
    cout<<"\t*   Press any Key to run program again    *\n";
	cout<<"\t*******************************************\n";
   	
   	
   	getch();
   }
  }
 else
 {
	exit(0);
 }
 //top=getch();
 }
 //while(top);
}
