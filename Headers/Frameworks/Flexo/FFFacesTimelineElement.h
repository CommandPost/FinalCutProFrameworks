//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

@class FFFace;

__attribute__((visibility("hidden")))
@interface FFFacesTimelineElement : FFBaseDSObject
{
    FFFace *face;
    CDStruct_e83c9415 inOutRange;
}

+ (id)copyClassDescription;
+ (id)faceTimelineElementWithFace:(id)arg1 inOutRange:(CDStruct_e83c9415)arg2;
- (id)initWithFace:(id)arg1 inOutRange:(CDStruct_e83c9415)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
@property CDStruct_e83c9415 inOutRange; // @synthesize inOutRange;
@property(retain, nonatomic) FFFace *face; // @synthesize face;

@end

