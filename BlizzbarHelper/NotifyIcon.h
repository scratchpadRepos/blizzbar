#pragma once
#include <Windows.h>
#include <shellapi.h>

#include <string>

class NotifyIcon
{
public:
	NotifyIcon(HWND hwnd, UINT callback, HICON icon, const std::wstring& tooltip);
	~NotifyIcon();

	NotifyIcon(const NotifyIcon&) = delete;
	NotifyIcon& operator=(const NotifyIcon&) = delete;

private:
	NOTIFYICONDATAW m_data;
};

