#include <iostream>
#include <iomanip>
#include <stdlib.h>

const double Version=1.0;

using namespace std;


main()
{
	system("start CreatLnk.bat");
	
	menu: 
	cout<<" ══════════════════════菜单══════════════════════"<<endl;
	cout<<"              欢迎使用Gamer Launcher"<<endl;
	cout<<"╭────────────────┬───────────────┬───────────────╮"<<endl;
	cout<<"│     Steam      ┆      MC       ┆   系统设置    │"<<endl;
	cout<<"├────────────────┼───────────────┼───────────────┤"<<endl;
	cout<<"│ 2) 安装steam   ┆ 4) 启动imc    ┆ 7) 软件版本   │"<<endl; 
	cout<<"│ 3) 安装加速器  ┆ 5) 启动PCL2   ┆ 8) 检查更新   │"<<endl;
	cout<<"│                ┆ 6) 安装Java   ┆               │"<<endl;
	cout<<"╰────────────────┴───────────────┴───────────────╯"<<endl;
	cout<<""<<endl;
	cout<<"【提示】输入1获取菜单，0退出"<<endl;
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
			cout<<"╔════════════════╗"<<endl;
			cout<<"║ Gamer Launcher ║"<<endl;
			cout<<setprecision(1)<<setiosflags(ios::fixed)<<"║ 版本 v"<<Version<<"      ║"<<endl;
			cout<<"║                ║"<<endl;
			cout<<"╚════════════════╝"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
		break;
		
		case 8:
			system("start https://github.com/GrassCubeColonies/Gamer-Launcher/releases");
			cout<<"若链接无法访问请选择9"<<endl;
		break;
		
		case 9:
			system("start https://githubfast.com/GrassCubeColonies/Gamer-Launcher/releases");
		break;
	}
	cout<<""<<endl;
	goto choose;
}
