//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

__attribute__((visibility("hidden")))
@interface FFAnchoredMarker : FFAnchoredObject
{
    CDStruct_1b6d18a9 _duration;
}

+ (id)copyClassDescription;
- (id)type;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_1b6d18a9)duration;
- (void)setDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)unclippedRange;
- (BOOL)isMarker;
- (void)setMetadata:(id)arg1;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;

@end

