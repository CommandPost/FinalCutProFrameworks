//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTimecodeFormatter.h"

@interface FFTimecodeFormatter : LKTimecodeFormatter
{
}

+ (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 fromFrameDuration:(CDStruct_1b6d18a9)arg2 fromDropFrame:(long long)arg3 toFrameDuration:(CDStruct_1b6d18a9)arg4 toDropFrame:(long long)arg5;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_FFTimecodeFormatter_init;

@end

