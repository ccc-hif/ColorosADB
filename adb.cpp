#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i = 1, True = true, itrue = true, True2 = true, True0 = true, True3 = true;
	string ch, ch1, ch2, ch3, ch4, ch5;
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
				/*cout << "*����ǰ��Ҫ��usb����*" << endl << endl;
				cout << "*���������ʧ���޷�ִ������*" << endl << endl;
				cout << "*ʹ������adb��Ҫ��ǰ�Ѿ���USB���ӹ������ֻ��д����ߵ���*" << endl << endl;
				cout << "*���ӳɹ�����ʾ [xxxxx	decice]*" << " " << "*����ʧ��ֻ��ʾһ�� [List of devices attached]*" << endl << endl;
				cout << "1.(�Ƽ�)�ֶ�����adb\t" << "2.(�ʺ�С��)�Զ�����adb\t\t" << "3.(���Ƽ�)����Adb" << endl << endl;
				cout << "��������:";*/
				while (True3)
				{
					cout << "*����ǰ��Ҫ��usb����*" << endl << endl;
					cout << "*���������ʧ���޷�ִ������*" << endl << endl;
					cout << "*ʹ������adb��Ҫ��ǰ�Ѿ���USB���ӹ������ֻ��д����ߵ���*" << endl << endl;
					cout << "*���ӳɹ�����ʾ [xxxxx	decice]*" << " " << "*����ʧ��ֻ��ʾһ�� [List of devices attached]*" << endl << endl;
					cout << "1.(�Ƽ�)�ֶ�����adb\t" << "2.(�ʺ�С��)�Զ�����adb\t\t" << "3.(���Ƽ�)����Adb\t"<<"exit �˳�" << endl << endl;
					cout << "����:";
					cin >> ch2;
					if (ch2 == "1")
					{
						Sleep(1 * 1000);
						system("start cmd");
						system("pause");
						cout << "�ȴ���Ӧ..." << endl;
						Sleep(1 * 1000);
						True3 = false;
						True2 = true;
						itrue = true;
						system("cls");
					}
					else if (ch2 == "2")
					{

						Sleep(0.5 * 1000);
						cout << "���ڳ�������..." << endl;
						Sleep(1 * 1000);
						system("adb devices");
						system("pause");
						cout << "�ȴ���Ӧ..." << endl;
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
						cout << "������Ҫ���ֶ��������ֻ���IP��ַ" << endl;
						cout << "����adb connect xxx.xxx.xxx.xxx" << endl;
						cout << "��ʾconnected to xxx.xxx.xxx.xxx:5555����ɹ�" << endl;
						cout << "��ʾalready connected to xxx.xxx.xxx.xxx:5555�����Ѿ�������" << endl;
						Sleep(1.7 * 1000);
						system("start cmd");
						system("pause");
						cout << "�ȴ���Ӧ..." << endl;
						Sleep(1 * 1000);
						True3 = false;
						True2 = true;
						itrue = true;
						system("cls");
					}
					else if (ch2 == "exit")
					{
						cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
						Sleep(0.8 * 1000);
						cout << "�˳���..." << endl;
						Sleep(1 * 1000);
						True = false;
						itrue = false;
						True0 = false;
						True3 = false;
					}
					else
					{
						cout << "��������Ŷ(��������)��" << endl;
						Sleep(1 * 1000);
						system("cls");
					}
				}
				while (itrue)
				{
					cout << "�������ֽ���ʹ��" << endl;
					cout << endl;
					cout << "1." << "����fastboot" << endl;;
					cout << "2." << "����recovery" << endl;
					cout << "3." << "�����ֻ�" << endl;
					cout << "4." << "�ֻ��ػ�" << endl;
					cout << "5." << "ж��ϵͳ���" << endl;
					cout << "6." << "�Ͽ�adb����" << endl;
					cout << "7." << "����adb����" << endl;
					cout << "8." << "��ȡ����������" << endl;
					cout << "9." << "adb�������(��:����)" << endl;
					cout << "0." << "������һ���˵�" << endl;
					cout << "����cmd����cmd" << endl;
					cout << "����exit�˳�" << endl << endl;
					cout << "����:";
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
							cout << "1.��������\t" << "16.��Ƶ\t\t\t" << "31.ж��ȫ��(����ʱ��ϳ�)" << endl;
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
							cout << "15.�����\t" << "30.SIM�����߰�" << endl;
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
								system("adb shell pm uninstall --user 0 com.coloros.backuprestor");
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
								system("adb shell pm uninstall --user 0 com.android.stk");
								Sleep(1 * 1000);
								system("cls");
							}
							else if (ch4 == "31")
							{

								cout << "ִ�гɹ�" << endl;
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
					else if (ch3 == "6")
					{
						cout << "ִ�гɹ�" << endl;
						Sleep(1 * 1000);
						system("adb kill - server");//�Ͽ�adb����
						Sleep(1 * 1000);
						system("cls");
					}
					else if (ch3 == "7")
					{
						cout << "ִ�гɹ�" << endl;
						Sleep(1 * 1000);
						system("adb start - server");
						//system("taskkill /f /im adb.exe");
						Sleep(1 * 1000);
						system("cls");
					}
					else if (ch3 == "8")
					{
						cout << "ִ�гɹ�" << endl;
						True2 = true;
						Sleep(1 * 1000);
						system("cls");
						while (True2)
						{

							cout << "1. ���ر���" << endl;
							//cout << "2. ��root�������(��Щ�ֻ���Ҫ�򿪽�ֹȨ�޼��)" << endl;
							cout << "2. ����via" << endl;
							cout << "3. ����shizuku" << endl;
							cout << "0. ������һ���˵�" << endl;
							cin >> ch4;
							if (ch4 == "1")
							{
								cout << "ִ�гɹ�" << endl;
								Sleep(1 * 1000);
								system("start https://dl-tc.coolapkmarket.com/down/apk_upload/2020/0523/icebox_coolapk_3.21.128141529-20219-o_1e9029q2s1emp178v1oud1bt3qeer-uid-184454.apk?t=1677249754&sign=a4c8da5021d36bf891cbbb0d19f38f9a");//�򿪱�����վ
								
								Sleep(1 * 1000);
								system("cls");

							}
							else if (ch4 == "2")
							{
								cout << "ִ�гɹ�" << endl;
								Sleep(1 * 1000);
								system("start https://res.viayoo.com/v1/via-release-cn.apk");//��via��վ
								Sleep(1 * 1000);
								system("cls");
							}
							else if (ch4 == "3")
							{
								cout << "ִ�гɹ�" << endl;
								Sleep(1 * 1000);
								system("start https://apt.izzysoft.de/fdroid/repo/moe.shizuku.privileged.api_958.apk");//����shizuku
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
					else if(ch3 =="9")
					{
						cout << "ִ�гɹ�" << endl;
						True2 = true;
						Sleep(1 * 1000);
						system("cls");
						while (True2)
						{
							cout << "1. ��root�������" << endl;
							cout << "2. ����shizuku" << endl;
							cout << "0. ������һ���˵�" << endl;
							cin >> ch4;							
							if (ch4 == "1")
							{
								cout << "ColorOSϵͳ�������ʧ��,��Ҫ�ڿ�����ѡ��򿪽�ֹȨ�޼��" << endl;
								system("pause");
								cout << "ִ�гɹ�" << endl;
								Sleep(1 * 1000);
								system("adb shell sh /sdcard/Android/data/com.catchingnow.icebox/files/start.sh");//adb�������

							}
							else if (ch4 == "2")
							{
								cout << "ColorOSϵͳ�������ʧ��,��Ҫ�ڿ�����ѡ��򿪽�ֹȨ�޼��" << endl;
								system("pause");
								cout << "ִ�гɹ�" << endl;
								Sleep(1 * 1000);
								system("adb shell sh /sdcard/Android/data/moe.shizuku.privileged.api/start.sh");//����shizuku
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
						Sleep(1 * 1000);
						system("cls");
						itrue = false;
						True = false;
						True3 = true;
					}
					else if (ch3 == "exit")
					{
						cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
						Sleep(0.8 * 1000);
						cout << "�˳���..." << endl;
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
						cout << "��������Ŷ(��������)��" << endl;
						Sleep(1 * 1000);
						system("cls");
					}
				}
			}
		}
		else if (ch1 == "n" || ch1 == "N")
		{
			cout << "��ӭ�´�ʹ��,˨Q(�R���Qq)" << endl;
			Sleep(0.8 * 1000);
			cout << "�˳���..." << endl;
			Sleep(1 * 1000);
			True = false;
		}
		else
		{
			cout << "��������Ŷ(��������)��" << endl;
			Sleep(1 * 1000);
			system("cls");
		}
	}
}