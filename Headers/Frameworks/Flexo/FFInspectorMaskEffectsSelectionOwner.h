//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFInspectorControllerSelecting-Protocol.h>

@protocol FFInspectorVideoEffectsDataSource;

__attribute__((visibility("hidden")))
@interface FFInspectorMaskEffectsSelectionOwner : NSObject <FFInspectorControllerSelecting>
{
    id <FFInspectorVideoEffectsDataSource> _dataSource;
}

- (void)setUseInactiveSelectionState:(BOOL)arg1 forControllers:(id)arg2;
- (void)deselectControllers:(id)arg1;
- (void)selectControllers:(id)arg1;
- (void)deleteControllers:(id)arg1;
- (BOOL)isControllerSelected:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

