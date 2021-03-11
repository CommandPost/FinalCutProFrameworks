//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FxPlugDescriptor : NSObject
{
    struct FxPlugDescriptorPriv *_priv;
}

+ (id)fxPlugDescriptorWithFxMetaPlug:(id)arg1;
+ (id)fxPlugDescriptorWithPROPlugIn:(void *)arg1;
- (BOOL)requiresCoreImage;
- (BOOL)canDoGPU;
- (id)groupDescriptor;
- (id)version;
- (id)uuid;
- (id)displayName;
- (id)plugInTypeUUID;
- (id)flavor;
- (id)metaPlug;
- (Class)plugInClass;
- (id)properties;
- (void)dealloc;
- (id)initWithFxMetaPlug:(id)arg1;
- (id)initWithPROPlugIn:(void *)arg1;

@end

