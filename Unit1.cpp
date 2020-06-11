//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <wstring.h>
#include <iomanip>
//#include <string>
#include <vector>
#include <stdexcept>
#include <cassert>
#include <iostream>
//#include "snippet.h"

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
int fac(int n){
	int resultado=1;
	for(int i=1;i<=n;i++)
	resultado*=i;
	return resultado;
}

int combinacion (int n, int k){
	return (fac(n))/(fac(k)*fac(n-k));
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
     int n = StrToInt(Edit1->Text);
     Memo1->Clear();
	for(int i=0; i<=n; i++){

		for(int j=0;j<=i;j++){
           String t = IntToStr(combinacion(i,j));
            Memo1->Text += t + " ";
		}
        Memo1->Text += "\r\n";
	}
}
//---------------------------------------------------------------------------

int MiPermutacion(int n, int r){
int t;
int P;
t=n-r;
		   int A=1;
		   int B=1;
	  if (n>=0&&r>=0&&n>=r) {
		 for(int i=1;i<=n;i++){
		 A*=i;
		 }
		 for(int s=1;s<=t;s++){
			B*=s;
		 }
	  } else
	  {
		  A=0;
		  B=0;
	  }
	P=A/B;
	return P;
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
         String entrada = Edit2->Text;
		 int n= StrToInt(entrada);
         if(n <= 2 )
         {
             ShowMessage("Por favor, ingrese un numero arriba de 2");
         }
                  else
         {
             entrada = Edit3->Text;
		     int r= StrToInt(entrada);
             if(r <= 1 )
         {
             ShowMessage("Por favor, ingrese un numero arriba de 1");
         }
         else
         {
             Permutacion = MiPermutacion(n, r);
		     String salida = IntToStr(Permutacion);
		     Label2 ->Caption = "Resultado : " + salida;
         }
         }
}
//---------------------------------------------------------------------------

int MiCombinacion(int n, int r){
int O;
int t;
int P;
t=n-r;
		   int A=1;
		   int B=1;
		   int C=1;
	  if (n>=0&&r>=0&&n>=r) {
		 for(int i=1;i<=n;i++){
		 A*=i;
		 }
		 for(int s=1;s<=t;s++){
			B*=s;
		 }
		 for(int d=1;d<=r;d++){
		 C*=d;
		 }
	  } else
	  {
		  A=0;
		  B=0;
		  //ShowMessage("No se puede realizar " );
	  }
	P=A/B;
	O=P/C;

	return O;

}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
         String entrada = Edit2->Text;
		 int n= StrToInt(entrada);
         if(n <= 2 )
         {
             ShowMessage("Por favor, ingrese un numero arriba de 2");
         }
                  else
         {
             entrada = Edit3->Text;
		     int r= StrToInt(entrada);
             if(r <= 1 )
         {
             ShowMessage("Por favor, ingrese un numero arriba de 1");
         }
         else
         {
             Combinacion = MiCombinacion(n, r);
		     String salida = IntToStr(Combinacion);
		     Label2 ->Caption = "Resultado : " + salida;
         }
         }
}
//---------------------------------------------------------------------------

int MiFactorial (int n)
{
	int F = 1;

	if (n>= 0) {
		for(int i=1; i<=n ;i++)
		{
			F*=i;
		}
	}
	else
	{
		F=0;
	}

	return F;
}

void __fastcall TForm1::Button4Click(TObject *Sender)
{
       String entrada = Edit6->Text;
	   int n = StrToInt(entrada);
	   Factorial = MiFactorial(n);
	   String salida = IntToStr(Factorial);
       Label5 ->Caption = "R: " + salida;
}
//---------------------------------------------------------------------------

