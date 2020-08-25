//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/_FFMetadataItem.h>

#import "FFInspectorButtonParameterControllerDelegate.h"

@class FFInspectorEnumParameterController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _FFMetadataEnumAsISOItem : _FFMetadataItem <FFInspectorButtonParameterControllerDelegate>
{
    FFInspectorEnumParameterController *_controller;
    NSArray *_currentItems;
    NSArray *_currentAssets;
}

- (void)resetValuesForParameterController:(id)arg1;
- (id)parameterViewController;
- (void)setCurrentItems:(id)arg1 withAssets:(id)arg2;
@property(retain, nonatomic) FFInspectorEnumParameterController *controller; // @dynamic controller;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

