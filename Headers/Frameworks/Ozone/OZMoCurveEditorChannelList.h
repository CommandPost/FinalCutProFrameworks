//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProCurveEditor/OZCurveEditorChannelList.h>

@class LKMenu;

@interface OZMoCurveEditorChannelList : OZCurveEditorChannelList
{
    LKMenu *_pMenu;
    struct OZChannelBase *_pCurrentChan;
}

- (id)buildMenu:(const struct OZLibraryPresetsMap *)arg1;
- (void)applyBehavior:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

