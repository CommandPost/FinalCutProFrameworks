//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKTableView.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFMDMusicTableView : LKTableView
{
    BOOL _moduleFocused;
    long long _rolledOverRowIndex;
    NSTrackingArea *_rolloverTrackingArea;
}

@property(retain, nonatomic) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
@property(nonatomic) long long rolledOverRowIndex; // @synthesize rolledOverRowIndex=_rolledOverRowIndex;
@property(nonatomic, getter=isModuleFocused) BOOL moduleFocused; // @synthesize moduleFocused=_moduleFocused;
- (id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)updateTrackingAreas;
- (void)removeMouseTracking;
- (void)addMouseTracking;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setRolledOverRowByPoint:(struct CGPoint)arg1;
- (void)setRolledOverRow:(long long)arg1;
- (void)clearRolledOverRow;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;

@end

