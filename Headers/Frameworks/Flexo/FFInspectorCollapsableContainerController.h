//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorContainerController.h>

#import <Flexo/FFInspectorCollapsableContainer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorCollapsableContainerController : FFInspectorContainerController <FFInspectorCollapsableContainer>
{
    BOOL _collapsed;
}

@property(getter=isCollapsed) BOOL collapsed; // @dynamic collapsed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

