;------------------------------------------------------------------------------
; �������� �������� Windows
;
; ����:      global.inc
; ��������:  ���� ������ � ����� ����������
; �����:     ������� ���� ���������, YormLokison@yandex.ru
;------------------------------------------------------------------------------

; ���������
TB_SETBUTTONINFOW  EQU (WM_USER+64)
TB_SETBUTTONINFOA  EQU (WM_USER+66)
TB_SETBUTTONINFO   EQU TB_SETBUTTONINFOA

TBIF_BYINDEX       EQU 080000000h
TBIF_COMMAND       EQU 32
TBIF_IMAGE         EQU 1
TBIF_LPARAM        EQU 16
TBIF_SIZE          EQU 64
TBIF_STATE         EQU 4
TBIF_STYLE         EQU 8
TBIF_TEXT          EQU 2

SERVICE_CONFIG_DESCRIPTION     EQU 1
SERVICE_CONFIG_FAILURE_ACTIONS EQU 2

SC_ACTION_NONE                 EQU 0
SC_ACTION_RESTART              EQU 1
SC_ACTION_REBOOT               EQU 2
SC_ACTION_RUN_COMMAND          EQU 3

; ���� ������
DT_INTEGER      EQU 00000001h
DT_FLOAT        EQU 00000002h
DT_DATETIME     EQU 00000003h
DT_TIME         EQU 00000004h
DT_STRING       EQU 00000005h

; ���� �������
CT_SERV_INAME       EQU 00000001h
CT_SERV_DNAME       EQU 00000002h
CT_SERV_DESCRIPTION EQU 00000003h
CT_SERV_TYPE        EQU 00000004h
CT_SERV_START_TYPE  EQU 00000005h
CT_SERV_ERROR_TYPE  EQU 00000006h
CT_SERV_LOGON       EQU 00000007h

CT_LOG_SERV         EQU 00000008h
CT_LOG_OP           EQU 00000009h
CT_LOG_STATUS       EQU 0000000Ah
CT_LOG_ERRCODE      EQU 0000000Bh
CT_LOG_ERRDESC      EQU 0000000Ch

ERROR_TIMEOUT        EQU 1460

TMP_BUF_SIZE         EQU 1024
SERV_NAME_LEN        EQU 256
SERV_CODE_LENTH      EQU 256
SERV_WAIT_TIMEOUT    EQU 5000

DIALOGPARAM_NEW      EQU 0
DIALOGPARAM_EDIT     EQU 1

QD_OPEN              EQU 1
QD_QUERYCONFIG       EQU 2
QD_QUERYDESCRIPTION  EQU 4
QD_QUERYFAILURE      EQU 8

CND_LOCALCOMP        EQU 0
CND_REMOTECOMP       EQU 1

; ���� ������
HKEY TYPEDEF DWORD

; ��������� ��� ������ �  ToolBar'��
ToolBarInfo struct
    pWindowName LPSTR     ?      ; �������� ����

    hBitmap         HBITMAP ?    ; ����� �������
    IdBitmap        DWORD   ?    ; �������������    �������
    BitmapCount     DWORD   ?    ; ����������  ��������
    BitmapWidth     DWORD   ?    ; ������ �������
    BitmapHeight    DWORD   ?    ; ������  �������

    ItemCount       DWORD  ?     ; ����������  ������
    ItemWidth       DWORD  ?     ; ������ ������
    ItemHeight      DWORD  ?     ; ������  ������
    pButtons        DWORD  ?     ; ������ ������
ToolBarInfo ends

; ��������� ������ ComboBox
ComboBoxRecord struct
    id              DWORD ?          ; ������������
    RecordName      BYTE 100 dup(0)  ; ������
ComboBoxRecord ends

; ��������� ������� �������
ColumnInfo struct
    ColumnType     DWORD ?           ; ������������� �������
    DataType       DWORD ?           ; ��� ������ ��� �����������
    ColumnName     BYTE 100 DUP(?)   ; �������� �������
    ColumnWidth    DWORD ?           ; ������ �������
    Color          COLORREF ?        ; ����
    flags          DWORD ?           ; �����
ColumnInfo ends

