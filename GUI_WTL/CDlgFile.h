﻿#pragma once
#include <atlddx.h>
#include <atlstr.h>


class CDlgFile : public CDialogImpl<CDlgFile>, public	CWinDataExchange<CDlgFile>
{
public:
	CDlgFile(HWND Parent, int Show = SW_HIDE)
	{
		this->Create(Parent, NULL);
		this->ShowWindow(Show);
	}
public:
	enum { IDD = IDD_FILE };

	BEGIN_DDX_MAP(CDlgFile)

	END_DDX_MAP();

	BEGIN_MSG_MAP(CDlgFile)
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