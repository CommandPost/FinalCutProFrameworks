//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFArrowTool.h>

@interface FFEditPaintTool : FFArrowTool
{
    CDStruct_1b6d18a9 currentDuration;
}

+ (id)cursor;
+ (id)toolTip;
+ (id)displayName;
+ (void)initialize;
@property(nonatomic) CDStruct_1b6d18a9 requestedDuration; // @synthesize requestedDuration=currentDuration;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)handlesSelection;
- (void)dealloc;
- (id)init;
- (BOOL)skims;
- (void)cursorUpdate:(id)arg1;

@end

