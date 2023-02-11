#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i=1,True = true,itrue = true,True2=true,True0= true;
	string ch1,ch2,ch3,ch4,ch5;
	while (True)
	{
		cout << "是否进入工具 [y]/[n]" << endl;
		cin >> ch1;
		if (ch1 == "y" || ch1 == "Y")
		{
			cout << "欢迎使用q(≧▽≦q)" << endl;
			Sleep(0.8 * 1000);
			cout << "进入中..." << endl;
			Sleep(1 * 1000);
			system("cls");
			Sleep(0.3 * 1000);
			while (True0)
			{
				cout << "*连接前需要打开usb调试*" << endl << endl;
				cout << "*否则会连接失败无法执行命令*" << endl << endl;
				cout << "*连接成功会显示 [xxxxx	decice]*" << " " << "*连接失败只显示一行 [List of devices attached]*" << endl << endl;
				cout << "1.(推荐)手动连接adb" << "	" << "2.(适合小白)自动连接adb" << endl << endl;
				cout << "输入数字:";
				cin >> ch2;
				if (ch2 == "1")
				{
					/*cout << "好哒,启动手动连接" << "请输入adb devices进行连接" << endl << endl;
					cout << "连接成功会显示 [xxxxx	decice]" << "连接失败只显示一行 [List of devices attached]" << endl << endl;
					cout << "*连接前需要打开usb调试*" << endl << endl;*/
					Sleep(1 * 1000);
					system("start cmd");
					cout << "等待反应..." << endl;
					Sleep(3 * 1000);
					system("cls");
					/*cout << "输入数字进行使用" << endl;
					cout << endl;
					cout << i << "." << "进入fastboot" << endl;;
					cout << ++i << "." << "进入recovery" << endl;
					cout << ++i << "." << "重启手机" << endl;
					cout << ++i << "." << "手机关机" << endl;*/
					while (itrue)
					{
						cout << "输入数字进行使用" << endl;
						cout << endl;
						cout << "1." << "进入fastboot" << endl;;
						cout << "2." << "进入recovery" << endl;
						cout << "3." << "重启手机" << endl;
						cout << "4." << "手机关机" << endl;
						cout << "5." << "卸载系统软件" << endl;
						cout << "0." << "退出工具" << endl;
						cin >> ch3;
						if (ch3 == "1")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot fastboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "2")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot recovery");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "3")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "4")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb shell reboot -p");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "5")
						{
							cout << "执行成功" << endl;
							True2 = true;
							Sleep(1 * 1000);
							system("cls");
							while (True2)
							{
								cout << "*Succees 代表成功*" << endl;
								cout << "*Failure [not installed for 0] 代表已卸载*" << endl;
								cout << "*Failure [DELETE_FAILED_INTERNAL_ERROR] 代表无法卸载*" << endl;
								cout << "输入数字进行卸载" << endl << endl;
								cout << "1.国际上网\t" << "16.视频" << endl;
								cout << "2.书城\t\t" << "17.音乐" << endl;
								cout << "3.快游戏\t" << "18.系统分身" << endl;
								cout << "4.手机搬家\t" << "19.驾驶模式" << endl;
								cout << "5.自由收藏\t" << "20.速览" << endl;
								cout << "6.realme商城\t" << "21.应用增强服务" << endl;
								cout << "7.智能家居\t" << "22.儿童空间" << endl;
								cout << "8.小游戏\t" << "23.小布识屏" << endl;
								cout << "9.Carlink\t" << "24.乐划锁屏" << endl;
								cout << "10.游戏中心\t" << "25.全局搜索" << endl;
								cout << "11.游戏助手\t" << "26.入眠胶囊" << endl;
								cout << "12.小布指令\t" << "27.使用说明" << endl;
								cout << "13.指南针\t" << "28.设备互联服务" << endl;
								cout << "14.语音翻译\t" << "29.快应用" << endl;
								cout << "15.浏览器\t" << "30.卸载全部(消耗时间较长)" << endl;
								cout << "0.返回上一个菜单" << endl;
								cout << "输入数字: ";
								cin >> ch4;
								if (ch4 == "1")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "2")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.book");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "3")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "4")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "5")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "6")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.storecn");//卸载realem商城
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "7")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "8")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.play");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "9")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "10")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "11")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.games");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "12")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "13")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "14")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "15")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "16")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "17")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.music");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "18")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "19")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "20")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "21")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "22")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "23")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "24")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "25")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "26")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "27")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "28")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "29")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "30")
								{

									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									system("adb shell pm uninstall --user 0 com.heytap.book");
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									system("adb shell pm uninstall --user 0 com.realme.storecn");
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									system("adb shell pm uninstall --user 0 com.oplus.play");
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									system("adb shell pm uninstall --user 0 com.oplus.games");
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									system("adb shell pm uninstall --user 0 com.heytap.music");
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									cout << "执行完成,自动返回上一个菜单" << endl;
									Sleep(1 * 1000);
									True2 = false;
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "0")
								{
									
									Sleep(1 * 1000);
									system("cls");
									True2 = false;
								}
								else
								{
									cout << "输入有误哦(～￣▽￣)～" << endl;
									Sleep(1 * 1000);
									system("cls");
								}
							}
						}
						else if (ch3 == "0")
						{
							cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
							Sleep(0.8 * 1000);
							cout << "退出中..." << endl;
							Sleep(1 * 1000);
							itrue = false;
							True = false;
							True0 = false;
						}
						else if (ch3 == "cmd")
						{
							system("start cmd");
							Sleep(1 * 1000);
							system("cls");
						}
						else
						{
							cout << "输入有误哦(～￣▽￣)～" << endl;
							Sleep(1 * 1000);
							system("cls");
						}
					}
				}
				else if (ch2 == "2")
				{
					/*cout << "准备连接" << endl;*/
					/*cout << "*连接前需要打开usb调试*" << endl << endl;
					cout << "否则会连接失败无法执行命令" << endl << endl;
					cout << "连接成功会显示 [xxxxx	decice]" <<" " << "连接失败只显示一行 [List of devices attached]" << endl << endl;*/
					Sleep(0.5 * 1000);
					cout << "正在尝试连接..." << endl;
					Sleep(1 * 1000);
					system("adb devices");
					cout << "等待反应..." << endl;
					Sleep(3 * 1000);
					system("cls");
					while (itrue)
					{
						cout << "输入数字进行使用" << endl;
						cout << endl;
						cout << "1." << "进入fastboot" << endl;;
						cout << "2." << "进入recovery" << endl;
						cout << "3." << "重启手机" << endl;
						cout << "4." << "手机关机" << endl;
						cout << "5." << "卸载系统软件" << endl;
						cout << "0." << "退出工具" << endl;
						cin >> ch3;
						if (ch3 == "1")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot fastboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "2")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot recvery");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "3")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb reboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "4")
						{
							cout << "执行成功" << endl;
							Sleep(1 * 1000);
							system("adb shell reboot -p");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "5")
						{
							cout << "执行成功" << endl;
							True2 = true;
							Sleep(1 * 1000);
							system("cls");
							while (True2)
							{
								cout << "*Succees 代表成功*" << endl;
								cout << "*Failure [not installed for 0] 代表已卸载*" << endl;
								cout << "*Failure [DELETE_FAILED_INTERNAL_ERROR] 代表无法卸载*" << endl;
								cout << "输入数字进行卸载" << endl << endl;
								cout << "1.国际上网\t" << "16.视频" << endl;
								cout << "2.书城\t\t" << "17.音乐" << endl;
								cout << "3.快游戏\t" << "18.系统分身" << endl;
								cout << "4.手机搬家\t" << "19.驾驶模式" << endl;
								cout << "5.自由收藏\t" << "20.速览" << endl;
								cout << "6.realme商城\t" << "21.应用增强服务" << endl;
								cout << "7.智能家居\t" << "22.儿童空间" << endl;
								cout << "8.小游戏\t" << "23.小布识屏" << endl;
								cout << "9.Carlink\t" << "24.乐划锁屏" << endl;
								cout << "10.游戏中心\t" << "25.全局搜索" << endl;
								cout << "11.游戏助手\t" << "26.入眠胶囊" << endl;
								cout << "12.小布指令\t" << "27.使用说明" << endl;
								cout << "13.指南针\t" << "28.设备互联服务" << endl;
								cout << "14.语音翻译\t" << "29.快应用" << endl;
								cout << "15.浏览器\t" << "30.卸载全部(消耗时间较长)" << endl;
								cout << "0.返回上一个菜单" << endl;
								cout << "输入数字: ";
								cin >> ch4;
								if (ch4 == "1")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "2")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.book");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "3")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "4")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "5")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "6")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.storecn");//卸载realem商城
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "7")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "8")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.play");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "9")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "10")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "11")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.games");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "12")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "13")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "14")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "15")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "16")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "17")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.music");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "18")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "19")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "20")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "21")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "22")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "23")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "24")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "25")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "26")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "27")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "28")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "29")
								{
									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "30")
								{

									cout << "执行成功" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									system("adb shell pm uninstall --user 0 com.heytap.book");
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									system("adb shell pm uninstall --user 0 com.realme.storecn");
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									system("adb shell pm uninstall --user 0 com.oplus.play");
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									system("adb shell pm uninstall --user 0 com.oplus.games");
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									system("adb shell pm uninstall --user 0 com.heytap.music");
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									cout << "执行完成,自动返回上一个菜单" << endl;
									Sleep(1 * 1000);
									True2 = false;
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "0")
								{
									Sleep(1 * 1000);
									system("cls");
									True2 = false;
								}
								else
								{
									cout << "输入有误哦(～￣▽￣)～" << endl;
									Sleep(1 * 1000);
									system("cls");
								}
							}
						}
						else if (ch3 == "0")
						{
							cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
							Sleep(0.8 * 1000);
							cout << "退出中..." << endl;
							Sleep(1 * 1000);
							itrue = false;
							True = false;
							True0 = false;
						}
						else if (ch3 == "cmd")
						{
							system("start cmd");
							Sleep(1 * 1000);
							system("cls");
						}
						else {
							cout << "输入有误哦(～￣▽￣)～" << endl;
							Sleep(1 * 1000);
							system("cls");
						}
					}
				}
				else {
					cout << "输入有误哦(～￣▽￣)～" << endl;
					Sleep(1 * 1000);
					system("cls");
				}

			}
			
		}
		else if (ch1 == "n" || ch1 == "N")
		{
			cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
			Sleep(0.8 * 1000);
			cout << "退出中..." << endl;
			Sleep(1*1000);
			True = false;
		}
		else
		{
			cout << "输入有误哦(～￣▽￣)～" << endl;
			Sleep(1*1000);
			system("cls");
		}
	}
}