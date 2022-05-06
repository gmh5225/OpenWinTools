﻿#pragma once
#include <atlddx.h>
#include <atlstr.h>


class CDlgHardWare : public CDialogImpl<CDlgHardWare>, public	CWinDataExchange<CDlgHardWare>
{
public:
	CDlgHardWare(HWND Parent, int Show = SW_HIDE)
	{
		this->Create(Parent, NULL);
		this->ShowWindow(Show);
	}
public:
	enum { IDD = IDD_HARDWARE };

	BEGIN_DDX_MAP(CDlgHardWare)

	END_DDX_MAP();

	BEGIN_MSG_MAP(CDlgHardWare)
		MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
		MESSAGE_HANDLER(WM_SIZE, OnSize)
		MESSAGE_HANDLER(WM_ERASEBKGND, OnEraseBknd);
	END_MSG_MAP()
	LRESULT OnEraseBknd(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
	{
		bHandled = true;
		return	0;
	}

	LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};