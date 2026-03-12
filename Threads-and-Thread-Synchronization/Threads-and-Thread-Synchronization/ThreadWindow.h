#pragma once
#include <afxwin.h>
class ThreadWindow : public CFrameWnd
{
public:
    ThreadWindow();
    virtual ~ThreadWindow();
    virtual void PostNcDestroy();
protected:

    DECLARE_MESSAGE_MAP()
};