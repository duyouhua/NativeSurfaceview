#ifndef _BMP_LOADER_H_
#define _BMP_LOADER_H_


#ifndef DWORD
	typedef unsigned long DWORD;
	typedef int LONG;
	typedef unsigned short WORD;
#endif
#pragma pack (1)
typedef struct tagBITMAPFILEHEADER { /* bmfh */
	WORD bfType;  //˵���ļ������ͣ���ֵ������0x4D42��Ҳ�����ַ�'BM'��
	DWORD bfSize;  //˵����λͼ�ļ��Ĵ�С�����ֽ�Ϊ��λ
	WORD bfReserved1;  //��������������Ϊ0
	WORD bfReserved2;   //��������������Ϊ0
	DWORD bfOffBits;  //˵�����ļ�ͷ��ʼ��ʵ�ʵ�ͼ������֮����ֽڵ�ƫ����
} BITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER { /* bmih */
	DWORD biSize;    //BITMAPINFOHEADER�ṹ����Ҫ���ֽ�
	LONG biWidth;    //ͼ��Ŀ�ȣ�������Ϊ��λ��
	LONG biHeight;   //ͼ��ĸ߶ȣ�������Ϊ��λ���������������ͼƬ�ǵ���� ��������˵��������
	WORD biPlanes;   //Ŀ���豸˵��λ��������ֵ�����Ǳ���Ϊ1��
	WORD biBitCount;    //������/���أ���ֵΪ1��4��8��16��24����32��
	DWORD biCompression;    //ͼ������ѹ�������ͣ�ͬ������ֻ����û��ѹ�������ͣ�BI_RGB��
	DWORD biSizeImage;    //ͼ��Ĵ�С�����ֽ�Ϊ��λ������BI_RGB��ʽʱ��������Ϊ0��
	LONG biXPelsPerMeter;    //ˮƽ�ֱ��ʣ�������/�ױ�ʾ��
	LONG biYPelsPerMeter;    //��ֱ�ֱ��ʣ�������/�ױ�ʾ��
	DWORD biClrUsed;    //ͼʵ��ʹ�õĲ�ɫ���е���ɫ����������Ϊ0�Ļ�����˵��ʹ�����е�ɫ�����
	DWORD biClrImportant;    //��ͼ����ʾ����ҪӰ�����ɫ��������Ŀ�������0����ʾ����Ҫ��
} BITMAPINFOHEADER;
#pragma pack ()

#endif