; ��������� �������� TabControl
TabPage struct
    szPageTitle    BYTE 100 DUP(?)   ; �������� ��������
    nDialogId      DWORD ?           ; ������������� �������
    hWnd           HWND ?            ; ����� ���� ������������� �� ��������
    pFunct         LPVOID ?          ; ���������� ������� ����
    nFlags         DWORD ?           ; �����
TabPage ends

; ���������    ��������   TreeView
TreeViewItem struct
    hItem          HANDLE ?        ; ����� ��������
    hParent        HANDLE ?        ; ����� ��������
    
    iImage         DWORD ?         ; ������ ��������
    iSelectedImage DWORD ?         ; ������ ��������
    lParam         DWORD ?         ; ������ ��������

    ItemString     BYTE 100 dup(?) ; ������
TreeViewItem ends

; ���������    ��� ������   � TreeView
TreeViewInfo struct
    hImageList    HANDLE ?    ; ����� ������ ������
    
    IdBitmap      DWORD ?     ; ������������� �������
    IdMask        DWORD ?     ; ������������� �������
    ImageCount    DWORD ?     ; ���������� ��������
    ImageWidth    DWORD ?     ; ������ �������
    ImageHeight   DWORD ?     ; ������ �������

    ItemCount     DWORD ?     ; ����������  ���������
    pItems        DWORD ?     ; ������ ������
TreeViewInfo ends

; ��������� ���������� ��� ������� ��������� ��������� URL
sUrlParam struct
    pOldProc      DWORD ?    ; ������ ���������� ���������
    pNewProc      DWORD ?    ; ����� ���������� ���������
    hCursor       HANDLE ?   ; ������
sUrlParam ends

; ������ ���������
CheckItemData struct
    ItemId        DWORD ?
    ItemCode      DWORD ?
CheckItemData ends

ComputorNameData struct 
    dwCompFlag      DWORD ?
    dwCompNameSize  DWORD ?
    lpCompName      LPCSTR ?
ComputorNameData ends 

ServiceDataParam struct
    hSCManager      HANDLE ?
    hService        HANDLE ?
    dwServiceType   DWORD ?
    dwDesiredAccess DWORD ?
    szServiceName   BYTE  SERV_NAME_LEN dup(?)
    cdComp          ComputorNameData <?>
    hLog            HWND ?
    lpdwCount       LPDWORD ?
    dwMode          DWORD ?
    dwCancelCode DWORD ?
    dwStatus        DWORD ?
ServiceDataParam ends

CodeString struct
    dwCode DWORD ?
    szString BYTE SERV_CODE_LENTH dup(0)    
CodeString ends

SERVICE_DESCRIPTION struct
    lpDescription LPCSTR ?
SERVICE_DESCRIPTION ends

SC_ACTION struct
    dwActionType DWORD ?
    dwDelay      DWORD ?
SC_ACTION ends

SERVICE_FAILURE_ACTIONS struct
    dwResetPeriod DWORD ?
    lpRebootMsg   LPCSTR ?
    lpCommand     LPCSTR ?
    cActions      DWORD ?
    lpsaActions   LPVOID ?
SERVICE_FAILURE_ACTIONS ends

CHANGE_SERVICE_CONFIG struct
  dwServiceType         DWORD ?
  dwStartType           DWORD ?
  dwErrorControl        DWORD ?
  lpBinaryPathName      DWORD ?
  lpLoadOrderGroup      DWORD ?
  dwTagId               DWORD ?
  lpDependencies        DWORD ?
  lpServiceStartName    DWORD ?
  lpPass                DWORD ?
  lpDisplayName         DWORD ?
CHANGE_SERVICE_CONFIG ends

; ����������
EXTERNDEF hInstance: HINSTANCE
EXTERNDEF hMainWnd: HWND
EXTERNDEF hMainToolBar: HWND
EXTERNDEF hMainStatus: HWND
EXTERNDEF hMainTreeView: HWND
EXTERNDEF hServiceList: HWND
EXTERNDEF hLogList: HWND

EXTERNDEF dwSCMAccess: DWORD
EXTERNDEF dwServAccess: DWORD
EXTERNDEF dwServiceEnumType: DWORD

EXTERNDEF szOpen: BYTE
EXTERNDEF szFmtS: BYTE
EXTERNDEF szFmtD: BYTE
EXTERNDEF szFmtX: BYTE
