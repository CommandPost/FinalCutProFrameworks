//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FxPlugGroupDescriptor : NSObject
{
    struct FxPlugGroupDescriptorPriv *_priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)arg1 andDisplayName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)uuid;
- (id)displayName;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 andDisplayName:(id)arg2;

@end

