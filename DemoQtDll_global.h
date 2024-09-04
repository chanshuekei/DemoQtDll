#ifndef DEMOQTDLL_GLOBAL_H
#define DEMOQTDLL_GLOBAL_H

#include <QtCore/qglobal.h>
#include "mtdemodll.h"

#if defined(DEMOQTDLL_LIBRARY)
#define MT_DLL_EXPORT Q_DECL_EXPORT
#else
#define MT_DLL_EXPORT Q_DECL_IMPORT
#endif

// 调用约定
#define MT_CALLING __stdcall
// C样式接口输出
#ifdef __cplusplus
extern "C" {
#endif
MT_DLL_EXPORT int MT_CALLING MT_Open() {
    return MtDemoDll::getInstance().open();
}

MT_DLL_EXPORT int MT_CALLING MT_Close() {
    return MtDemoDll::getInstance().close();
}

MT_DLL_EXPORT int MT_CALLING MT_Test(int a, int b) {
    return MtDemoDll::getInstance().test(a, b);
}

#ifdef __cplusplus
}
#endif

#endif // DEMOQTDLL_GLOBAL_H
