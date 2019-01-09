#ifndef BASIC_SETTING
#define BASIC_SETTING

#define _CRT_SECURE_NO_WARNINGS

// �������
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <Wincon.h>
#include "Music.h"

// ���� ����
typedef enum _Color {
	Black = 0x00,
	Blue = 0x01,
	Green = 0x02,
	Aqua = 0x03,
	Red = 0x04,
	Purple = 0x05,
	Yellow = 0x06,
	White = 0x07,
	Gray = 0x08,
	LightBlue = 0x09,
	LightGreen = 0x0A,
	LightAqua = 0x0B,
	LightRed = 0x0C,
	LightPurple = 0x0D,
	LightYellow = 0x0E,
	BrightWhite = 0x0F
} Color;

// ���콺 Ÿ�� ����
typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;

// �ܼ� �⺻ ����
typedef struct _CONSOLE_SET_PROFILE{
	int width;
	int height;
	CURSOR_TYPE curType;
	wchar_t *fontName;
	int fontSize;
	char backColor;
	char fontColor;
}CONSOLE_PROFILE;

// �ڷ��� ������
typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned short ushort;

// Ű���� ����
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define KEYERROR 1
#define ENTERKEY 13
#define ESCKEY 27
#define TABKEY 9
#define SKEY 115
#define NUM1 '1'
#define NUM2 '2'
#define NUM3 '3'
#define NUM4 '4'

void setConsole(CONSOLE_PROFILE profile);
void setFont(const wchar_t *fontName, int fontSize);
int isASCII(char text);
void gotoxy(int x, int y);
void eraseCur();
void SetCursorType(CURSOR_TYPE Type);
void setWindowSize(int x, int y);
char colorSet(Color back, Color font);
void gotoPrint(const char *type, int x, int y, const void* text, char back, char font);
uchar getKey();
int gotoTyping(char sound, int x, int y, const char* text, char back, char font, int type);
int timeCheck(clock_t times, int timesize);
#endif