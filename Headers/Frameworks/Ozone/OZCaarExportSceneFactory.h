//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZExportSceneFactory.h"

@class NSString;

@interface OZCaarExportSceneFactory : NSObject <OZExportSceneFactory>
{
}

+ (id)layerTreeFromGroup:(struct OZGroup *)arg1;
+ (id)layerFromElement:(struct OZElement *)arg1;
+ (id)layerTreeFromScene:(struct OZScene *)arg1;
+ (BOOL)exportScene:(struct OZScene *)arg1 toURL:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

