//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFModalProgress.h"

__attribute__((visibility("hidden")))
@interface FFModalProgress : NSObject <FFModalProgress>
{
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)showIfTime;
- (void)endModalProgress;
- (void)updateTitle:(id)arg1;
- (BOOL)updateModalProgress:(id)arg1 currentValue:(double)arg2 maxValue:(double)arg3 allowCancel:(BOOL)arg4;
- (void)beginModalProgress:(id)arg1 titleText:(id)arg2 showType:(int)arg3 targetWindow:(id)arg4;

@end

