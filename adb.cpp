#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i=1,True = true,itrue = true,True2=true,True0= true;
	string ch1,ch2,ch3,ch4,ch5;
	while (True)
	{
		cout << "�Ƿ���빤�� [y]/[n]" << endl;
		cin >> ch1;
		if (ch1 == "y" || ch1 == "Y")
		{
			cout << "��ӭʹ��q(�R���Qq)" << endl;
			Sleep(0.8 * 1000);
			cout << "������..." << endl;
			Sleep(1 * 1000);
			system("cls");
			Sleep(0.3 * 1000);
			while (True0)
			{
				cout << "*����ǰ��Ҫ��usb����*" << endl << endl;
				cout << "*���������ʧ���޷�ִ������*" << endl << endl;
				cout << "*���ӳɹ�����ʾ [xxxxx	decice]*" << " " << "*����ʧ��ֻ��ʾһ�� [List of devices attached]*" << endl << endl;
				cout << "1.(�Ƽ�)�ֶ�����adb" << "	" << "2.(�ʺ�С��)�Զ�����adb" << endl << endl;
				cout << "��������:";
				cin >> ch2;
				if (ch2 == "1")
				{
					/*cout << "����,�����ֶ�����" << "������adb devices��������" << endl << endl;
					cout << "���ӳɹ�����ʾ [xxxxx	decice]" << "����ʧ��ֻ��ʾһ�� [List of devices attached]" << endl << endl;
					cout << "*����ǰ��Ҫ��usb����*" << endl << endl;*/
					Sleep(1 * 1000);
					system("start cmd");
					cout << "�ȴ���Ӧ..." << endl;
					Sleep(3 * 1000);
					system("cls");
					/*cout << "�������ֽ���ʹ��" << endl;
					cout << endl;
					cout << i << "." << "����fastboot" << endl;;
					cout << ++i << "." << "����recovery" << endl;
					cout << ++i << "." << "�����ֻ�" << endl;
					cout << ++i << "." << "�ֻ��ػ�" << endl;*/
					while (itrue)
					{
						cout << "�������ֽ���ʹ��" << endl;
						cout << endl;
						cout << "1." << "����fastboot" << endl;;
						cout << "2." << "����recovery" << endl;
						cout << "3." << "�����ֻ�" << endl;
						cout << "4." << "�ֻ��ػ�" << endl;
						cout << "5." << "ж��ϵͳ���" << endl;
						cout << "0." << "�˳�����" << endl;
						cin >> ch3;
						if (ch3 == "1")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot fastboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "2")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot recovery");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "3")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "4")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb shell reboot -p");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "5")
						{
							cout << "ִ�гɹ�" << endl;
							True2 = true;
							Sleep(1 * 1000);
							system("cls");
							while (True2)
							{
								cout << "*Succees ����ɹ�*" << endl;
								cout << "*Failure [not installed for 0] ������ж��*" << endl;
								cout << "*Failure [DELETE_FAILED_INTERNAL_ERROR] �����޷�ж��*" << endl;
								cout << "�������ֽ���ж��" << endl << endl;
								cout << "1.��������\t" << "16.��Ƶ" << endl;
								cout << "2.���\t\t" << "17.����" << endl;
								cout << "3.����Ϸ\t" << "18.ϵͳ����" << endl;
								cout << "4.�ֻ����\t" << "19.��ʻģʽ" << endl;
								cout << "5.�����ղ�\t" << "20.����" << endl;
								cout << "6.realme�̳�\t" << "21.Ӧ����ǿ����" << endl;
								cout << "7.���ܼҾ�\t" << "22.��ͯ�ռ�" << endl;
								cout << "8.С��Ϸ\t" << "23.С��ʶ��" << endl;
								cout << "9.Carlink\t" << "24.�ֻ�����" << endl;
								cout << "10.��Ϸ����\t" << "25.ȫ������" << endl;
								cout << "11.��Ϸ����\t" << "26.���߽���" << endl;
								cout << "12.С��ָ��\t" << "27.ʹ��˵��" << endl;
								cout << "13.ָ����\t" << "28.�豸��������" << endl;
								cout << "14.��������\t" << "29.��Ӧ��" << endl;
								cout << "15.�����\t" << "30.ж��ȫ��(����ʱ��ϳ�)" << endl;
								cout << "0.������һ���˵�" << endl;
								cout << "��������: ";
								cin >> ch4;
								if (ch4 == "1")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "2")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.book");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "3")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "4")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "5")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "6")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.storecn");//ж��realem�̳�
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "7")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "8")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.play");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "9")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "10")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "11")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.games");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "12")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "13")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "14")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "15")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "16")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "17")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.music");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "18")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "19")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "20")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "21")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "22")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "23")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "24")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "25")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "26")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "27")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "28")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "29")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "30")
								{

									cout << "ִ�гɹ�" << endl;
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
									cout << "ִ�����,�Զ�������һ���˵�" << endl;
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
									cout << "��������Ŷ(��������)��" << endl;
									Sleep(1 * 1000);
									system("cls");
								}
							}
						}
						else if (ch3 == "0")
						{
							cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
							Sleep(0.8 * 1000);
							cout << "�˳���..." << endl;
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
							cout << "��������Ŷ(��������)��" << endl;
							Sleep(1 * 1000);
							system("cls");
						}
					}
				}
				else if (ch2 == "2")
				{
					/*cout << "׼������" << endl;*/
					/*cout << "*����ǰ��Ҫ��usb����*" << endl << endl;
					cout << "���������ʧ���޷�ִ������" << endl << endl;
					cout << "���ӳɹ�����ʾ [xxxxx	decice]" <<" " << "����ʧ��ֻ��ʾһ�� [List of devices attached]" << endl << endl;*/
					Sleep(0.5 * 1000);
					cout << "���ڳ�������..." << endl;
					Sleep(1 * 1000);
					system("adb devices");
					cout << "�ȴ���Ӧ..." << endl;
					Sleep(3 * 1000);
					system("cls");
					while (itrue)
					{
						cout << "�������ֽ���ʹ��" << endl;
						cout << endl;
						cout << "1." << "����fastboot" << endl;;
						cout << "2." << "����recovery" << endl;
						cout << "3." << "�����ֻ�" << endl;
						cout << "4." << "�ֻ��ػ�" << endl;
						cout << "5." << "ж��ϵͳ���" << endl;
						cout << "0." << "�˳�����" << endl;
						cin >> ch3;
						if (ch3 == "1")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot fastboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "2")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot recvery");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "3")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb reboot");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "4")
						{
							cout << "ִ�гɹ�" << endl;
							Sleep(1 * 1000);
							system("adb shell reboot -p");
							Sleep(1 * 1000);
							system("cls");
						}
						else if (ch3 == "5")
						{
							cout << "ִ�гɹ�" << endl;
							True2 = true;
							Sleep(1 * 1000);
							system("cls");
							while (True2)
							{
								cout << "*Succees ����ɹ�*" << endl;
								cout << "*Failure [not installed for 0] ������ж��*" << endl;
								cout << "*Failure [DELETE_FAILED_INTERNAL_ERROR] �����޷�ж��*" << endl;
								cout << "�������ֽ���ж��" << endl << endl;
								cout << "1.��������\t" << "16.��Ƶ" << endl;
								cout << "2.���\t\t" << "17.����" << endl;
								cout << "3.����Ϸ\t" << "18.ϵͳ����" << endl;
								cout << "4.�ֻ����\t" << "19.��ʻģʽ" << endl;
								cout << "5.�����ղ�\t" << "20.����" << endl;
								cout << "6.realme�̳�\t" << "21.Ӧ����ǿ����" << endl;
								cout << "7.���ܼҾ�\t" << "22.��ͯ�ռ�" << endl;
								cout << "8.С��Ϸ\t" << "23.С��ʶ��" << endl;
								cout << "9.Carlink\t" << "24.�ֻ�����" << endl;
								cout << "10.��Ϸ����\t" << "25.ȫ������" << endl;
								cout << "11.��Ϸ����\t" << "26.���߽���" << endl;
								cout << "12.С��ָ��\t" << "27.ʹ��˵��" << endl;
								cout << "13.ָ����\t" << "28.�豸��������" << endl;
								cout << "14.��������\t" << "29.��Ӧ��" << endl;
								cout << "15.�����\t" << "30.ж��ȫ��(����ʱ��ϳ�)" << endl;
								cout << "0.������һ���˵�" << endl;
								cout << "��������: ";
								cin >> ch4;
								if (ch4 == "1")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.redteamobile.roaming");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "2")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.book");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "3")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.xgame");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "4")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros. backuprestor");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "5")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.favorite");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "6")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.storecn");//ж��realem�̳�
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "7")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.smarthome");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "8")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.play");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "9")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.opluscarlink");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "10")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.gamecenter");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "11")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.games");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "12")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.shortcuts");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "13")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.compass2");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "14")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.translate");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "15")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.browser");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "16")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.yoli");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "17")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.music");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "18")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.systemclone");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "19")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.smartdrive");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "20")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.assistantscreen");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "21")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.cosa");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "22")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.childrenspace");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "23")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.directui");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "24")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.pictorial");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "25")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.heytap.quicksearchbox");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "26")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.realme.wellbeing");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "27")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.coloros.operationManual");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "28")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.oplus.linker");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "29")
								{
									cout << "ִ�гɹ�" << endl;
									Sleep(1 * 1000);
									system("adb shell pm uninstall --user 0 com.nearme.instant.platform");
									Sleep(1 * 1000);
									system("cls");
								}
								else if (ch4 == "30")
								{

									cout << "ִ�гɹ�" << endl;
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
									cout << "ִ�����,�Զ�������һ���˵�" << endl;
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
									cout << "��������Ŷ(��������)��" << endl;
									Sleep(1 * 1000);
									system("cls");
								}
							}
						}
						else if (ch3 == "0")
						{
							cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
							Sleep(0.8 * 1000);
							cout << "�˳���..." << endl;
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
							cout << "��������Ŷ(��������)��" << endl;
							Sleep(1 * 1000);
							system("cls");
						}
					}
				}
				else {
					cout << "��������Ŷ(��������)��" << endl;
					Sleep(1 * 1000);
					system("cls");
				}

			}
			
		}
		else if (ch1 == "n" || ch1 == "N")
		{
			cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
			Sleep(0.8 * 1000);
			cout << "�˳���..." << endl;
			Sleep(1*1000);
			True = false;
		}
		else
		{
			cout << "��������Ŷ(��������)��" << endl;
			Sleep(1*1000);
			system("cls");
		}
	}
}