//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface AutoEncodeDecodeObject : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToObject:(id)arg1;
- (id)description;
- (id)keysToSetToNil;
- (id)keysToEncode;

@end

