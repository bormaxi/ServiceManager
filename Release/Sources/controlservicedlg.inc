;------------------------------------------------------------------------------
; �������� �������� Windows
;
; ����:      controlservicedlg.inc
; ��������:  ���������� ���� "���������� �������"
; �����:     ������� ���� ���������, YormLokison@yandex.ru
;------------------------------------------------------------------------------

; �������
ServiceControlDialogFunc proto hWnd:HWND, uMsg:UINT, wParam:WPARAM, lParam:LPARAM
CloseDialog proto hWnd: HWND
UpdateStatusControls proto hWnd: HWND, lpStatus: LPVOID
