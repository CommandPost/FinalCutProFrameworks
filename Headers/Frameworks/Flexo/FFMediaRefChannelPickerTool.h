//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMatchTool.h>

@interface FFMediaRefChannelPickerTool : FFMatchTool
{
    CDStruct_1b6d18a9 _sourceOffset;
}

+ (id)cursor;
+ (id)displayName;
+ (void)initialize;
+ (id)TLKEventHandlerID;
- (CDStruct_1b6d18a9)sourceOffset;
- (void)setSourceOffset:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)becomeActiveTool;
- (id)init;
- (void)didRemoveAsHandlerForTimeline:(id)arg1;
- (void)willSetAsHandlerForTimeline:(id)arg1;

@end

