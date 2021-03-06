//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProCore/NSCopying-Protocol.h>

@interface PCWeakPointerValue : NSObject <NSCopying>
{
    id _pointerValue;
    id _zeroingWeakValue;
    BOOL _hasZeroingWeakReference;
}

+ (id)setFromWeakPointerValueSet:(id)arg1;
+ (id)weakPointerValueSetFromSet:(id)arg1;
+ (id)arrayFromWeakPointerValueArray:(id)arg1;
+ (id)weakPointerValueArrayFromArray:(id)arg1;
+ (id)valueWithPointer:(void *)arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
@property(readonly, nonatomic) void *pointerValue; // @synthesize pointerValue=_pointerValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) id nonretainedObjectValue;
- (void)dealloc;
- (id)initWithPointer:(void *)arg1;
- (id)initWithNonretainedObject:(id)arg1;

@end

