//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <System.hpp>
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::IdTCPServer1Execute(TIdContext *AContext)
{
	  TDateTime* myTime = new TDateTime(Now());
	  String receive=AContext->Connection->Socket->ReadLn();
	  AContext->Connection->Socket->WriteLn(receive + "--> confirmed");
	  ListBox1->Items->Add(myTime->FormatString("d-m-yyyy hh:mm:ss AM/PM") + " --> " + receive);
}
//---------------------------------------------------------------------------
