//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKPanel, OZTimelineModule;

@interface OZTimelinePasteSpecialPanel : NSObject
{
    id _replaceToggle;
    id _insertToggle;
    id _overwriteToggle;
    LKPanel *_panel;
    OZTimelineModule *_timelineController;
}

- (id)init;
- (void)dealloc;
- (void)awakeFromNib;
- (void)openWithTimelineController:(id)arg1;
- (void)okNotify:(id)arg1;
- (void)cancelNotify:(id)arg1;

@end
