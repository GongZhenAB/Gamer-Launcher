#include <iostream>
#include <iomanip>
#include <stdlib.h>

const double Version=1.0;

using namespace std;


main()
{
	system("start CreatLnk.bat");
	
	menu: 
	cout<<" �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�˵��T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T"<<endl;
	cout<<"              ��ӭʹ��Gamer Launcher"<<endl;
	cout<<"�q���������������������������������Щ������������������������������Щ������������������������������r"<<endl;
	cout<<"��     Steam      ��      MC       ��   ϵͳ����    ��"<<endl;
	cout<<"�����������������������������������੤�����������������������������੤������������������������������"<<endl;
	cout<<"�� 2) ��װsteam   �� 4) ����imc    �� 7) ����汾   ��"<<endl; 
	cout<<"�� 3) ��װ������  �� 5) ����PCL2   �� 8) ������   ��"<<endl;
	cout<<"��                �� 6) ��װJava   ��               ��"<<endl;
	cout<<"�t���������������������������������ة������������������������������ة������������������������������s"<<endl;
	cout<<""<<endl;
	cout<<"����ʾ������1��ȡ�˵���0�˳�"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	choose: 
	int input;
	cin>>input;
	
	switch(input)
	{
		case 0:
			exit(0);
		break;
		
		case 1:
			goto menu;
		break;
		
		case 2:
			system("start file/SteamSetup.exe");
		break;
		
		case 3:
			system("start file/Steam++.exe");
		break;
		
		case 4:
			system("start https://ws.imc.re/eaglercraft/");
		break;
		
		case 5:
			system("start file/PCL2/Plain Craft Launcher 2.exe");
		break;
		
		case 6:
			system("start file/Java.exe");
		break;
		
		case 7:
			cout<<""<<endl;
			cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
			cout<<"�U Gamer Launcher �U"<<endl;
			cout<<setprecision(1)<<setiosflags(ios::fixed)<<"�U �汾 v"<<Version<<"      �U"<<endl;
			cout<<"�U                �U"<<endl;
			cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
		break;
		
		case 8:
			system("start https://github.com/GrassCubeColonies/Gamer-Launcher/releases");
			cout<<"�������޷�������ѡ��9"<<endl;
		break;
		
		case 9:
			system("start https://githubfast.com/GrassCubeColonies/Gamer-Launcher/releases");
		break;
	}
	cout<<""<<endl;
	goto choose;
}
