#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i = 1, True = true, itrue = true, True2 = true, True0 = true, True3 = true;
	string ch, ch1, ch2, ch3, ch4, ch5;
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
				/*cout << "*连接前需要打开usb调试*" << endl << endl;
				cout << "*否则会连接失败无法执行命令*" << endl << endl;
				cout << "*使用无线adb需要先前已经用USB连接过并在手机中打开无线调试*" << endl << endl;
				cout << "*连接成功会显示 [xxxxx	decice]*" << " " << "*连接失败只显示一行 [List of devices attached]*" << endl << endl;
				cout << "1.(推荐)手动连接adb\t" << "2.(适合小白)自动连接adb\t\t" << "3.(不推荐)无线Adb" << endl << endl;
				cout << "输入数字:";*/
				while (True3)
				{
					cout << "*连接前需要打开usb调试*" << endl << endl;
					cout << "*否则会连接失败无法执行命令*" << endl << endl;
					cout << "*使用无线adb需要先前已经用USB连接过并在手机中打开无线调试*" << endl << endl;
					cout << "*连接成功会显示 [xxxxx	decice]*" << " " << "*连接失败只显示一行 [List of devices attached]*" << endl << endl;
					cout << "1.(推荐)手动连接adb\t" << "2.(适合小白)自动连接adb\t\t" << "3.(不推荐)无线Adb\t"<<"exit 退出" << endl << endl;
					cout << "输入:";
					cin >> ch2;
					if (ch2 == "1")
					{
						Sleep(1 * 1000);
						system("start cmd");
						system("pause");
						cout << "等待反应..." << endl;
						Sleep(1 * 1000);
						True3 = false;
						True2 = true;
						itrue = true;
						system("cls");
					}
					else if (ch2 == "2")
					{

						Sleep(0.5 * 1000);
						cout << "正在尝试连接..." << endl;
						Sleep(1 * 1000);
						system("adb devices");
						system("pause");
						cout << "等待反应..." << endl;
						Sleep(1 * 1000);
						True3 = false;
						True2 = true;
						itrue = true;
						system("cls");
					}
					else if (ch2 == "3")
					{
						int ip = true;
						string IP;
						system("adb shell am start com.android.settings/com.android.settings.Settings");
						system("adb tcpip 5555");
						cout << "这里需要你手动输入你手机的IP地址" << endl;
						cout << "输入adb connect xxx.xxx.xxx.xxx" << endl;
						cout << "显示connected to xxx.xxx.xxx.xxx:5555代表成功" << endl;
						cout << "显示already connected to xxx.xxx.xxx.xxx:5555代表已经连接了" << endl;
						Sleep(1.7 * 1000);
						system("start cmd");
						system("pause");
						cout << "等待反应..." << endl;
						Sleep(1 * 1000);
						True3 = false;
						True2 = true;
						itrue = true;
						system("cls");
					}
					else if (ch2 == "exit")
					{
						cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
						Sleep(0.8 * 1000);
						cout << "退出中..." << endl;
						Sleep(1 * 1000);
						True = false;
						itrue = false;
						True0 = false;
						True3 = false;
					}
					else
					{
						cout << "输入有误哦(～￣▽￣)～" << endl;
						Sleep(1 * 1000);
						system("cls");
					}
				}
				while (itrue)
				{
					cout << "输入数字进行使用" << endl;
					cout << endl;
					cout << "1." << "进入fastboot" << endl;;
					cout << "2." << "进入recovery" << endl;
					cout << "3." << "重启手机" << endl;
					cout << "4." << "手机关机" << endl;
					cout << "5." << "卸载系统软件" << endl;
					cout << "6." << "断开adb服务" << endl;
					cout << "7." << "重启adb服务" << endl;
					cout << "8." << "获取常用玩机软件" << endl;
					cout << "9." << "adb激活软件(如:冰箱)" << endl;
					cout << "0." << "返回上一个菜单" << endl;
					cout << "输入cmd启动cmd" << endl;
					cout << "输入exit退出" << endl << endl;
					cout << "输入:";
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
							cout << "1.国际上网\t" << "16.视频\t\t\t" << "31.卸载全部(消耗时间较长)" << endl;
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
							cout << "15.浏览器\t" << "30.SIM卡工具包" << endl;
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
								system("adb shell pm uninstall --user 0 com.coloros.backuprestor");
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
								system("adb shell pm uninstall --user 0 com.android.stk");
								Sleep(1 * 1000);
								system("cls");
							}
							else if (ch4 == "31")
							{

								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
								system("adb shell pm uninstall --user 0 com.heytap.book");
								system("adb shell pm uninstall --user 0 com.heytap.xgame");
								system("adb shell pm uninstall --user 0 com.coloros.backuprestor");
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
								system("adb shell pm uninstall --user 0 com.android.stk");
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
					else if (ch3 == "6")
					{
						cout << "执行成功" << endl;
						Sleep(1 * 1000);
						system("adb kill - server");//断开adb服务
						Sleep(1 * 1000);
						system("cls");
					}
					else if (ch3 == "7")
					{
						cout << "执行成功" << endl;
						Sleep(1 * 1000);
						system("adb start - server");
						//system("taskkill /f /im adb.exe");
						Sleep(1 * 1000);
						system("cls");
					}
					else if (ch3 == "8")
					{
						cout << "执行成功" << endl;
						True2 = true;
						Sleep(1 * 1000);
						system("cls");
						while (True2)
						{

							cout << "1. 下载冰箱" << endl;
							//cout << "2. 免root激活冰箱(有些手机需要打开禁止权限监控)" << endl;
							cout << "2. 下载via" << endl;
							cout << "3. 下载shizuku" << endl;
							cout << "0. 返回上一个菜单" << endl;
							cin >> ch4;
							if (ch4 == "1")
							{
								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("start https://dl-tc.coolapkmarket.com/down/apk_upload/2020/0523/icebox_coolapk_3.21.128141529-20219-o_1e9029q2s1emp178v1oud1bt3qeer-uid-184454.apk?t=1677249754&sign=a4c8da5021d36bf891cbbb0d19f38f9a");//打开冰箱网站
								
								Sleep(1 * 1000);
								system("cls");

							}
							else if (ch4 == "2")
							{
								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("start https://res.viayoo.com/v1/via-release-cn.apk");//打开via网站
								Sleep(1 * 1000);
								system("cls");
							}
							else if (ch4 == "3")
							{
								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("start https://apt.izzysoft.de/fdroid/repo/moe.shizuku.privileged.api_958.apk");//下载shizuku
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
					else if(ch3 =="9")
					{
						cout << "执行成功" << endl;
						True2 = true;
						Sleep(1 * 1000);
						system("cls");
						while (True2)
						{
							cout << "1. 免root激活冰箱" << endl;
							cout << "2. 激活shizuku" << endl;
							cout << "0. 返回上一个菜单" << endl;
							cin >> ch4;							
							if (ch4 == "1")
							{
								cout << "ColorOS系统如果激活失败,需要在开发者选项打开禁止权限监控" << endl;
								system("pause");
								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("adb shell sh /sdcard/Android/data/com.catchingnow.icebox/files/start.sh");//adb激活冰箱

							}
							else if (ch4 == "2")
							{
								cout << "ColorOS系统如果激活失败,需要在开发者选项打开禁止权限监控" << endl;
								system("pause");
								cout << "执行成功" << endl;
								Sleep(1 * 1000);
								system("adb shell sh /sdcard/Android/data/moe.shizuku.privileged.api/start.sh");//激活shizuku
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
						Sleep(1 * 1000);
						system("cls");
						itrue = false;
						True = false;
						True3 = true;
					}
					else if (ch3 == "exit")
					{
						cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
						Sleep(0.8 * 1000);
						cout << "退出中..." << endl;
						Sleep(1 * 1000);
						True = false;
						itrue = false;			
						True0 = false;
						True3 = false;
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
		}
		else if (ch1 == "n" || ch1 == "N")
		{
			cout << "欢迎下次使用,栓Q(≧▽≦q)" << endl;
			Sleep(0.8 * 1000);
			cout << "退出中..." << endl;
			Sleep(1 * 1000);
			True = false;
		}
		else
		{
			cout << "输入有误哦(～￣▽￣)～" << endl;
			Sleep(1 * 1000);
			system("cls");
		}
	}
}