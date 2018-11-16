//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LKContainerItemCapView, LKContainerItemDebugView, LKContainerNode, LKContainerView;

@interface LKContainerItemView : NSView
{
    NSView *_contentView;
    NSView *_borderView;
    LKContainerView *_containerView;
    LKContainerNode *_node;
    LKContainerItemDebugView *_debugView;
    LKContainerItemCapView *_headerView;
    LKContainerItemCapView *_footerView;
    unsigned int _hasFocus:1;
    struct CGRect _futureFrame;
    struct CGRect _futureFooterFrame;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateLabel;
- (struct CGRect)draggingAreaFrame;
- (id)node;
- (void)setNode:(id)arg1;
- (id)superContainerView;
- (BOOL)isContainerItemView;
- (void)setSuperContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (BOOL)isEmphasized;
- (void)setEmphasized:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)updateFrameAnimate:(BOOL)arg1;
- (void)updateFrame;
@property struct CGRect futureFrame;
@property struct CGRect futureFooterFrame;
- (id)description;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_setNormalState;
- (void)_setDragState;
- (void)_recomputeFrames;
- (void)_refreshPaneCaps;
- (void)_updateFooterAccessoryView;
- (id)_footerAccessoryView;
- (void)_updateHeaderAccessoryView;
- (void)updateBorder;
- (void)_installBorderView;
- (void)_installDebugView;
- (id)footerView;
- (id)capView;

@end

