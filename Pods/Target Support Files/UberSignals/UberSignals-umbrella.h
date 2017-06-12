#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "UBBaseSignal.h"
#import "UberSignals.h"
#import "UBSignal+Preprocessor.h"
#import "UBSignal.h"
#import "UBSignalObserver.h"

FOUNDATION_EXPORT double UberSignalsVersionNumber;
FOUNDATION_EXPORT const unsigned char UberSignalsVersionString[];

