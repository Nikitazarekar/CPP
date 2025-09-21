#include<iostream>
using namespace std;
main()
{
	int year;
	char name[100];
	
	
	cout<<"....CHINESE ZODIAC FINDER....\n";
	cout<<"1.Rat\n";
	cout<<"2.Ox\n";
	cout<<"3.Tiger\n";
	cout<<"4.Rabbit\n";
	cout<<"5.Dragon\n";
	cout<<"6.Snake\n";
	cout<<"7.Horse\n";
	cout<<"8.Goat\n";
	cout<<"9.Monkey\n";
	cout<<"10.Rooster\n";
	cout<<"11.Dog\n";
	cout<<"12.Pig\n";
	cout<<"0.Exit\n";
	
	cout<<"\nEnter your Name: ";
	cin>>name;
	
	cout<<"\nEnter your birth Year: ";
	cin>>year;
	
	int zodiacIndex = (year - 4) % 12;
	
	cout<<"\nName: "<<name;
	cout<<"\nYear: "<<year;
	cout<< "\nCongrats ...!" <<name<<endl;
    cout << "You are type <" << zodiacIndex << "> and you have ";
	
	switch(zodiacIndex)
	{
		case 1:
			cout<<"\nRat: Intelligent, adaptable, quick-witted, charming.";
			break;
		case 2:
			cout<<"\nOx: Strong, reliable, patient, hardworking.";
			break;
		case 3:
			cout<<"\nTiger: Brave, confident, ambitious, competitive.";
			break;
		case 4:
			cout<<"\nRabbit: Gentle, kind, artistic, compassionate.";
			break;
		case 5:
			cout<<"\nDragon: Powerful, energetic, charismatic, bold.";
			break;
		case 6:
			cout<<"\nSnake: Wise, mysterious, intuitive, analytical.";
			break;
		case 7:
			cout<<"\nHorse: Energetic, enthusiastic, free-spirited, independent.";
			break;
		case 8:
			cout<<"\nGoat: Calm, gentle, sympathetic, artistic.";
			break;
		case 9:
			cout<<"\nMonkey: Clever, curious, witty, adaptable.";
			break;
		case 10:
			cout<<"\nRooster: Hardworking, practical, confident, punctual.";
			break;	
		case 11:
			cout<<"\nDog: Loyal, honest, faithful, protective.";
			break;
		case 12:
			cout<<"\nPig: Generous, kind-hearted, sincere, easygoing..";
			break;
		case 0:
			cout<<"\nThank you..try again";
			break;
		default:
			cout<<"\nInvalid index.Please try again.";
	}
	return 0;
	    
    	

}