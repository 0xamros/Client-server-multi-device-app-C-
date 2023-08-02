//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)

TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
try{
	 IdTCPClient1->Connect();
	}
	catch(...){
        ShowMessage("be in the same network");
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::IdTCPClient1Status(TObject *ASender, const TIdStatus AStatus,
		  const UnicodeString AStatusText)
{
Label1->Text= AStatusText;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	   if (Edit1->Text!=""){
		IdTCPClient1->Host=Edit1->Text;
		IdTCPClient1->Connect();

	   }else{
		ShowMessage("put host");
	   }
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
if(Edit2->Text!=""){
   IdTCPClient1->Socket->WriteLn(Edit2->Text + " : " + Button2->Text);
   String confirm=IdTCPClient1->Socket->ReadLn();
   Label2->Text=confirm;
}else{
   ShowMessage("put name");
}

}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
if(Edit2->Text!=""){
   IdTCPClient1->Socket->WriteLn(Edit2->Text + " : " + Button3->Text);
   String confirm=IdTCPClient1->Socket->ReadLn();
   Label2->Text=confirm;
}else{
   ShowMessage("put name");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
if(Edit2->Text!=""){
   IdTCPClient1->Socket->WriteLn(Edit2->Text + " : " + Button4->Text);
   String confirm=IdTCPClient1->Socket->ReadLn();
   Label2->Text=confirm;
}else{
   ShowMessage("put name");
}
}
//---------------------------------------------------------------------------
