// This guard prevent this file to be compiled in the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
#import <React/RCTViewComponentView.h>
#import <UIKit/UIKit.h>

#ifndef FlightbaseViewNativeComponent_h
#define FlightbaseViewNativeComponent_h

NS_ASSUME_NONNULL_BEGIN

@interface FlightbaseView : RCTViewComponentView
@end

NS_ASSUME_NONNULL_END

#endif /* FlightbaseViewNativeComponent_h */
#endif /* RCT_NEW_ARCH_ENABLED */
