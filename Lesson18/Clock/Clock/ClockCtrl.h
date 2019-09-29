#pragma once

// ClockCtrl.h : CClockCtrl ActiveX 控件类的声明。


// CClockCtrl : 有关实现的信息，请参阅 ClockCtrl.cpp。

class CClockCtrl : public COleControl
{
	DECLARE_DYNCREATE(CClockCtrl)

// 构造函数
public:
	CClockCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CClockCtrl();

	DECLARE_OLECREATE_EX(CClockCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CClockCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CClockCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CClockCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

