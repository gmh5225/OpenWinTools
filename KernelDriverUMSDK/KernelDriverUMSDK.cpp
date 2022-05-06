﻿#include "stdafx.h"
#include "framework.h"
#include "../shared/IOControl.h"
#include "CSymParser.h"

void fnKernelDriverUMSDK()
{
}


int main()
{
	//"SRV*d:\\symbols*https://msdl.microsoft.com/download/symbols"

	CSymParser	parser;

	parser.LoadFile(_T("C:\\Windows\\System32\\ntoskrnl.exe"), _T("SRV*d:\\symbols*https://msdl.microsoft.com/download/symbols"));

	//struct
	CSymParser::SymbolLayout _EThread;
	parser.GetSymbolLayout(_T("_ETHREAD"), _EThread);

	//global var
	CSymParser::SymbolLayout _PspCreateThreadNotifyRoutine;
	parser.GetSymbolLayout(_T("PspCreateThreadNotifyRoutine"), _PspCreateThreadNotifyRoutine);

	//internal func
	CSymParser::SymbolLayout _PspSetCreateThreadNotifyRoutine;
	parser.GetSymbolLayout(_T("PspSetCreateThreadNotifyRoutine"), _PspSetCreateThreadNotifyRoutine);

	//exported func
	CSymParser::SymbolLayout _HalReturnToFirmware;
	parser.GetSymbolLayout(_T("HalReturnToFirmware"), _HalReturnToFirmware);

	CSymParser::SymbolLayout HalpInterruptController;
	parser.GetSymbolLayout(_T("HalpInterruptController"), HalpInterruptController);

	return	0;
}