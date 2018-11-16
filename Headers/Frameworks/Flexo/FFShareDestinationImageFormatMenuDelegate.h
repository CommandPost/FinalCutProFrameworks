//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFShareDestinationSettingsMenuDelegate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFShareDestinationImageFormatMenuDelegate : NSObject <FFShareDestinationSettingsMenuDelegate>
{
    NSArray *sources;
    NSArray *destinations;
}

@property(copy, nonatomic) NSArray *destinations; // @synthesize destinations;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectSetting:(id)arg1;
- (long long)buildSettingsMenu:(id)arg1 withSize:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

