//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZTimingMoveController.h"

@interface OZMoTimingMoveController : OZTimingMoveController
{
    struct OZDocument *_pDocument;
}

+ (BOOL)openWithEvent:(id)arg1 parentRect:(struct CGRect)arg2 document:(struct OZDocument *)arg3 timeValue:(double *)arg4 timeIsDelta:(char *)arg5;
- (BOOL)openWithEvent:(id)arg1 parentRect:(struct CGRect)arg2 document:(struct OZDocument *)arg3 value:(double *)arg4 isDelta:(char *)arg5;

@end
