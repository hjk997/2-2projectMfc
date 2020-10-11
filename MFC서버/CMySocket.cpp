#include "stdafx.h"
#include "CMySocket.h"
#include "NetworkDlg.h"


CMySocket::CMySocket()
{
}


CMySocket::~CMySocket()
{
}

void CMySocket::SetParent(CDialog *pWnd)
{
	m_pWnd = pWnd;
}


void CMySocket::OnAccept(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if (nErrorCode == 0)
		((CNetworkDlg*)m_pWnd)->OnAccept();

}


void CMySocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if (nErrorCode == 0)
		((CNetworkDlg*)m_pWnd)->OnClose();

}


void CMySocket::OnConnect(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if (nErrorCode == 0)
		((CNetworkDlg*)m_pWnd)->OnConnect();

}


void CMySocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if (nErrorCode == 0)
		((CNetworkDlg*)m_pWnd)->OnReceive();

}


void CMySocket::OnSend(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if (nErrorCode == 0)
		((CNetworkDlg*)m_pWnd)->OnSend();

}
