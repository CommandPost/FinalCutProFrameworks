//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTile.h"

@class LKButton, LKImageView, LKMenu, LKTextField, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorShareEmbeddedTile : LKTile
{
    LKImageView *_shareStatusImageView;
    LKTextField *_shareEmbeddedInfo;
    LKButton *_embeddedActionButton;
    LKMenu *_embeddedActionMenu;
    LKButton *_embeddedRevealInFinderButton;
    NSString *_shareKind;
    NSString *_shareVideoPath;
    id _shareDelegate;
}

- (void)awakeFromNib;
- (void)actionButtonClicked:(id)arg1;
- (void)tellAFriendOfSharedItem:(id)arg1;
- (void)removeSharedItem:(id)arg1;
- (void)visitSharedItem:(id)arg1;
- (void)revealInFinder:(id)arg1;
@property(retain, nonatomic) id shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(retain, nonatomic) NSString *shareVideoPath; // @synthesize shareVideoPath=_shareVideoPath;
@property(retain, nonatomic) NSString *shareKind; // @synthesize shareKind=_shareKind;
@property(retain, nonatomic) LKButton *embeddedRevealInFinderButton; // @synthesize embeddedRevealInFinderButton=_embeddedRevealInFinderButton;
@property(retain, nonatomic) LKMenu *embeddedActionMenu; // @synthesize embeddedActionMenu=_embeddedActionMenu;
@property(retain, nonatomic) LKButton *embeddedActionButton; // @synthesize embeddedActionButton=_embeddedActionButton;
@property(retain, nonatomic) LKTextField *shareEmbeddedInfo; // @synthesize shareEmbeddedInfo=_shareEmbeddedInfo;
@property(retain, nonatomic) LKImageView *shareStatusImageView; // @synthesize shareStatusImageView=_shareStatusImageView;

@end
