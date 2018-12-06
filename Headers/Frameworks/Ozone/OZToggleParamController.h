//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class OZViewController;

@interface OZToggleParamController : OZViewControllerGroup
{
    OZViewController *_pLabelController;
    OZViewController *_pExpandedController;
    OZViewController *_pCollapsedController;
}

- (id)initWithLabelController:(id)arg1 withExpandedParamController:(id)arg2 withCollapsedParamController:(id)arg3 isHUD:(BOOL)arg4;
- (void)swapView:(id)arg1 withView:(id)arg2;
- (void)notify:(unsigned int)arg1;
- (void)twiddle;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;

@end

