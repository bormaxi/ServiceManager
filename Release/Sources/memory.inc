;------------------------------------------------------------------------------
; �������� �������� Windows
;
; ����:      memory.inc
; ��������:  ������� ��� ������ � �������
; �����:     ������� ���� ���������, YormLokison@yandex.ru
;------------------------------------------------------------------------------

malloc proto dwSize: DWORD
realloc proto lpMemBlock:LPVOID, dwSize: DWORD
mfree proto lpMemBlock:LPVOID
