#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
#include<iomanip>
#include<time.h>
#include<math.h>
#define TRUE 1
#define FALSE 0
#define ESC 27
#define ENTER 13
#define MAX_VT 20
#define MAX_NV 500
#define MAX_INPUT 255
#define MAX_STACK 500
#define ENTER 13
#define BACKSPACE 8
#define ESC 27
#define TAB 9
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32
#define F2 60
#define F7 65
#define F8 66
#define F9 67
#define F10 68
#define PU 73
#define PD 81
#define WIDTH 208
#define HEIGHT 48

#define X_VT 5
#define Y_VT 5
#define X_STTBAR 3
#define Y_STTBAR 47
#define X_TITLE 86
#define Y_TITLE 2

#define MAUNOTIF 224
#define MAUNEN 79
#define MAUNEN_SUCCESS 47
#define MAUVIENKHUNG 151
#define MAUOPTION 47
#define MAU_CONSOLE 159
#define MAU_TITLE 159
#define MAU_STTBAR 159
#define MAUNENBT_SL 222
#define MAUNENBT_NSL 246
#define MAUTEXTBT_SL 237
#define MAUTEXTBT_NSL 111
#define MAUCHU_ERR 148
#define MAUCHU_SCC 158
using namespace std;

//	GIAO DIEN
void resizeConsole(int width, int height); // ham set do phan giai va mo ra o toa do co dinh
void remove_scrollbar(); // ham xoa thanh cuon
void gotoxy(int x, int y);
int getx(); // lay toa do x hien tai cuar con tro
int gety(); // lay toa do y hien tai cuar con tro
void TextColor(int color);
void Ve_Giao_Dien();
void VeButton(int rong, int posx, int posy, string source, int colorBT, int colorTEXT, int dai = 0);
void XoaButton(int rong, int posx, int posy, string source, int colorBT, int colorTEXT, int dai = 0);
void VeKhung(int rong, int posx, int posy, int dai = 0, string source = "");
void XoaKhung(int rong, int posx, int posy, int dai = 0, string source = "");
void VeBang(int rong, int dai, int colump1 = 0, int colump2 = 0, int colump3 = 0, int colump4 = 0, int colump5 = 0,  int posx = 0, int posy = 0); // ve bang chua thong tin
void VeBangNotif(int rong, int dai, int posx, int posy); // ve bang thong bao
void VeLine(int dai, int posx, int posy);
//	MENU

void BackToMenu();// quay tro lai menu
void Menu();// menu chinh

//	HAM XU LY
struct InputSTR
{
	unsigned int n;
	char *Key[MAX_INPUT];
};
void Upper(string s);// in hoa chu cai dau 
void docsonguyen(int n);
char *STR_to_Char(string str); // doi kieu string sang char 
void NhapCHUOISO(char *variable, char type, char &key, int len = 0); // ham chi nhap chuoi va so
void NhapCHUOI(char *variable, char &key, int len = 0); // ham chi nhap chuoi
void NhapCHUOI_SO(char *variable, char &key, int len = 0); // ham nhap chuoi va so co khoang trang
void NhapSO(int &variable, char *num, char &key, int len = 0); // ham chi nhap so
void NhapSO_F(float &variable, char *num, char &key, int len = 0); //nhap so dang float
void NhapSO_U(unsigned int &variable, char *num, char &key, int len); //nhap so dang unsigned int
void NhapNGAY(int &variable, char *num, char &key, int len = 0); // ham chi nhap ngay
void NhapTHANG(int &variable, char *num, char &key, int len = 0); // ham chi nhap thang
void NhapNAM(int &variable, char *num, char &key, int len = 0); // ham chi nhap nam

// DANH SACH VAT TU
struct VatTu
{
	char maVT[10];
	string tenVT;
	string DVT;
	int slTon;
};
typedef struct VatTu VAT_TU;

struct NodeVT
{
	VAT_TU data;
	struct NodeVT *pLeft;
	struct NodeVT *pRight;
};
typedef struct NodeVT NODE_VT;
typedef NODE_VT* TREE_VT;

//	DANH SACH HOA DON
struct NgayThang
{
	int day;
	int month;
	int year;
};
typedef struct NgayThang DAT;

struct ctHoaDon
{
	char maVT[10];
	int soLuong;
	unsigned int donGia;
	float VAT;
};
typedef struct ctHoaDon CT_HOADON;

struct NodeCTHD
{
	CT_HOADON Node_HD[MAX_VT];
	int n;
};
typedef struct NodeCTHD NODE_CTHD;

struct HoaDon
{
	char soHD[20];
	DAT date;
	char loai[2];
	NODE_CTHD *cthd;
};
typedef struct HoaDon HOA_DON;

struct NodeHD
{
	HOA_DON data;
	struct NodeHD *pNext;
};
typedef struct NodeHD NODE_HD;

struct ListHD
{
	NODE_HD *pHead;
	NODE_HD *pTail;
};
typedef struct ListHD LIST_HD;

//	DANH SACH NHAN VIEN
struct NhanVien
{
	char maNV[21];
	string ho;
	string ten;
	int phai;
	NODE_HD *dshd;
};
typedef struct NhanVien NHAN_VIEN;

struct NodeNV
{
	NHAN_VIEN *Node_NV[MAX_NV];
	int n;
};
typedef struct NodeNV NODE_NV;

