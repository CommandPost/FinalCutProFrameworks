//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PEModuleLayoutUpdater_CompareViewer : NSObject
{
}

+ (id)updater;
- (BOOL)update:(id)arg1 error:(id *)arg2;
- (id)findSubmoduleWithIdentifier:(id)arg1 inSubmodules:(id)arg2;
- (id)findParentOfSubmoduleWithIdentifier:(id)arg1 inSubmodules:(id)arg2;
- (id)submodule:(id)arg1 hasChildWithIdentifier:(id)arg2;
- (id)init;

@end

