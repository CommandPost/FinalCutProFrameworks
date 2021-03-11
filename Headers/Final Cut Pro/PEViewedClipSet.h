//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PEViewedClipSet : NSObject
{
    NSArray *_clips;
    NSArray *_contexts;
    NSArray *_effectCounts;
    int _layoutStyle;
    BOOL _transient;
    BOOL _takeFocusOnLoad;
    BOOL _preferAudio;
    BOOL _allowsAngleViewer;
    id _owner;
    CDUnknownBlockType _loadingBlock;
    CDUnknownBlockType _unloadingBlock;
    int _targetPlayer;
}

@property(nonatomic) int targetPlayer; // @synthesize targetPlayer=_targetPlayer;
@property(nonatomic) BOOL allowsAngleViewer; // @synthesize allowsAngleViewer=_allowsAngleViewer;
@property(nonatomic) BOOL preferAudio; // @synthesize preferAudio=_preferAudio;
@property(nonatomic) BOOL takeFocusOnLoad; // @synthesize takeFocusOnLoad=_takeFocusOnLoad;
@property(nonatomic) BOOL transient; // @synthesize transient=_transient;
@property(readonly, retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, copy, nonatomic) NSArray *effectCounts; // @synthesize effectCounts=_effectCounts;
@property(readonly, copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(readonly, copy, nonatomic) NSArray *clips; // @synthesize clips=_clips;
- (id)description;
- (CDUnknownBlockType)unloadingBlock;
- (CDUnknownBlockType)loadingBlock;
- (BOOL)isEqualTo:(id)arg1;
- (void)dealloc;
- (id)initWithClips:(id)arg1 contexts:(id)arg2 effectCounts:(id)arg3 layoutStyle:(int)arg4 owner:(id)arg5;
- (id)initWithClips:(id)arg1 contexts:(id)arg2 effectCounts:(id)arg3 layoutStyle:(int)arg4 owner:(id)arg5 unloadingBlock:(CDUnknownBlockType)arg6;
- (id)initWithClips:(id)arg1 contexts:(id)arg2 effectCounts:(id)arg3 layoutStyle:(int)arg4 owner:(id)arg5 loadingBlock:(CDUnknownBlockType)arg6 unloadingBlock:(CDUnknownBlockType)arg7;

@end

