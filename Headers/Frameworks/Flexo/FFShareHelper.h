//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserInterfaceValidations.h"

@interface FFShareHelper : NSObject <NSUserInterfaceValidations>
{
    id <NSObject><FFSharableContent> _owner;
}

+ (id)disabledAssignedAVRolesForSequence:(id)arg1 includeAudio:(BOOL)arg2;
@property(nonatomic) id <NSObject><FFSharableContent> owner; // @synthesize owner=_owner;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)shareActions;
- (void)openInCompressorAsITMSPackage:(BOOL)arg1;
- (void)openITMSPackageInCompressor:(id)arg1;
- (void)openInCompressor:(id)arg1;
- (void)shareToDefaultDestination:(id)arg1;
- (void)shareToDestination:(id)arg1;
- (void)_shareToDestination:(id)arg1 isDefault:(BOOL)arg2;
- (BOOL)_shouldExcludeDisabledRolesInShare:(id)arg1;
- (void)_exportUsingSelector:(SEL)arg1 sender:(id)arg2;
- (void)missingMediaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)warnForMissingMedia:(id)arg1 withSender:(id)arg2 andSelector:(SEL)arg3;
- (void)warnForProxyMedia:(BOOL)arg1 withSelection:(id)arg2 andSender:(id)arg3 andSelector:(SEL)arg4;
- (void)exportUsingSelector:(SEL)arg1 sender:(id)arg2;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