void Init_VT(TREE_VT &t);// khoi tao cay rong {OK}
int isEmpty_VT(TREE_VT t);// kiem tra cay rong {OK}
int SoSanh_MaVT(VAT_TU x, VAT_TU y);//so sanh ma vat tu 
int Search_NLR(TREE_VT t, char x[]);// ham kiem tra ma vat tu da co hay chua
int QuaTrai(VAT_TU vt, TREE_VT t);
int QuaPhai(VAT_TU vt, TREE_VT t);
/*====cac thu tuc, ham xuat======*/
// xuat vat tu
void Output_VT(VAT_TU x); 
string OutputHD_TenVT(TREE_VT t, char x[]);
TREE_VT Search_VT(TREE_VT t, char x[]);//tim vat tu co ma vat tu x {OK}
void Insert_VT(TREE_VT &t, VAT_TU x);// thu tuc them 1 vat tu vao cay
void Insertfile_VT(TREE_VT &t, VAT_TU x);// thu tuc them 1vat tu tu file vao cay
void Update_VT(TREE_VT &t, char x[], int y);// cap nhat lai so luong ton kho
void Create_VT(TREE_VT &t);// tao cay
void Load_VT(TREE_VT &t);// load data vat tu tu file vao chuong trinh
void Save(TREE_VT t, fstream &file);// thu tuc luu vat tu vao file
void Outfile_VT(TREE_VT t, fstream &file);// thu tuc ghi danh sach vat tu vao file
void Save_VT(TREE_VT t);// xuat thong tin danh sach vat tu ra file
void LNR(TREE_VT t);// duyet cay LNR
int CountVT(TREE_VT t);// dem so vat tu trong cay
int Kiemtra_MaVT(TREE_VT t, char x[]);// kiem tra vat tu nhap/xuat da ton tai chua
// xoa vat tu
VAT_TU LeftMost(TREE_VT root);
TREE_VT DeleteNodeVT(TREE_VT root, VAT_TU value);
void Delete_VT(TREE_VT t);
int Del(TREE_VT &t, char x[]);
void Fix_VT(TREE_VT t);// sua thong tin vat tu
void Quicksort_VT(VAT_TU *a[500], int q, int r);
void Quicksort_Max(TREE_VT t, VAT_TU *a[500], float toida[100], int q, int r); // sap xep 10 vat tu doanh thu cao nhat
void CopyVT(TREE_VT t, char &key);// sao chep vat tu qua mang tam
void SortVT(TREE_VT t);
void QLVT(TREE_VT &t, LIST_HD l); // quan li vat tu
//----HOA DON-------
void InitCTHD(NODE_CTHD *cthd);// khoi tao danh sach chi tiet hoa don
void Init_HD(LIST_HD &l);// Khoi tao danh sach lien ket hoa don
void InitNVHD(NODE_HD *hd); // khoi tao danh sach cac hoa don ma nhan vien do lap
int isEmpty(NODE_CTHD *cthd);// kiem tra danh sach ct hoa don rong
int isFull(NODE_CTHD *cthd);// kiem tra danh sach ct hoa don day
int Search_MaHD(LIST_HD l, char *x); // tim so hoa don
HOA_DON Search_HD(LIST_HD l, char *x); // tim hoa don va tra ve hoa don do {OK}
void Output_HD(HOA_DON x, TREE_VT t, NHAN_VIEN *q);// xuat hoa don
NODE_HD *Get_HD(HOA_DON x);// khoi tao 1 hoa don
void AddTail(LIST_HD &l, NODE_HD *p);// them 1 hoa don vao cuoi danh sach lien ket
void Input_HD(LIST_HD &l, NODE_NV &p, TREE_VT &t);// them 1 hoa don
void Output_lHD(LIST_HD l, TREE_VT t, NODE_NV p);// Xuat danh sach hoa don
int DemSOHD(LIST_HD l); // dem co bao nhieu hoa don
void Statistical(LIST_HD l, NODE_NV p);// thong ke hoa don
void VTMAX(TREE_VT t, LIST_HD l);// in 10 vat tu co doanh thu cao nhat trong khoang thoi gian
void QLHD(LIST_HD &l, TREE_VT &t, NODE_NV &p);
int isAdded(NODE_CTHD *cthd, char *ma);
//-----NHAN VIEN--------
void InitNV(NODE_NV &p);// khoi tao danh sach
int isEmpty(NODE_NV &p);// kiem tra danh sach rong
int isFull(NODE_NV &p);// kiem tra danh sach day
void LoadNV(NODE_NV &p); // load du lieu nhan vien tu file
void Save_NV(NODE_NV p); // luu du lieu nhan vien vao file
int SearchMANV(NODE_NV p, char *ma); // tim ma nhan vien
NHAN_VIEN *Search_NVHD(NODE_NV p, char *ma); // tim nhan vien lap hoa don {OK}
void Input_NV(NODE_NV &p);// them 1 nhan vien
void Quicksort_NV(NODE_NV &p, int q, int r);// sap xep theo ten nhan vien
void Output_NV(NODE_NV &p, char &key);// xuat tat ca nhan vien
void Output_1NV(NHAN_VIEN *x);// xuat 1 nhan vien 
void Delete_NV(NODE_NV &p);// xoa nhan vien
void Fix_NV(NODE_NV &p);// sua thong tin nhan vien
void Sort_Name(NODE_NV &p);// sap xep ten nhan vien
void QLNV(NODE_NV &p);
int CheckDay(DAT date); //ham kiem tra ngay thang hop le
int Totime(DAT a); // tinh khoang thoi gian
void LoadHD(LIST_HD &l, NODE_NV &p); // nhap vao danh sach hoa don
void SaveHD(LIST_HD l, NODE_NV p); // luu danh sach hoa don vao file
void inMenu(TREE_VT t, NODE_NV p, LIST_HD l);// in menu ra man hinh
void Screenload(TREE_VT &t, NODE_NV &p);
void Output_NV1(NODE_NV &p, char &key);
void CopyVT1(TREE_VT t, char &key);
