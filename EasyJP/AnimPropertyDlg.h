#if !defined(AFX_ANIMPROPERTYDLG_H__EE57B9DC_A60C_11D1_AB14_444553540000__INCLUDED_)
#define AFX_ANIMPROPERTYDLG_H__EE57B9DC_A60C_11D1_AB14_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// AnimPropertyDlg.h : ヘッダー ファイル
//

/////////////////////////////////////////////////////////////////////////////
// CAnimPropertyDlg ダイアログ

class CAnimPropertyDlg : public CDialog
{
// コンストラクション
public:
	CAnimPropertyDlg(CWnd* pParent = NULL);   // 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CAnimPropertyDlg)
	enum { IDD = IDD_ANIMPROPERTY };
	int		m_nDefaultDelay;
	//}}AFX_DATA


// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。

	//{{AFX_VIRTUAL(CAnimPropertyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:

	// 生成されたメッセージ マップ関数
	//{{AFX_MSG(CAnimPropertyDlg)
		// メモ: ClassWizard はこの位置にメンバ関数を追加します。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_ANIMPROPERTYDLG_H__EE57B9DC_A60C_11D1_AB14_444553540000__INCLUDED_)
